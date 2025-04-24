#include <iostream>
#include <vector>
using namespace std;
//brute force approach
vector <int> pairusm(vector <int>nums,int target){
    vector <int> ans;
    for (int i=0;i<nums.size();i++){
        for (int j=i+1;j<nums.size();j++){
            if (nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

//optimal approach
int n =nums.size();
int i=0;
int j=n-1
int target = 9;
while(i<j){
    int pairsum =nums[i]+nums[j];
    if(pairsum >target ){
        j--;
    }
    else if(pairsum <target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}

//majority element


