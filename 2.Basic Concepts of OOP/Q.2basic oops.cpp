/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;
class bank{
	private:
	char name[20],actype[20];
	int acno;
	float balance;
	public:
		void get_detail(){
			cout<<"\nEnter Depositor Name:";
			cin>>name;
			cout<<"\nEnter Account Number:";
			cin>>acno;
			cout<<"\nEnter Type of Account (s for saving and c for current): ";
			cin>>actype;
			cout<<"\nEnter Balance Amount in the Account :";
			cin>>balance;
		}
		void Deposit(){
			int damt;
			cout<<"\nEnter amount to deposit:";
			cin>>damt;
			balance=balance+damt;
			cout<<"After deposit total amount is:"<<balance;
		}
		void Withdraw(){
			int wamt;
			cout<<"\nEnter amount withdraw:";
			cin>>wamt;
			
			if(balance>=wamt){
				display();
				balance=balance-wamt;
			    cout<<"After withdraw total amount is:"<<balance;
        	}else{
        		cout<<"  you can not withdraw money.  ";
			}
		}
		void display(){
			cout<<"\nThe details of the Account is..";
			cout<<"\n Account No. :"<<acno;
			cout<<"\n Name :"<<name;
			cout<<"\n Account type :"<<actype;
			cout<<"\n Balance :"<<balance;
			
		}
};
int main(){
	int accNo,choice,amt;
	bank b1;
	b1.get_detail();
	cout<<"\n1:Deposit \n2:Withdraw. \n select option:  ";
	cin>>choice;
	switch(choice){
		case 1:
			b1.Deposit();
			break;
		case 2:
		    b1.Withdraw();
			break;
		
		default:
		    cout<<"Invalid Choice";
			break;		
	}
	return 0;
}







