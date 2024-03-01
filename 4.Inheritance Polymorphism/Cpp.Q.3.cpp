/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;
class person{
	protected:
		int age;
		string name;
		public:
			void get(){
				cout<<"Enter Name:";
				cin>>name;
				cout<<"\nEnter Age:";
				cin>>age;
			}
			void print(){
				cout<<"Person Name is :"<<name;
				cout<<"\nPerson Age is :"<<age;
			}
};
class student{
	protected:
		float per;
		string stu_name;
	public:
	    void get_student(){
	    	cout<<"\nEnter Student Name :";
	    	cin>>stu_name;
	    	cout<<"\nEnter Student Percentage :";
	    	cin>>per;
		}	
		void print_student(){
			cout<<"Student Name is :"<<stu_name;
			cout<<"\nStudent Percentage is :"<<per;
		}
};
class teacher : public person,public student{
	protected:
		int salary;
		string teac_name;
	public:
		void get_teacher(){
	    	cout<<"\nEnter Teacher Name :";
	    	cin>>teac_name;
	    	cout<<"\nEnter Teacher Salary :";
	    	cin>>salary;
		}
		void print_teacher(){
			cout<<"Teacher Name is :"<<teac_name;
			cout<<"\nTeacher Salary is :"<<salary;
		}
};
int main(){
	teacher t1;
	t1.get();
	t1.print();
	t1.get_student();
	t1.print_student();
	t1.get_teacher();
	t1.print_teacher();
}


































