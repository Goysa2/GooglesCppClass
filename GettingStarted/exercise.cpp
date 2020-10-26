// exercise.cpp: Samuel Goyette
// Description: Exercises from https://developers.google.com/edu/c++/getting-started#exercises-and-projects

#include <iostream>
#include <iomanip>
#include <map>

using namespace std;


int question_1(int nb_of_chirps){
	return (nb_of_chirps + 40) / 4;
}

void question_2() {
	int ass1, ass2, ass3, ass4;
	int midterm, final_exam;
	int section_grade;
	cout << "Enter assignement 1 score :" << endl;
	cin >> ass1;
	cout << "Enter assignement 2 score :" << endl;
	cin >> ass2;
	cout << "Enter assignement 3 score :" << endl;
	cin >> ass3;
	cout << "Enter assignement 4 score :" << endl;
	cin >> ass4;
	cout << "Enter midterm score :" << endl;
	cin >> midterm;
	cout << "Enter final exam score:" << endl;
	cin >> final_exam;
	cout << "Enter participation score:" << endl;
	cin >> section_grade;
	cout << "The total score is: " << ((0.1 * (ass1 + ass2 + ass3 + ass4)) + (0.15 * midterm) + (0.35 * final_exam) + (0.1 * section_grade)) << endl;
}
void question_3(int nb_of_sec){
	int nb_hour = nb_of_sec / 3600;
	int nb_minutes = (nb_of_sec - nb_hour * 3600) / 60;
	int nb_seconds = (nb_of_sec - nb_hour * 3600) - (nb_minutes * 60);
	cout << "Number of seconds: " << nb_of_sec << endl;
	cout << "Number of hours: " << nb_hour << endl;
	cout << "Number of minutes: " << nb_minutes << endl;
	cout << "Number of seconds: " << nb_seconds << endl;
}

int reverse_nb(int a) {
	int number = a;
	int reverse = 0;
	int last_digit = 0;
	while (number != 0) {
		last_digit = number % 10;
		reverse = (reverse * 10) + last_digit;
		number = number / 10;
	}
	return reverse;
}

int question_5(int a) {
	int rev_a = reverse_nb(a);
	int sub = a - rev_a;
	int rev_sub = reverse_nb(sub);
	int add = rev_sub + sub;
	return add; 
}

void question_6(string str) {
	map<char, int> Decoder;
	map<char, int> DecoderYear;
	// insert months
	Decoder['A'] = 1;
	Decoder['B'] = 2;
	Decoder['C'] = 3;
	Decoder['D'] = 4;
	Decoder['E'] = 5;
	Decoder['F'] = 6;
	Decoder['G'] = 7;
	Decoder['H'] = 8;
	Decoder['I'] = 9;
	Decoder['J'] = 10;
	Decoder['K'] = 11;
	Decoder['L'] = 12;
	// insert date 
	Decoder['Q'] = 0;
	Decoder['R'] = 1;
	Decoder['S'] = 2;
	Decoder['T'] = 3;
	Decoder['U'] = 4;
	Decoder['V'] = 5;
	Decoder['W'] = 6;
	Decoder['X'] = 7;
	Decoder['Y'] = 8;
	Decoder['Z'] = 9;
	// Insert year
	DecoderYear['A'] = 1+1995;
	DecoderYear['B'] = 2 + 1995;
	DecoderYear['C'] = 3 + 1995;
	DecoderYear['D'] = 4 + 1995;
	DecoderYear['E'] = 5 + 1995;
	DecoderYear['F'] = 6 + 1995;
	DecoderYear['G'] = 7 + 1995;
	DecoderYear['H'] = 8 + 1995;
	DecoderYear['I'] = 9 + 1995;
	DecoderYear['J'] = 10 + 1995;
	DecoderYear['K'] = 11 + 1995;
	DecoderYear['L'] = 12 + 1995;
	DecoderYear['M'] = 13 + 1995;
	DecoderYear['N'] = 14 + 1995;
	DecoderYear['O'] = 15 + 1995;
	DecoderYear['P'] = 16 + 1995;
	DecoderYear['Q'] = 17 + 1995;
	DecoderYear['R'] = 18 + 1995;
	DecoderYear['S'] = 19 + 1995;
	DecoderYear['T'] = 20 + 1995;
	DecoderYear['U'] = 21 + 1995;
	DecoderYear['V'] = 22 + 1995;
	DecoderYear['W'] = 23 + 1995;
	DecoderYear['X'] = 24 + 1995;
	DecoderYear['Y'] = 25 + 1995;
	DecoderYear['Z'] = 26 + 1995;
	int month = Decoder[str[0]];
	int date_1 = Decoder[str[1]];
	int date_2 = Decoder[str[2]];
	int year = DecoderYear[str[3]];
	cout << "Year: " << year << endl;
	cout << "Month: " << month<< endl;
	cout << "Date: " << date_1 << date_2 << endl;
}

int first_digit(int a) {
	return a % 10;
}

int second_digit(int a) {
	return (a % 100)/10;
}

int third_digit(int a) {
	return (a % 1000) / 100;
}

int ABCf(int a) {
	return a;
}

int BCAf(int a) {
	int A = first_digit(a);
	int B = second_digit(a);
	int C = third_digit(a);
	return 100 * B + 10 * C + A;
}

int CABf(int a) {
	int A = first_digit(a);
	int B = second_digit(a);
	int C = third_digit(a);
	return 100 * C + 10 * A + B;
}

void question_7(int a) {
	int ABC = ABCf(a);
	int BCA = BCAf(a);
	int CAB = CABf(a);
	int X = ABC % 11;
	int Y = BCA % 11;
	int Z = CAB % 11;
	int XY = X + Y;
	int YZ = Y + Z;
	int ZX = Z + X;
	if (XY % 2 != 0){
		if (XY + 11 < 20)
			XY += 11;
		else
			XY += 11;
	}
	if (YZ % 2 != 0) {
		if (YZ + 11 < 20)
			YZ += 11;
		else
			YZ += 11;
	}
	if (ZX % 2 != 0) {
		if (ZX + 11 < 20)
			ZX += 11;
		else
			ZX += 11;
	}
	cout << "Initial number:" << a << endl;
	cout << "Third digit: " << XY / 2 << endl;
	cout << "Second digit: " << YZ / 2 << endl;
	cout << "Third digit: " << ZX / 2 << endl;
}

int main() {
	cout << "Answer to question 1:" << endl;
	int q1 = question_1(120);
	int nb_q5;
	cout << "Temperature is : " << q1 << " degrees" << endl;
	cout << "Answer to question 2: " << endl;
	question_2();
	cout << "Answer to question 3: " << endl;
	question_3(3662);
	cout << "Enter a number for question 5: " << endl;
	cin >> nb_q5;
	cout << "the magic number for q5 is : " << question_5(nb_q5) << endl;
	cout << "the decoded date for q6 is : " << endl;
	question_6("ARZM");
	cout << "Question 7:" << endl;
	question_7(792);// << endl;

	return 0;
}