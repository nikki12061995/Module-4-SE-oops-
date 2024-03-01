/*6. Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;
class person{
	private:
		char name[20],country[20];
		int age;
		
		public:
		void set(){
			cout<<"Enter the person Name :";
			cin>>name;
		
			cout<<"Enter the person Age :";
			cin>>age;
			
			cout<<"ENter the person Country :";
			cin>>country;
		}
		void get(){
			cout<<"\nperson Name :"<<name;
			cout<<"\nperson Age :"<<age;
			cout<<"\nperson Country :"<<country;
			
		}
};
int main(){
	person p1;
	p1.set();
	p1.get();
}







