/*3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.
*/
#include<iostream>
using namespace std;
class car{
	private:
		char company[20],model[20];
		int year;
	public:
		void get(){
			cout<<"Enter Company Name :";
			cin>>company;
			cout<<"Enter Car Model :";
			cin>>model;
			cout<<"Enter the Year :";
			cin>>year;
		}
		void set(){
			cout<<"\nUpdate Company :"<<company<<"\nUpdate model of car:"<<model;
			cout<<"\nUpdate Year :"<<year;
		}
};
int main(){
	car c1;
	c1.get();
	c1.set();
	
	return 0;
}



