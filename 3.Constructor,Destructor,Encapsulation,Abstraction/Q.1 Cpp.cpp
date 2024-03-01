/*1. Write a program to find the multiplication values and the cubic values using 
inline function
*/
#include<iostream>
using namespace std;
class line{
	public:
		//int mul,a,b;
	inline int mul(int a,int b){
		return a*b;
	}
	inline int cube(int a){
		return a*a*a;
	}
	
};
int main(){
	line obj;
	int x,y;
	cout<<"\nEnter the first value :";
	cin>>x;
	cout<<"\nEnter the second value :";
	cin>>y;
	cout<<"\nMultiplication value is :"<<obj.mul(x,y);
	cout<<"\nCube value of ["<<obj.cube(x)<<" ] is : ["<<obj.cube(y)<<" ]\n";
	
	return 0;
}
