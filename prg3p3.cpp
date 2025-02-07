// pointers review!

#include <iostream>
using namespace std;
#define addressOf &
#define targetOf *
#define pointer * 

int main() {
	int a = 25;
	int pointer p = addressOf a;
	targetOf p = 12345;
	cout << a << endl;

	return 0;
}