#include<iostream>
using namespace std;
main()
{
int age,n;
cout <<"Enter the person's age: ";
cin >> age;
cout <<"Enter the number of times they've moved: ";
cin >> n;
n=n+1;
cout << "Average number of years lived in the same house: " << age/n ;
}