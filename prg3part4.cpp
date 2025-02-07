/* REFERNECES / ALIAS
#include <iostream>
using namespace std;
int main() {
	int a = { 234 };
	int& r = a;
	//after line 5 r is a you cannot differentiate between a and r
	//int& r; //error: ‘r’ declared as reference but not initialized

	cout << r << endl;
	r = 100;
	cout << a << endl;
	//creates an amazing side effect
	return 0;
}*/
//IMPORTANT: assignment at the time of creation is initialization

/*
#include <iostream>
using namespace std;
void foo(int a) {
	cout << a << endl;
}

int main() {
	int x = 35;

	foo(10); // its called as foo(int a = 40);
	foo(x);  // its called as foo(int a = x);
	return 0;
}
*/

#include <iostream>
using namespace std;
void foo(int& a) {
	cout << a << endl;
	a = 12345;
}

int main() {
	int x = 35;

	foo(x); // its called as foo(int& a = x);
	cout << x << endl;
	return 0;
}

//arrays cannot be passed as refernce. 
//if you add one to and int one will be added but if you add one to a pointer it will move to the next memory location from the present.