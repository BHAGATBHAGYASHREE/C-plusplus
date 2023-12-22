#include <iostream>
using namespace std;
class Student
{
 private:
 string college;
 string rollno;
 string name;
 float mark;
public:
void getData(string co,string rn,string nm,float m)
 {
    college = co;
    rollno = rn;
    name = nm;
    mark = m;
    }
    void dispdata()
    {
        cout<<"college:"<<college<<endl;
        cout<<"rollno :"<<rollno<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"mark :"<<mark<<endl;
    }
};
 int main()
 {
    Student S1;
S1.getData("college","rollno","name",11);
S1.dispdata();
 }



