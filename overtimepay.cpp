@ -0,0 +1,53 @@
/*
Author: Bruno ongeri
Adm No:BSE-01-0034/2025
Description: Program to compute gross_pay, net_pay and tax
Date: 11/6/2025
Version 1
*/
#include<iostream>//cout,cin 
using namespace std;
int main()
{
float hourly_wage , hours_worked, gross_pay, net_pay, tax, overtime, rate;

cout<<"enter your hourly wage:"<<endl;
cin>>hourly_wage;

cout<<"enter hours woked in a week:"<<endl;
cin>>hours_worked;

cout<<"enter overtime rate:"<<endl;
cin>>rate;

/*	cout<<"Enter your hourly_wage, hours_worked and overtime_rate:"<<endl;
cin>>hourly_wage>>hours_worked>>rate*/

if(hours_worked<=40)
{
	gross_pay = hours_worked * hourly_wage;
}
else if (hours_worked>40 )
{
	overtime=(hours_worked-40)*hourly_wage * rate;
	gross_pay= (hours_worked*hourly_wage)+overtime;
	
}
 if (gross_pay<=600)
{ 
tax = 0.15 * gross_pay;
}
else if (gross_pay>600)
{
	tax=(gross_pay-600)*0.2;
}
net_pay = gross_pay - tax;

cout<<"the gross pay is:"<<gross_pay<<endl;

cout<<"the tax is:"<<tax<<endl;

cout<<"the net pay is:"<<net_pay<<endl;

return 0;
}
