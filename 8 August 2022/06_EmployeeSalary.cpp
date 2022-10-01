// Create a class which stores id, name, age and basic salary of an employee. Input data for n number of
// employees. Calculate the gross salary of all the employees and display it along with all other details in a
// tabular form. [Gross salary= Basic salary + DA + HRA, DA = 80% of Basic salary HRA=10% of Basic salary ]

#include<iostream>
using namespace std;

class employee {
  public:
    string name;   
    int id;
    int age;
    int basic;
    int DA;
    int HRA;

};

int main() {

  employee employeeObj1;
  employee employeeObj2;

// object 1
  employeeObj1.basic = 20;
  employeeObj1.DA = 0.08 *   employeeObj1.basic;
  employeeObj1.HRA = 0.01 *   employeeObj1.basic;
  float gross1 = employeeObj1.basic + employeeObj1.DA  + employeeObj1.HRA ;

// object 2
  employeeObj1.basic = 20;
  employeeObj1.DA = 0.08 *   employeeObj1.basic;
  employeeObj1.HRA = 0.01 *   employeeObj1.basic;
  float gross2 = employeeObj1.basic + employeeObj1.DA  + employeeObj1.HRA ;
  

  // Print attribute values
    cout <<"total gross salary of 1st employee= "<<gross1<<"\n";
    cout <<"total gross salary of 2nd employee= "<<gross2<<"\n";
  return 0;
}