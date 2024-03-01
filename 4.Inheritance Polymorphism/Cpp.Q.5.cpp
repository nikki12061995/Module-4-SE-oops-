/*5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)*/
/*5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance).*/

//Multilevel Inheritance

#include<iostream>
using namespace std;
class Students{
	protected:
		int rollno;
	public:
		void std_roll(){
			cout<<"\n enter student roll no:";
			cin>>rollno;
		}
};
class Test:public Students{
	protected:
		int maths, eng;
	public:
		void stor_marks(){
			cout<<"\n Enter maths marks:";
			cin>>maths;
			
			cout<<"\n Enter english marks:";
			cin>>eng;
		}
};
class result: public Test{
	protected:
		int total;
	public:
		void totl_marks(){
			cout<<"\n Total marks:"<< maths + eng;
		}
};

int main(){
	result r1;
	r1.std_roll();
	r1.stor_marks();
	r1.totl_marks();
}
