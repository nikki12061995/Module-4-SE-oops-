/*4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.
*/
#include<iostream>
using namespace std;
class Bank{
	private:
		int acno;
		float bal;
	public:
		void get_Acdetails(){
			cout<<"\nEnter Account Number :";
			cin>>acno;
			cout<<"\nEnter Total Balance in Account :";
			cin>>bal;
		}
		void deposit(){
    	    int d_amt;
    	    cout<<"\nEnter Deposit amount:";
    	    cin>>d_amt;
            bal=bal+d_amt;
        }
        void withdraw(){
    	    int w_amt;
    	    cout<<"\nEnter withdraw amount:";
    	    cin>>w_amt;
            if(w_amt>bal)
                cout<<"\ncannot withdraw Amount";
                bal=bal-w_amt;
        }
};
int main(){
	Bank b1;
	b1.get_Acdetails();
	b1.deposit();
	b1.withdraw();
	
	return 0;
}











