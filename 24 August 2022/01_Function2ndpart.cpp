#include<iostream>
using namespace std;
class records{
    public :
    string nameOriginal; int rollOriginal; string branchOriginal; int marksOriginal;
};
     void input(string name,int roll, string branch, int marks);

     void display(string name,int roll,string branch,int marks);

// member function definitions
void input(string name,int roll, string branch,int marks){
   
    name = " Harshit";
    roll = 2105891;
    branch = "CSE";
    marks = 100;
}
void display(string name,int roll,string branch,int marks){
    
  cout<<"The name is : "<<name<<endl;
  cout<<"The roll number is : "<<roll<<endl;
  cout<<"The branch is : "<<branch<<endl;
  cout<<"The marks is : "<<marks<<endl;
}

int main(){
    records student;
    input(student.name, student.roll, student.branch, student.marks );
    cout<<"The records of the student is : "<<endl;
    display(student.name, student.roll, student.branch, student.marks);
}