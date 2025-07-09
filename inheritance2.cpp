#include <iostream>
#include <string>
using namespace std;

class AccountHolder{
	protected:
		
		string name;
	
    public:
		AccountHolder(string name1) : name(name1) {}
		
		 void setAccountHolder(string name1){
		 	name=name1;
		 	
		 	
    }
          string getAccountHolder(){
				 return name;
			 }
		 
		 
};
class BankAccount: public AccountHolder{
	
	private:
		int accountNumber;
		double balance;
		
	public:	
		
	
		
		BankAccount(string name, int accountNumber, double balance)
		: AccountHolder(name), accountNumber(accountNumber), balance(balance) {}
        
		void setAccNumber(int accNumber){
			accountNumber=accNumber;
		}
		void setBalance(double bal){
			balance=bal;
			
		}
		int getAccNumber(){
			return accountNumber;
		}
		double getBalance(){
			return balance;
		}
	
};
class SavingsAccount: public BankAccount
{
private:
	double interestRate;
	
public:	
	 
 SavingsAccount( string name, int accountNumber, double balance, double interestRate)
        : BankAccount(name, accountNumber, balance),interestRate(interestRate){}
        
        void setInterestRate(double interest){
			interestRate=interest;
		}
		double getInterestRate(){
			return interestRate;
		}

		

};

int main(){
	
	  SavingsAccount Holder( "Monkey D. Luffy" , 20101, 3000.00, 25);
	
	cout<<"savings Account:"<<endl;
	 cout<<"The account owner is:"<<Holder.getAccountHolder()<<endl;
	 cout<<"the account Number is:"<<Holder.getAccNumber()<<endl;
	 cout<<"The Bank Balance is:"<<Holder.getBalance()<<endl;
	 cout<<"The interest rate is:"<<Holder.getInterestRate()<<"%"<<endl;
	
	return 0;
	
	
}