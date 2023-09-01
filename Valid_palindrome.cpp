//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isalnum(s[i]) && isalnum(s[j]) && tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else{
                i++;
                j--;
            }
               
        }
        return true;
               
               
        
    }
               
int main()
{
    string s;
    cout<<"enter the string";
    cin>>s;
    cout<<isPalindrome(s);
    

    return 0;
}
