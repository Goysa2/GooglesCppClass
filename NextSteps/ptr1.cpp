// Example 2 from : https://developers.google.com/edu/c++/next-steps

#include <iostream>

using namespace std;

void DoIt(int& foo, int goo);

int main1() {
	int* foo, * goo;
	foo = new int;
	*foo = 1;
	goo = new int;
	*goo = 3;
	*foo = *goo + 3;
	foo = goo;
	*goo = 5;
	*foo = *goo + *foo;
	DoIt(*foo, *goo);
	cout << (*foo) << endl;
	return 0;
}

void DoIt(int& foo, int goo) {
	foo = goo + 3;
	goo = foo + 4;
	foo = goo + 3;
	goo = foo;
}