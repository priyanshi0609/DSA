#include <iostream>
using namespace std;    


int main (){
    int n =5;
    int arr[5]={1,2,3,4,5};
    int maxsum= INT_MIN;
    //brute force approach
    for (int st=0;st<n;st++){
        int currsum=0;
        for (int end=st;end<n;end++){
           currsum+= arr[end];
           maxsum = max(maxsum,currsum);
        }
        cout<< endl;
    }

    //kadane's algo
    int n= nums.size();
        int maxsum=INT_MIN;
        int currsum=0;
        for (int i=0;i<n;i++){
            currsum+= nums[i];
            maxsum= max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            }
        }
    
        
    return maxsum;

}