#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool searchInsert(vector<int>& nums, int target) {
    int start=0;
    int end=nums.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(nums[mid]==target){
            return true;
            break;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return false;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    int target;
    cout<<"enter target";
    cin>>target;
    cout<<searchInsert(v,target);
    

    return 0;
}
