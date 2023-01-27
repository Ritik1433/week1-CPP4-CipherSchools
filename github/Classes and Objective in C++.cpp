#include<iostream>
 using namespace std;
 class employee // class
 {
 char name[10]; // data member
 int id; // data member
 public:
 void getdata(); // prototype declaration
 void putdata(); // prototype declaration
 };
 void employee::getdata() // member function
 -
 cout<<"Enter name and id of employee: ";
 cin>>name>>id;
void employee: putdata() // member function
 {
cout<<"Display name and id of employee: ";
 cout<<name<<id;
 }
