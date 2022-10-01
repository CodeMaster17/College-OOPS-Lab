#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp ;
    temp = a;
    a = b;
    b= temp;
    cout<<"value of num1 :"<<a<<endl;
    cout<<"value of num2 :"<<b<<endl;
}

int main(){
    int num1 = 10;
    int num2 = 13;
    cout<<"Before swapping"<<endl;
    cout<<"The number num1 : "<<num1<<endl;
    cout<<"The number num2 : "<<num2<<endl;

    cout<<"after swapping :"<<endl;
    swap(num1 , num2);
}