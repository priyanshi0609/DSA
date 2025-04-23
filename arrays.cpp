#include <iostream>
using namespace std;


int main (){
    int marks[5]={1,2,3,4,5};
    int size=5;
    int smallest = INT_MAX;
    int position ;


    for (int i=0;i<size;i++){
        if (marks[i]<smallest){
            smallest=marks[i];
            position=i; 
        }
    }
    cout << "smallest number is : " << smallest << endl;
    cout << "position of smallest no:"<< position << endl;

    return 0;
}