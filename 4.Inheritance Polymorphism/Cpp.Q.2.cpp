//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class shape{
	public:
		float h,w;
		void get_data(){
			cout<<"\nEnter Height :";
			cin>>h;
			cout<<"\nEnter Width :";
			cin>>w;
	    }
};
class Rectangle:public shape{
	public:
		float area(){
			return h*w;
		}
};
int main(){
	Rectangle r1;
	r1.get_data();
	cout<<"\nArea is :"<<r1.area();
}
