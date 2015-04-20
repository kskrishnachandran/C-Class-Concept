/*File Name : student.cpp
  Author : K. S. Krishna Chandran
  Description : To deal with a student's details using class.
  Date : 16-04-15*/


#include<iostream>
#include<string>
#include<cstdio>
#include<stdlib.h>
using namespace std;

class student {
	int admn;
	string sname;
	char n[100];
	float eng;
	float math;
	float science;
	float total;
	float ctotal() {
		return (science + math + eng);
	}
 public:
	void takedata() {
		cout<<"\n\nEnter admission number ";
		cin>>admn;
		cin.ignore();
		cout<<"\n\nEnter name ";
		getline (cin, sname);
		cout<<"\n\nEnter marks for English, Maths, Science"<<endl;
		cin>>eng>>math>>science;
		total = ctotal();
	}
	void showdata() {
		cout<<"\n\nStudent Details";
		cout<<"\nAdmission no : "<<admn;	
		cout<<"\nName :" <<sname;
		cout<<"\nMarks\nScience : "<<science<<"  Maths : "<<math<<"  English : "<<eng;
		cout<<"\nTotal Marks : "<<total;
	}
};


int main() {
	system("clear");
	student sob;
	sob.takedata();
	sob.showdata();
	cout<<"\n\n";
	return 0;
}
