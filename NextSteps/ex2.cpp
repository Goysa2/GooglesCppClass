// ex1.cpp Samuel Goyette
// Description: A solution to exercise two of : https://developers.google.com/edu/c++/next-steps#exercises

#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */

using namespace std;
int GetBookCode() {
	int book_code;
	cout << "Please enter the book code: ";
	cin >> book_code;
	return book_code;
}

double GetCopyPrice() {
	double copy_price;
	cout << "single copy price: ";
	cin >> copy_price;
	return copy_price;
}

int GetNbOnHand() {
	int nb_on_hand;
	cout << "Number on hand: ";
	cin >> nb_on_hand;
	return nb_on_hand;
}


int GetEnrollment() {
	int nb_enroll;
	cout << "prospective enrollment: " ;
	cin >> nb_enroll;
	return nb_enroll;
}

int GetRqd() {
	int rqd;
	cout << "1 for reqd/0 for optional:";
	cin >> rqd;
	return rqd;
}

int GetNew() {
	int new_book;
	cout << "1 for new/0 for optional:";
	cin >> new_book;
	return new_book;
}

void DisplayData(int book_code, double book_price, int nb_on_hand, int enroll, bool rqd, bool n_b) {
	string required = (rqd == 1) ? "required" : "optional";
	string new_book = (n_b == 1) ? "new" : "used";
	printf("******************************** \n");
	printf("Book: %i \n", book_code);
	printf("Price: $%f \n", book_price);
	printf("Inventory: %i \n", nb_on_hand);
	printf("Enrollment: %i \n", enroll);
	cout << "This book is " << required << " and " << new_book << endl;
	printf("******************************** \n");
}

int NbOfBooksToBuy(int nb_on_hand, int enroll, int rqd, int n_b) {
	if ((rqd == 1) & (n_b ==1))
	{
		return (0.9 * enroll) - nb_on_hand;
	}
	if ((rqd == 1) & (n_b == 0))
	{
		return (0.65 * enroll) - nb_on_hand;
	}
	if ((rqd == 0) & (n_b == 1))
	{
		return (0.4 * enroll) - nb_on_hand;
	}
	if ((rqd == 0) & (n_b == 0))
	{
		return (0.2 * enroll)-nb_on_hand;
	}

}

double Cost(int nb_to_buy, double price) {
	return nb_to_buy * price;
}

void DisplayOrderPrice(int nb_books, double cost) {
	printf("******************************** \n");
	printf("Need to order: %i \n", nb_books);
	printf("Total cost: $%f \n", cost);
	printf("******************************** \n");
}

int main_book_store() {
	int cont = 1;
	double total_order_cost = 0.0;
	do
	{
		// 1. Get Data
		int book_code = GetBookCode();
		double copy_price = GetCopyPrice();
		int nb_on_hand = GetNbOnHand();
		int enroll = GetEnrollment();
		int rqd = GetRqd();
		int new_book = GetNew();
		// 2. Output the data
		DisplayData(book_code, copy_price, nb_on_hand, enroll, rqd, new_book);
		// 3. compute nb of books to order
		int nb_of_books_to_order = NbOfBooksToBuy(nb_on_hand, enroll, rqd, new_book);
		// 4. compute expected profit
		double total_cost = Cost(nb_of_books_to_order, copy_price);
		// 5. Display Number of books to order and total cost of the order
		DisplayOrderPrice(nb_of_books_to_order, total_cost);
		total_order_cost += total_cost;
		cout << "Enter 1 to do another book, 0 to stop." << endl;
		cin >> cont;
	} while (cont == 1);
	printf("The total for all order is: $%f \n", total_order_cost);
	printf("The total profit is: $%f \n", 0.2 * total_order_cost);

	return 0;
}