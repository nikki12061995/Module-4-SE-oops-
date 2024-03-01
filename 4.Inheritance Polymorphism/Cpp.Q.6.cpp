/*6. Write a C++ Program to show access to Private Public and Protected using Inheritance*/

#include<iostream>
using namespace std;
class A{
	protected:
		int a, b;
	public:
		A(){
			cout<<"\n enter number 1:";
			cin>>a;
			
			cout<<"\n enter number 2:";
			cin>>b;
		}
};
class B:public A{
	private:
		int result;
	public:
		void cl(){
			cout<< "\n total answer is:"<<a+b;
		}
};

int main(){
	B b;
	b.cl();
}
