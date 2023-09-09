#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int mySqrt(int x) {
        int start=0;
        int end=x;
        long long int ans=-1;
        long long int mid=start+(end-start)/2;
        while(start<=end){
            long long int square=mid*mid;
            if(square==x){
                return mid;
            }
            if(square<x){
                ans=mid;
                start=mid+1;
            }
            else{
                
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    
int main()
{
    int x=8;
    cout<<mySqrt(x);
    return 0;
}
