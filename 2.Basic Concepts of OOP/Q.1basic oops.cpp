//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{

	private:
		int a,b;
	public:	
	    void get_value(){
	    	cout<<"\nEnter value A :";
	    	cin>>a;
	    	cout<<"\nEnter value B :";
	    	cin>>b;
	    }	
	    	void sum(){
	    		cout<<"Addition of A+B is :"<<a+b;
			}
			void sub(){
				cout<<"Subtraction of A-B is :"<<a-b;
			}
			void mul(){
				cout<<"Multiplication of A*B is :"<<a*b;
			}
			void div(){
				cout<<"division of A/B is :"<<a/b;
			}
		

};
int main(){
	calculator cal;
	int choice;
	
	cal.get_value();
	
	cout<<"\n1.Addition :"<<"\n2.subtraction :"<<"\n3.multiplication :"<<"\n4.division :";
	cout<<"Enter the Choice :";
	cin>>choice;
	if(choice==1){
		cal.sum();
	}else if(choice==2){
		cal.sub();
	}else if(choice==3){
		cal.mul();
	}else if(choice==4){
		cal.div();
	}else{
		cout<<"wrong choice";
	}
	return 0;
	
	
	
	
}
