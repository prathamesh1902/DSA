#include <iostream>
#include<vector>
using namespace std;

vector<int> findTwoElement(vector<int> arr) {
        long long n1=arr.size();
        long long s1=(n1*(n1+1))/2;
        long long s2=(n1*(n1+1)*(2*n1+1))/6;
        long long y1=0;
        long long y2=0;
        for(int i=0;i<n1;i++){
            y1=y1+arr[i];
            y2=y2+((long long)arr[i]*(long long)arr[i]);
        }
        long long sum1=y1-s1;
        long long sum2=y2-s2;
        sum2=sum2/sum1;
        long long x=(sum1+sum2)/2;
        long long y=x-sum1;
        return{(int)x,(int)y};
    }
    
int main()
{
    vector<int> v = {1,2,2,4};
    vector<int> res = findTwoElement(v);
    for(int x: res){
        cout<< x<<"  ";
    }
    

    return 0;
}

