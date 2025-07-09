#include<iostream>
#include <string>
using namespace std;

class Person{
	protected:
		string name;
		
	Person(string name):name(name){}
	
	public:
	
		void setName(string name1){
			name=name1;
		}	
	
		string getName(){
			return name;
		}
};
class LibraryMember : public Person{
	private:
	
		int memberID;
		int booksBorrowed;
		
   public:

   	LibraryMember(string name, int memberID, int booksBorrwed)	
	:Person(name), memberID(memberID), booksBorrowed(booksBorrowed){}
	
	void setmemberID(int ID){
		memberID = ID;
	}
	
		void setBooksBorrowed(int borrowed){
		booksBorrowed= borrowed;
	}
	
	int getMemberID()
	{
	return memberID;
	}
	
		int getBooksBorrowed()
    {
	return booksBorrowed;
	}
	
};
class PremiumMembers : public LibraryMember{
	private:
		double membershipFee;
	
	public:		
		PremiumMembers( string name,int memberID, int booksBorrowed, double membershipFee)
		:LibraryMember(name, memberID, booksBorrowed),membershipFee(membershipFee){}
		
		void setMembershipFee(double Fee){
			membershipFee = Fee;
		}
		
		double getMembershipFee(){
			return membershipFee;
		}
	
};

int main(){
		
		PremiumMembers member("Henry Ford",41121,12,1500);
		
		
		cout<<"the member's name is:"<<member.getName()<<endl;
		
		cout<<"the members ID Number:"<<member.getMemberID()<<endl;
		
		cout<<"the members number of books borrowed:"<<member.getBooksBorrowed()<<endl;
		
		cout<<"the members membership fee is:"<<member.getMembershipFee()<<endl;
		
            return 0;
}