
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        if(end==0){
            return nums[0];
        }
        else if(nums[0]<nums[end]){
            return nums[0];
        }
        else{
            
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]>=nums[0]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return nums[start];
        }
    }
    
int main()
{
    vector<int> v={3,4,5,8,0,1,2};
    cout<<findMin(v);
    return 0;
}
