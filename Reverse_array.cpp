#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int start=0;
    int end=(sizeof(arr)/sizeof(arr[0]))-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int j=0;j<5;j++){
        cout << arr[j] <<" ";
    }

    return 0;
}
