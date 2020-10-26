// Author : Samuel Goyette
// Example 3 from : https://developers.google.com/edu/c++/next-steps

#include <iostream>

using namespace std;

void accelerate(int& a, int b) {
	a += b;
}

int main2() {
	int amount = 10;
	int speed = 50;
	cout << "The speed is " << speed << " and the amount is: " << amount << endl;
	accelerate(speed, amount);
	cout << "The speed is " << speed << " and the amount is: " << amount << endl;
	return 0;
}