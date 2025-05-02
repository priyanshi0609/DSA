#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr , int n , int m , int maxallowedtime){
    int painters=1,time=0;
    for (int i=0;i<n;i++){
        if(time+arr[i]<=maxallowedtime){
            time+=arr[1];
        }
        else{
            painters++;
            time=arr[i];
        }

        

    }
    return painters>m? false : true;
}


int painterpartition(vector<int> &arr,int n, int m){
    int sum=0;
    int maxValue=INT_MIN;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        maxValue=max(maxValue,arr[i]);
    }

    int st= maxValue, end= sum , ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
       
    }
     return ans;
}


int main(){
    vector<int> arr={40,30,10,20};
    int n=4;
    int m=2;
    cout<<painterpartition(arr,n,m)<<endl;
    return 0;
}