#include <iostream>
using namespace std;

int main( ) {
		bool ok = false;
		if (ok) {
			cout << "this will not happen" << endl;
		}
    ok = true;
	if (ok) {
		cout << "This will happen" << endl;
	}
	ok = 234;
	cout << ok << endl;


		return 0;
	}
