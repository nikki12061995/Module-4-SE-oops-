/*2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.
*/
#include<iostream>
using namespace std;
class cal{
	private:
		int a,b;
	public:
	    void get_value(int x,int y){
	    	a=x;
	    	b=y;
		}
		int add(){
			return a+b;
		}
		int sub(){
			return a-b;
		}
		int mul(){
			return a*b;
		}
		int div(){
			return a/b;
		}	
		
};
int main(){
	cal sum;
	int choice,m,n,result;
    
	cout<<"\nEnter value of A:";
	cin>>m;
	cout<<"\nEnter value of B:";
	cin>>n;
	cout<<"\n1.Add\n2.Sub\n3.Mul\n4.Div:\n";
	cin>>choice;
	sum.get_value(m,n);
	switch(choice){
		case 1:
		  cout<<sum.add();
		   break;
		case 2:
		  cout<<sum.sub();
		   break;
		case 3:
		  cout<<sum.mul();
		   break;	
   	    case 4:
		cout<<sum.div();
		   break;	
        default:
        	cout<<"Wrong choice:";
        
		}
		
}






