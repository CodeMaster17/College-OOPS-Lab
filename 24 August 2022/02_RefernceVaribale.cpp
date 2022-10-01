#include<iostream>
using namespace std;
class records{
    public :
    void referenceVariables(void);
};
void records::referenceVariables(){
    int x = 10;
    int&ref = x;
    ref= 20;
    cout<<"X= "<<x<<endl;
    x = 30;
    cout<<"ref ="<<ref<<endl;
}
int main(){
    records student;
    cout<<"Program using reference variables :"<<endl;
    student.referenceVariables();
   
}