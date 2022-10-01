#include<iostream>
using namespace std;
class records{
    public :
    string name; int roll; string branch; int marks;
     void input(void);
     void display(void);
};

// member function definitions
void records::input(void){
    name = " Harshit";
    roll = 2105891;
    branch = "CSE";
    marks = 100;
}
void records::display(void){
  cout<<"The name is : "<<name<<endl;
  cout<<"The roll number is : "<<roll<<endl;
  cout<<"The branch is : "<<branch<<endl;
  cout<<"The marks is : "<<marks<<endl;
}

int main(){
    records student;
    student.input();
    cout<<"The records of the student is : "<<endl;
    student.display();
}