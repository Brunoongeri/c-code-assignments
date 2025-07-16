/* 
Author:Bruno Ongeri
ADM NO:BSE-01-0034/2025
Description:use of user defined functions
Date:16/07/2025
*/
#include<iostream>
#include <string>
#include <cmath>
using namespace std;

class shape{
	public:
		double area;
		virtual void calcArea(){
			cout<<"area calculation not defined for a generic shape: "<<area<<endl;
		}
	
};

class rectangle: public shape{
	public:
		int length;
		int width;
	 rectangle(int length,int width):length(length),width(width){}
		void calcArea(){
		area = length*width;
		cout<<"Area of rectangle is: "<<area<<endl;
	}
};

class circle:public shape{
	public:
		int radius;
		
	 circle(int radius):radius(radius){}
		void calcArea(){
		area=(3.142)*radius*radius;
		cout<<"Area of circle is: "<<area<<endl;
	}
};

int main()
{
	rectangle rect1(20, 10);
    rect1.calcArea(); 

    circle cir1(14); 
    cir1.calcArea();
	

	
	return 0;
}