/*
Name : Bruno Ongeri
ADM No: BSE-01-0034/2025
Description: Program To Calculate The Body Mas Index
Date: 28/5/2025
version 1
*/
#include<iostream>//cout,cin 
#include<string>
using namespace std;
int main ()
{
	float weight, height, BMI;/*BMI reffers to Body Mass Index*/
	string condition;

	cout<<"Enter your weight in kilograms(Kg)"<<endl;
	cin>>weight;
	
	cout<<"Enter your height in meters(M)"<<endl;
	cin>>height;
	BMI=weight/(height*height);
	
	if (BMI<18.5) 
	{
		condition = "underweight";
	}
	else if (BMI>=18.5 &&BMI<=24.9)
	{
		condition = "normal_weight";
	}
	else if (BMI>=25 &&BMI<=29.9)
	{
		condition = "verweight";
	}
	else 
	{
		condition = "obesity";
	}
	cout<<"Your Body Mass Index(BMI) is:"<<BMI<<endl;
	cout<<"Your condition is:"<<condition<<endl;
	
	return 0;
}
