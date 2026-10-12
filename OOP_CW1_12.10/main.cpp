#include <iostream>
#include <list>
#include "header.h"
#include "HeaderBook.h"
using namespace std;

int main()
{
	list<Student> vec1;
	Student st1("Alexandr", 8);
	Student st2("Arcadiy", 10);
	Student st3("Grigoriy", 6);
	Student st4("Elena", 11);
	Student st5("Anna", 9);
	vec1.push_back(st1);
	vec1.push_back(st2);
	vec1.push_back(st3);
	vec1.push_back(st4);
	vec1.push_back(st5);

	for (auto ptr = vec1.begin(); ptr != vec1.end(); ptr++)
	{
		ptr->ShowStudent();
	}
	cout << endl;

	auto tempptr = vec1.begin();
	for (auto ptr = vec1.begin(); ptr != vec1.end(); ptr++)
	{
		if (tempptr->GetAverageMark() <= ptr->GetAverageMark())
		{
			tempptr = ptr;
		}
	}
	tempptr->ShowStudent();

	////////////////Book/////////////
	cout << "\n\n\n";
	list<Book> vec2;
	Book bk1("War_and_Peace","Tolstoy", 1000);
	Book bk2("Gore_ot_Yma","Griboedov", 500);
	Book bk3("Crime_and_Punishment","Dostoevskiy", 300);
	vec2.push_back(bk1);
	vec2.push_back(bk2);
	vec2.push_back(bk3);

	for (auto ptr = vec2.begin(); ptr != vec2.end(); ptr++)
	{
		ptr->ShowBook();
	}
	cout << endl;

	string title = "";
	cout << "\n\t Enter title book -> ";
	cin >> title;
	for (auto ptr = vec2.begin(); ptr != vec2.end(); ptr++)
	{
		if (title == ptr->GetTitle())
		{
			vec2.erase(ptr);
			break;
		}
	}

	for (auto ptr = vec2.begin(); ptr != vec2.end(); ptr++)
	{
		ptr->ShowBook();
	}
}
