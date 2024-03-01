//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template <typename T>
class Swap{
	public:
		T a,b;
	void swapper(T x,T y){
		a=x;
		b=y;
	}
	void display(){
		cout<<"\na  ="<<a<<"\nb ="<<b<<endl;
	}	
	void swapp(){
		T temp;
		temp=a;
		a=b;
		b=temp;
	}
};
int main(){
	Swap<int>s1,s2;
	cout<<"\nBefore swapping :";
	s1.swapper(2,6);
	s1.display();
	s1.swapp();
	cout<<"\nAfter swapping :";
	s1.display();
}

