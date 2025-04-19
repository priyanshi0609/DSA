#include <iostream>
using namespace std;


int main (){
    int age=  20;
    cout << age<< endl;

    //Explicit Conversion 
    double price = 100.99;
    int newPrice =(int)price;
    cout << newPrice<< endl;

    //input variable
    int age ;
    cout<< "Enter the age : ";
     cin>> age;
    cout <<"Your age is :"<< age<<endl;

    
    return 0;
}