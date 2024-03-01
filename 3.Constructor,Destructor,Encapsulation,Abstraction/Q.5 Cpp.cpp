/*5. Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/
#include<iostream>
using namespace std;
class Triangle{
	private:
		float s1,s2,s3;
	public:
	    void getvalues(){
	    	cout<<"\n Enter the value of Side 1 :";
	    	cin>>s1;
	    	cout<<"\n Enter the value of Side 2 :";
	    	cin>>s2;
	    	cout<<"\n Enter the value of Side 3 :";
	    	cin>>s3;
	    	
	    	if(s1 == s2 && s2 == s3)
			{
	    	    cout<<"The given Triangle is equilateral ";	
			}else if(s1 == s2 || s2 == s3 || s3 == s1)
			{
				cout<<"The given Triangle is isosceles ";
			}else{
				cout<<"The given Triangle is scalene ";
			}
		}	
};
int main(){
	Triangle T1;
	T1.getvalues();
	
	return 0;
}




 
