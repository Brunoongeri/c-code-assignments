#include <iostream>
#include <string>
using namespace std;

class AccountHolder{
	protected:
		
		string name;
	
    public:
		
		 AccountHolder(const string name) : name(name) {}	
		 
		  ~AccountHolder(){}
		 
		 void displayAccountHolderDetails() const {
        cout << "Holder Name: " << name << std::endl;
    }
		 
		 
};
class BankAccount: public AccountHolder{
	
	private:
		int accountNumber;
		double balance;
		
	public:	
		
		
		BankAccount(const string name, int accountNumber, double balance)
		: AccountHolder(name), accountNumber(accountNumber), balance(balance) {}
        
		void displayAccountDetails() const{
			displayAccountHolderDetails();
			
			cout<<"account number:" << accountNumber<<endl;
			cout<<"account balance: $"<< balance<<endl;
		}
	
};
class SavingsAccount: public BankAccount
{
private:
	double interestRate;
	
public:	
	 SavingsAccount(const string name, int accountNumber, double balance, double interestRate)
        : BankAccount(name, accountNumber, balance),
          interestRate(interestRate){}

		
	void displaySavingsAccountDetails() const { 
        displayAccountDetails(); 
        cout << "Interest Rate in %: " << interestRate << endl;
    }
	
};

int main(){
	
	  SavingsAccount holderObj1("Monkey D. Luffy", 2001, 3000.00, 2.5);
	
	cout<<"savings Account:"<<endl;
	 holderObj1.displaySavingsAccountDetails();
	
	return 0;
	
	
}