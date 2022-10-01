#include<iostream>
using namespace std;
    int globalVar = 4;
    int a = 3;

int main(){
    int localVar = 9;
    int a = 4;
    cout<<"value of local variable is :"<<localVar<<endl;

    cout<<"value of global variable is :"<<globalVar<<endl;
    globalVar = 10;
    cout<<"value of global variable after changing is :"<<::globalVar<<endl;
    cout<<"value of a globally is :"<<::a<<endl;
    cout<<"value of a locally is :"<<a<<endl;
}