/*4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.
*/
#include<iostream>
using namespace std;
class Circle{
	private:
		float radius,area,circum;
	public:
	    void get_input(){
	    	cout<<"\nEnter Radius of circle : ";
	    	cin>>radius;
	    	
		}
		void get_Area(){
			area=3.14*radius*radius;
			cout<<"\nArea of circle ="<<area;
		}
		void get_circumference(){
			circum=2*3.14*radius;
			cout<<"\nCircumference of circle ="<<circum;
		}	
};			
int main(){
	Circle c1;
	c1.get_input();
	c1.get_Area();
	c1.get_circumference();
	
	return 0;
}
