/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class cricketer{
	protected:
		int i,runs[5];
		char name[20];
	public:
	    void get_data(){
	    	cout<<"\nEnter name:";
	    	cin>>name;
	    	
	    	cout<<"\Enter Runs:";
	    	for(i=1;1<=5;i++){
	    		cin>>runs[i];
			}
		}	
	
};
class batsman:public cricketer{
	private:
		int Total_r,A_runs,b_per;
	public:
		void in_data(){
			Total_r=0;
			for(i=1;i<=5;i++){
				Total_r +=runs[i];
			}
			cout<<"\ntotal 5 match runs is:"<<Total_r;
			
			A_runs = Total_r/5;
			cout<<"\n Average run in 5 match is:"<<A_runs;
			
			for(i=1;i<=5;i++){
				b_per = runs[0];
				runs[i] >b_per;
				b_per = runs[i];
			}
			cout<<"\nBest Performance in Overall is :"<<b_per;
		}
};
int main(){
	batsman b1;
	b1.get_data();
	b1.in_data();
	
}
