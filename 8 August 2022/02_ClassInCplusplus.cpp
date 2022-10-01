#include<iostream>
using namespace std;

class students {
  public:
    string name;   
    int roll;
    int marks;
};

int main() {

  students carObj1;
  carObj1.name = "HARSHIT";
  carObj1.roll = 2105891;
  carObj1.marks = 20;

  // Print attribute values
  cout << carObj1.name << " " << carObj1.roll << " " << carObj1.marks << "\n";
  return 0;
}