//Template Example 
#include<iostream>
using namespace std;
template <typename T>
class myclass{
	public:
		T x,y;
		void get_data(T a,T b){
			x=a;
			y=b;
		}
		void printdata(){
			cout<<"\n x:"<<x;
			cout<<"\n y:"<<y;
		}
};
template <typename T>
T compare(T a,T b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){
	cout<<"\n integer :"<<compare(10,20);
	cout<<"\n float :"<<compare(4.5,2.5);
	cout<<"\n character :"<<compare('a','b');
	
	myclass<int> m1,m2;
	m1.get_data(10.50,20);
	m1.printdata();
	
	return 0;
}





