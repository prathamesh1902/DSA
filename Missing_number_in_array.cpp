//to find out the missing number in array

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int number=0;
        for(int i=0;i<nums.size();i++){
            number=number^nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            number=number^i;
        }
        return number;
    }
int main()
{
    vector<int> v={0,1,2};
    cout<<missingNumber(v);

    return 0;
}
