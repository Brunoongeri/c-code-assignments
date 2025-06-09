/* 
Author:Bruno Ongeri
ADM NO:BSE-01-0034/2025
Description:program to calculate amount of interest
Date:06/09/2025
*/
#include <iostream>
#include <cmath>
using namespace std;

int interest(int principle, int time, int rate)
{
	return(principle*rate*time)/100;

};
int main()
{
	int amt_interest, principle,rate,time;
	
	cout<<"enter thhe principle:"<<endl;
	cin>>principle;
	
	cout<<"enter thhe rate:"<<endl;
	cin>>rate;
	
	cout<<"enter thhe time:"<<endl;
	cin>>time;
	
	amt_interest= interest(principle, rate, time);
	cout<<"the interest is:"<<amt_interest<<endl;
	
	return 0;
}