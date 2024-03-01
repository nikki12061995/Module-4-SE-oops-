/*6. Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor
*/
#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int id,bsalary,r;
	public:
		void set(){
		    cout<<"Enter employee Name:";
			cin>>name;
			cout<<"\nEnter employee ID :";
			cin>>id;
			cout<<"\nEnter employee Basic Salary :";
			cin>>bsalary;
			cout<<"\nEnter the rating (0-9) ";
			cin>>r;
			
			if(r<=0 && r<=9)
			   	{
			   		bsalary=r;
			    }
	   	    }	
   	    void show(){
		   	cout<<"\nemployee name :"<<name;
		   	cout<<"\nemployee id :"<<id;
		   	cout<<"\nemployee basic salary :"<<bsalary;
		   	cout<<"\nperformance rating :"<<r;
		   	
		    //cout<<"update salary"<<bsalary;
		   	
		   }
};
int main(){
	
	Employee e;
	e.set();
	e.show();
	
	return 0;
}









