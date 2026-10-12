#pragma once
#include <iostream>
#include <list>
using namespace std;

class Student
{
	string name;
	int averageMark;
public:
	Student();
	Student(string nm, int am);
	void ShowStudent();
	int GetAverageMark();
};

Student::Student() : name(""), averageMark(0){}

Student::Student(string nm, int am): name(nm), averageMark(am){}

void Student::ShowStudent()
{
	cout << "\n\t Name: " << name
		<< "\n\t Average Mark: " << averageMark<<endl;
}

int Student::GetAverageMark()
{
	return averageMark;
}

