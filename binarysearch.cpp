#include <iostream>
using namespace std;
#include <vector>

int binarysearch(vector <int> arr, int tar){
    int st=0;
    int end =arr.size()-1;

    while(st<=end){
        int mid =st+(end-st)/2; // to avoid overflow
        // int mid = (st+end)/2; // this can cause overflow 

        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
          
    }
    return -1;
}


int main(){
    vector <int> arr={1,2,3,4,5,6,7,8,9};
    int tar=5;
    cout<<binarysearch(arr,tar)<<endl;
    return 0;

}