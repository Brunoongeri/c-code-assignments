#include <iostream>
#include <string>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int price;
		int mileage;
	public:
	
		Car (string x, string y, int z,int m){
			brand=x;
			model=y;
			price=z;
			mileage=m;
		}
	void drive(int distance) {
		 if (distance < 0) 
		 {
		 	 return ;
		 }
		 mileage=mileage+distance;
	}
		
};


int main(){
	
	Car carObj1 ("Toyota", "Corolla", 20000, 5000);
	
	cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.price<<" "<<carObj1.mileage<<endl<<endl;	

	 int distance1 = 150;
    cout << "Drive " << distance1 << " miles" << endl;	
	carObj1.drive(distance1);
	
	cout << "mileage update " << carObj1.mileage << endl << endl;
	
	int distance2 = 300;
    cout << "Drive " << distance2 << endl;
    carObj1.drive(distance2);
	
	cout << "mileage update " << carObj1.mileage << endl << endl;
	
	
	return 0;
	
}