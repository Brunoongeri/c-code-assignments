#include <iostream>
#include <string>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int year;

	public:
	
		Car (string x, string y, int z){
			brand=x;
			model=y;
			year=z;
		}
			
		};
		
		int main(){
			
			Car carObj1 ("BMW", "X5", 1999);
			Car carObj2 ("ford", "mustang", 1969);
			Car carObj3("Dodge", "Hellcat", 2010);
		
			cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
			cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;
			cout<<carObj3.brand<<" "<<carObj3.model<<" "<<carObj3.year<<endl;
			
			return 0;
			
			
			}