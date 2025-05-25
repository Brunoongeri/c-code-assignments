/*
Author: Bruno ongeri
Adm No:BSE-01-0034/2025
Description: Program to compute bonus
Date: 22/5/2025
Version 1
*/
#include<iostream>//cout,cin 
using namespace std;
int main()
{
float salary , years_of_service, bonus, total_salary;
cout<<"Enter your salary:"<<endl;
cin>>salary;
cout<<"enter years_of_service:"<<endl;
cin>>years_of_service;
/*	cout<<"Enter your salary and years_of_service:"<<endl;
cin>>salary>>years_of_service*/
if(years_of_service>10)
{
	bonus = 0.1 * salary;
}
else if (years_of_service>=6 &&years_of_service<=10)
{
	bonus = 0.08 * salary;
}
else if (years_of_service<6)
{ 
bonus = 0.6 * salary;
}
total_salary = salary + bonus;
cout<<"the net bonus is:"<<bonus<<endl;
cout<<"the total_salary is:"<<total_salary<<endl;
return 0;
}