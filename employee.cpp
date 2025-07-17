#include <iostream>
 #include <string>
 using namespace ;
 
 
 
 class Employee
 {
 	
 	public:
	 
	 double ID_no;
	 string name;
	 string occupation;
	 
	 double disp1(){
		 return ID_no ;
	 }
	 string disp2(){
		 return name;
	 }
	 string disp3(){
		 return occupation;
	 }
	 
 };
 int main(){
	 Employee cl;
	 
	 cout<<"enter your ID number:"<<endl;
	 cin>>cl.ID_no;
	 
	 cout<<"enter your Name:"<<endl;
	 cin>>cl.name;
	 
	 cout<<"enter your Occupation:"<<endl;
	 cin>>cl.occupation;
	 
	 cout<<"the ID number is:"<<cl.disp1()<<endl;
	 cout<<"the name is:"<<cl.disp2()<<endl;
	 cout<<"the occupation is:"<<cl.disp3()<<endl;
	  
	  return 0;
 }