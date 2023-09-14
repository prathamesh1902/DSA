#include <iostream>
#include<string>
using namespace std;

bool isSubsequence(string s, string t) {
        int i=0;
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                i++;
            }
        }
        if(i==s.length()){
            return 1;
        }
        else{
            return 0;
        }
    }
    
int main()
{
    string s="abc";
    string t="avbd";
    cout<<isSubsequence(s,t);

    return 0;
}
