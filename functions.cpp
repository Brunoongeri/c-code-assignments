/* 
Author:Bruno Ongeri
ADM NO:BSE-01-0034/2025
Description:use of user defined functions
Date:06/09/2025
*/
#include <iostream>
#include <cmath>
using namespace std;

int product(int num1, int num2)
{
	return (num1 * num2);

};
float division(float a, float b)
{
return a/b	;
}
int main()
{
	int prod, num1,num2, a, b;
	float div;
	
	cout<<"enter num1:"<<endl;
	cin>>num1;
	
	cout<<"enter num2:"<<endl;
	cin>>num2;
	
	cout<<"enter a:"<<endl;
	cin>>a;
	
	cout<<"enter b:"<<endl;
	cin>>b;
	
	prod=product(num1, num2);
	div =division(a, b);
	
	cout<<"the product is:"<<prod<<endl;
	cout<<"the divident is"<<div<<endl;
	
	return 0;
}
	
	
	