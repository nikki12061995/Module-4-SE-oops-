//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
using namespace std;
class student{
    protected:
        int rollno,std;
        string name;
    public:
            void get_basic_det(){
            cout<<"Enter Student Name : ";
            cin>>name;
            cout<<"Enter Student Class : ";
            cin>>std;
            cout<<"Enter Student Roll No : ";
            cin>>rollno;
        }
};
class marks{
    protected:
        float maths,sci,eng,total;

    public:
        void get_marks(){
        	maths=0,sci=0,eng=0,total=0;
            cout<<"Enter Maths Marks : ";
            cin>>maths;
            cout<<"Enter Science Marks : ";
            cin>>sci;
            cout<<"Enter English Marks : ";
            cin>>eng;
        }
};
class print: public student,public marks{
    public:
        void print_data(){
            total = maths + sci + eng;
            cout<<"Student Name is : "<<name<<"\nStudent Class is : "<<std<<"\nStudent Roll  No is : "<<rollno;
            cout<<"\nStudent Marks is Following : \n";
            cout<<"Maths : "<<maths<<"\t\tSciene : "<<sci<<"\t\tEnglish : "<<eng<<"\tTotal Marks : "<<total;
        }
};
int main() {
    print a;
    a.get_basic_det();
    a.get_marks();
    a.print_data();
}


