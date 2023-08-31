//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

   
int main()
{
    vector<int>nums={1,0,2,0,0,3};
    int start=0;
    int end=0;
    while(end<nums.size()){
        if(nums[end]==0){
            end++;
        }
        else{
            swap(nums[start],nums[end]);
            start++;
            end++;
        }
    }
    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}
