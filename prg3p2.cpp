/* #include <iostream>
using namespace std;
struct Car {
	int speed;
	char model[51];
};
int main() {
	Car parking[200]; //do not need struct keyword
	return 0;
}*/

/*
//OVERLOADING INTRO
#include <iostream>
using namespace std;
void line(char fill, size_t len);
//void fulline(char fill); (in C++ you can't overload functions by changing the return type so we can have the same name for a function[polymorphic])
void line(char fill);
//void line(size_t len); in conflict with the line(char fill) function since char is integral.
int main() {
	line('*', 20);
	line('-');
	//line(60); more than one instance matches the line!
	return 0;
}
/*void line(size_t len) {
	line('-', len);
}*//*
void line(char fill, size_t len) {
	for (size_t i = 0; i < len; i++) {
		cout << fill;
	}
	cout << endl;
}
void line(char fill) {
	line(fill, 80);
}
*/

#include <iostream>
using namespace std;
void line(char fill = '$', size_t len = 75);
//void fulline(char fill); (in C++ you can't overload functions by changing the return type so we can have the same name for a function[polymorphic])
//void line(char fill);
//void line(size_t len); in conflict with the line(char fill) function since char is integral.
int main() {
	line('*', 20);
	line('=');
	line();
	//line(60); more than one instance matches the line!
	return 0;
}

void line(char fill, size_t len) {
	for (size_t i = 0; i < len; i++) {
		cout << fill;
	}
	cout << endl;
}
