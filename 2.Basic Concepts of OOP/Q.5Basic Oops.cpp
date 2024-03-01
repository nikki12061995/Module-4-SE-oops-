/*5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.
*/
#include<iostream>
using namespace std;
class Rectangle{
	private:
		float len,wid,area,peri;
	public:
		void get_value(){
			cout<<"\nEnter Length of Rectangle :";
			cin>>len;
			cout<<"\nENter Width of Rectangle :";
			cin>>wid;
		}
		void Area(){
			area=len*wid;
			cout<<" Area of Rectangle is :"<<area;
		}
		void Perimeter(){
			peri=2*(wid+len);
			cout<<"\n Perimeter of Rectangle is :"<<peri;
		}
};
int main(){
	Rectangle r1;
	r1.get_value();
	r1.Area();
	r1.Perimeter();
	
	return 0;
}

