/*File Name : student.cpp
  Author : K. S. Krishna Chandran
  Description : To deal with book information using class.
  Date : 16-04-15*/



#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class book {
	int book_no;
	string book_name;
	float price;
	float total_price;
	int book_count;
	float total_cost(int num) {
		return (num * price);
	}
 public : 
	void input () {
		cout<<"\n\nEnter the book no : ";
		cin>>book_no;
		cin.ignore();
		cout<<"\n\nEnter the name of the book : ";
		getline (cin, book_name);
		cout<<"\n\nEnter the price for the book : ";
		cin>>price;
	}
	void purchase () {
		cout<<"\n\nHow many number of books do you want to purchase : ";
		cin>>book_count;
		total_price = total_cost (book_count);
	}
	void display () {
		cout<<"\n\nBook no : "<<book_no;
		cout<<"\n\nName of the book : "<<book_name;
		cout<<"\n\nPrice for one book : "<<price;
		cout<<"\n\nTotal price : "<<total_price;
	}
};


int main () {
	system("clear");
	book ob;
	ob.input();
	ob.purchase();
	ob.display();
	cout<<"\n\n";
	return 0;
}
