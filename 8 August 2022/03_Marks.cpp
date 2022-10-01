// to store marks in 5 subjects. Calculate the total marks and percentage of a student and display
#include<iostream>
using namespace std;

class students {
  public:
    string name;   
    int roll;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
};

int main() {

  students studentsObj1;
  studentsObj1.name = "HARSHIT";
  studentsObj1.roll = 2105891;
  studentsObj1.marks1 = 20;
  studentsObj1.marks2 = 40;
  studentsObj1.marks3 = 70;
  studentsObj1.marks4 = 60;

  float total = studentsObj1.marks1 + studentsObj1.marks2  + studentsObj1.marks3  + studentsObj1.marks4 ;
  
  float percentage =( total / 400 )*  100;

  // Print attribute values
    cout <<"total marks = "<<total<<"\n";
    cout <<"percentage marks = "<<percentage<<"\n";
  return 0;
}