//Input: nums = [4,5,6,7,0,1,2], target = 0
//Output: 4
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& a, int t) {
        int s=0,e=a.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(a[mid]>=a[0])s=mid+1;
            else e=mid-1;
        }
        int pivot=s;
        s=0,e=pivot-1;
        if(t>=a[0])
            while(s<=e){
                int mid=(s+e)/2;
                if(a[mid]==t)return mid;
                else if(a[mid]>t)e=mid-1;
                else s=mid+1;
            }
        s=pivot,e=a.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(a[mid]==t)return mid;
            else if(a[mid]>t)e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
int main()
{
    vector<int> a={4,5,6,7,0,1,2,3};
    cout<<search(a,9);

    return 0;
}
