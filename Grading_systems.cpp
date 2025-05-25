/*
Name : Bruno Ongeri
ADM No: BSE-01-0034/2025
Description: Program To Calculate The Grade of Students
Date: 27/5/2025
version 1
*/
#include<iostream>//cout,cin 
using namespace std;
int main()
{
	float math_score, phy_score, bio_score, average;
	char grade ;
	cout<<"enter your score for math_score:"<<endl;
	cin>>math_score;
	
	cout<<"enter your score for phy_score:"<<endl;
	cin>>phy_score;
	
	cout<<"enter your score for bio_score:"<<endl;
	cin>>bio_score;
	
	average = (math_score + phy_score + bio_score)/3;
	
	if(average >=70)
	{
		grade = 'A';
	}
	else if (average >=60 && average <=69 )
	{
		grade = 'B';
	}
	else if (average >=50 && average <59 )
	{
		grade = 'C';
	}
	else if (average >=40 && average <49 )
	{
		grade = 'D';
	}
	else if (average <=39)
	{
		grade = 'E';
	}
	cout<<"Your average is:"<<average<<endl;
	cout<<"Your grade is:"<<grade<<endl;
	
	return 0;
}