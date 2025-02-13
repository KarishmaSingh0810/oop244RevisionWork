#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


//store a name
struct Name
{
	char* m_first;
	char* m_last;
};
void set(Name& n, const char* first, const char* last);
void deallocate(Name& n);
void print(const Name& n);
void read(Name& n);

int main()
{
	Name* n = nullptr;
	size_t num{};
	cout << "Enter the number of names: ";
	cin >> num;
	n = new Name[num];
	print(n[0]);
	for (size_t i = 0; i < num; i++)
	{
		read (n[i]);
	}
	for (size_t i = 0; i < num; i++)
	{
		print(n[i]);
	}
	for (size_t i = 0; i < num; i++)
	{
		deallocate(n[i]);
	}
	delete[] n;
	return 0;
}

void set(Name& n, const char* first, const char* last)
{
	n.m_first = new char[strlen(first) + 1]; // +1 for null terminator only for string not for ints!
	n.m_last = new char[strlen(last) + 1];

	if (n.m_first && n.m_last)
	{
		strcpy(n.m_first, first);
		strcpy(n.m_last, last);
	}
	else
	{
		delete[] n.m_first;
		delete[] n.m_last;
		n.m_first = nullptr;
		n.m_last = nullptr;
	}
}
void deallocate(Name& n)
{
	delete[] n.m_first;
	delete[] n.m_last;
	n.m_first = nullptr;
	n.m_last = nullptr;
}
void print(const Name& n)
{
	if (n.m_first && n.m_last) {
		cout << n.m_first << " " << n.m_last << endl;
	}
	else
	{
		cout << "Name is empty" << endl;
	}
}

void read(Name& n)
{
	char first[100];
	char last[100];
	cout << "Enter first name: ";
	cin >> first;
	cout << "Enter last name: ";
	cin >> last;
	set(n, first, last);
}