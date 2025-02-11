#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct Teacher { // attributes of a teacher
	char m_subject[7]{}; // initializes an empty string
	char m_name[41]{};
	int m_rating{};
	int m_grading{};

	void set(const char* subject, const char* name, int rating, int grading) {
		strcpy(m_name, name);
		strcpy(m_subject, subject);// copy the string from subject to T->subject
		m_rating = rating;
		m_grading = grading;
	}

	void print() { // print the attributes of a teacher since its a member function now it has access to all Teacher class attributes.
		cout << "Teacher: " << m_name << endl;
		cout << "Subject: " << m_subject << endl;
		cout << "Rating: " << m_rating << endl;
		cout << "Grading: " << m_grading << endl;
	}
};



/*void printTeacher(const Teacher* T) {
	cout << "Teacher: " << T->m_name << endl;
	cout << "Subject: " << T->m_subject << endl;
	cout << "Rating: " << T->m_rating << endl;
	cout << "Grading: " << T->m_grading << endl;
}*/


int main() {
	cout << "revision feb 6 " << 345 << "pm" << endl;
	Teacher T, U;
	T.set( "Math", "Mr. Smith", 5, 3);
	//printTeacher(&T);
	T.print();

	U.set("Eng", "Ms. Brown", 4, 2);
	U.print();
	
	

	return 0;
}
