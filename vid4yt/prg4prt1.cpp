#include<iostream>
using namespace std;
int main()
{
	cout << "13thfeb - Dynamic Memory Allocation" << endl;
	// program to get few ints from the user and print them in reverse order

	int* numbers = nullptr;
	//RULE: always initialize pointers to nullptr
	size_t size{}; //represents the size of the array
	cout << "Enter the number of integers you want to enter: ";
	cin >> size;
	numbers = new int[size]; //dynamically allocating memory for the array
	//reading the numbers one by one
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	for (size_t i =0 ; i < size; i++)
	{
		cout << (i + 1) << " : " << numbers[size - i - 1] << endl;

	}

	delete[] numbers;
	numbers = nullptr;
	delete[] numbers; // this is safe, no crash cause you can delete nullptr twice.

	return 0;
}