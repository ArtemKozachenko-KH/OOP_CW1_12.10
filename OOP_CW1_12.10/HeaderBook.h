#pragma once
#include <iostream>
#include <list>
using namespace std;

class Book
{
	string title;
	string author;
	int pages;
public:
	Book();
	Book(string nm, string ath, int pg);
	void ShowBook();
	string GetTitle();
};


Book::Book() :title(""), author(""), pages(0) {}

Book::Book(string nm, string ath, int pg) : title(nm), author(ath), pages(pg) {}

void Book::ShowBook()
{
	cout << "\n\t Title: " << title
		<< "\n\t Author: " << author
		<< "\n\t Pages: " << pages << endl;
}

string Book::GetTitle()
{
	return title;
}
