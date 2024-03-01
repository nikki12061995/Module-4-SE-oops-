/*11. Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ? *Area* breadth
Circle: Pi * Area *Area.*/

#include<iostream>
using namespace std;
class A{
	public:
		float area(float w,float b){
			return w * b;
		}
		float barea(float a,float c){
			return (a * c)/2;
		}
		float area(float r){
			return 3.14*r*r;
		}
};

int main(){
	A shape;
	cout<<"\n Area of Circle is:"<<shape.area(6);
	cout<<"\n Area of Rectangle is:"<<shape.area(5,5);
	cout<<"\n Area of Triangle is:"<<shape.barea(6,6);
}
