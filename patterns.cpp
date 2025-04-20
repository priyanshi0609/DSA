#include <iostream>
using namespace std;


int main (){

    // Square Pattern 
    int n = 5;
    for (int i =1 ; i<=n;i++){
        for (int j =1 ; j<=n;j++){
            cout << "j";
        }
        cout << endl;
    }

    int n = 5;
    for (int i=0; i<n;i++){
        char ch = 'A' 
        for (int j=0; j<n;j++){
            cout<<ch ;
            ch++;
        }
        cout << endl;
    }

    int n = 5;
    int num=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << num;
            num++;
        }
        cout << endl;

    }

    // Triangle Pattern
    int n=4 ;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }

    int n=4 ;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i+1;j++){
            cout <<i+1;
        }
        cout << endl;
    }
}

