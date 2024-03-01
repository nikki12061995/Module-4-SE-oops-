/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>
using namespace std;
class date{
	private:
		int day,month,year,yr,n=0,r;
	public:	
	    date(){
	    	cout<<"\nEnter Day :";
	    	cin>>day;
	    	cout<<"\nEnter month :";
	    	cin>>month;
	    	cout<<"\nEnter year :";
	    	cin>>yr;
	    	year=yr;
		}
		void valid(){
			while(yr!=0){
				r=yr%10;
				n++;
				yr=yr/10;
		    }
		    if(day>31 || day<1 || month>12 || n!=4){
		    	cout<<"\ninvalid";
			}
			else if(day>30 && (month==4 || month==6 || month==9 || month==11)){
				cout<<"\nThis month cannot have more than 30 days";
			}
			else if(month==2){
				if((year%4==0 && year%100!=0) || (year%400==0)){
					if(day>29){
						cout<<"feb only can have 29 days in leap year";
					}
					else{
						cout<<"\ndate is valid";
					}
				}
				else{
					if(day>28){
						cout<<"feb only can have 28 days in non leap year";
					}
					else{
						cout<<"\ndate is valid";
					}
				}
			}
			else{
				cout<<"\ndata is valid";
			}
	}
};
int main(){
	date d1;
	d1.valid();
}
