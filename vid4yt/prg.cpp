#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// Store a name
struct Name {
    char* m_first;
    char* m_last;

    // Constructor to initialize pointers to nullptr
    Name() : m_first(nullptr), m_last(nullptr) {}
};

void set(Name& n, const char* first, const char* last);
void deallocate(Name& n);
void print(const Name& n);
void read(Name& n);

int main() {
    Name* n = nullptr;
    size_t num{};
    cout << "Enter the number of names: ";
    cin >> num;
    cin.ignore(); // Flush newline left in buffer

    n = new Name[num];  // Allocating array of `Name` objects, initialized properly

    for (size_t i = 0; i < num; i++) {
        read(n[i]);
    }
    for (size_t i = 0; i < num; i++) {
        print(n[i]);
    }
    for (size_t i = 0; i < num; i++) {
        deallocate(n[i]);
    }

    delete[] n;  // Free array memory
    return 0;
}

void set(Name& n, const char* first, const char* last) {
    deallocate(n); // Prevent memory leak

    n.m_first = new char[strlen(first) + 1];
    if (!n.m_first) return;  // Memory allocation failed

    n.m_last = new char[strlen(last) + 1];
    if (!n.m_last) {
        delete[] n.m_first;
        n.m_first = nullptr;
        return;
    }

    strcpy(n.m_first, first);
    strcpy(n.m_last, last);
}

void deallocate(Name& n) {
    if (n.m_first) {
        delete[] n.m_first;
        n.m_first = nullptr;
    }
    if (n.m_last) {
        delete[] n.m_last;
        n.m_last = nullptr;
    }
}

void print(const Name& n) {
    if (n.m_first && n.m_last) {
        cout << n.m_first << " " << n.m_last << endl;
    }
    else {
        cout << "Name is empty" << endl;
    }
}

void read(Name& n) {
    char first[100];
    char last[100];

    cout << "Enter first name: ";
    cin.getline(first, 100);
    cout << "Enter last name: ";
    cin.getline(last, 100);

    set(n, first, last);
}
