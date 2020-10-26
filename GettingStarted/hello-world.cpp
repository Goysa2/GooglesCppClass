// hello.cpp: Samuel Goyette
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int gcd(int a, int b);
int math_puzzle();
void string_for_you();
int get_input();
int calc_method_1(int a);
int calc_method_2(int a);
int calc_method_3(int a);
// int main() {
//	string	 hw;
//	hw = "Hello World!";
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j < 4; j++){
//			cout << left << setw(17) << hw;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//    int input_var = 0;
//    // Enter the do while loop and stay there until either
//    // a non-numeric is entered, or -1 is entered. Note that
//    // cin will accept any integer, 4, 40, 400, etc.
//    do {
//        cout << "Enter a number (-1 = quit): ";
//        // The following line accepts input from the keyboard into
//        // variable input_var.
//        // cin returns false if an input operation fails, that is, if
//        // something other than an int (the type of input_var) is entered.
//        if (!(cin >> input_var)) {
//            cout << "You entered a non-numeric. Do it again!" << endl;
//            cin.clear();
//            cin.ignore(1000, '\n');
//            // exit the do while loop
//        }
//        if (input_var != -1) {
//            cout << "You entered " << input_var << endl;
//        }
//    } while (input_var != -1);
//    cout << "All done." << endl;
//    return 0;
//}

//int main() {
//    cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
//    for (int c = 1; c < 10; c++) {
//        cout << c << "| ";
//        for (int i = 1; i < 10; i++) {
//            cout << i * c << '\t';
//        }
//        cout << endl;
//    }
//    return 0;
//}

//int main() {
//	int input_var = 0;
//	int v;
//	srand((unsigned int)time(NULL));
//	v = rand() % 100 + 1;     // v2 in the range 1 to 100
//	do {
//		cout << "Enter a number (-1 = quit): ";
//		if (!(cin >> input_var)) {
//			cout << "You entered a non-numeric. Do it again!" << endl;
//			cin.clear();
//			cin.ignore(1000, '\n');
//		}
//		if (input_var != -1) {
//			cout << "You entered " << input_var;
//			if (input_var < v){
//				cout << ". Your guess is too  low" << endl;
//			}
//			if (v < input_var) {
//				cout << ". Your guess is too  high" << endl;
//			}
//			if (v == input_var) {
//				cout << ". You guessed correctly!" << endl;
//			}
//		}
//	} while (input_var != v);
//}

int hello() {
	//string_for_you();
	int weekly_earning = get_input();
	int m1 = calc_method_1(weekly_earning);
	int m2 = calc_method_2(weekly_earning);
	int m3 = calc_method_3(weekly_earning);
	cout << "Using method 1 : " << m1 << "$" << endl;
	cout << "Using method 2 : " << m2 << "$" << endl;
	cout << "Using method 3 : " << m3 << "$" << endl;
	return 0;
}


/*nt math_puzzle(){
	for (int h = 0; h < 100; h++)
		for (int p = 0; p < 100; p++)
			for (int r = 0; r < 100; r++)
				if ((h + p + r) == 100)
					if (((10 * h) + (3 * p) + (0.5 * r)) == 100)
						cout << "Got it. Horses: " << h << " Pigs: " << p << " Rabbits:" << r << endl;
	return 0;
}*/

void string_for_you() {
	string str1 = "To be or not to be, that is the question";
	string str2 = "only ";
	string str3 = str1.substr(6, 12);
	str1.insert(32, str2);
	str1.replace(str1.find("to be", 0), 5, "to jump");
	str1.erase(9, 4);
	cout << str1 << endl;
	for (int i = 0; i < str3.length(); i++)
		cout << str3[i]; cout << endl;
}

int gcd(int a, int b) {
	int t;
	while (b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int get_input() {
	int weekly_earning;
	cout << "Enter number of units sold : " << endl;
	cin >> weekly_earning;
	return weekly_earning;
}

int calc_method_1(int a) {
	return 600;
}
int calc_method_2(int a) {
	double Pay;
	Pay = (7. * 40.0) + (0.1 * 225.0 * a);
	return Pay;
}
int calc_method_3(int a) {
	double Pay;
	Pay = (20.0 * a) + (0.2 * 225.0 * a); 
	return Pay;
}