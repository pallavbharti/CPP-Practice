#include<iostream>
#include<string>
using namespace std;

bool ispallindrome(string str,int i , int j){
    if(i>j)return true;
    if(str[i]!=str[j]) return false;
    else return ispallindrome(str,i+1,j-1);
}
int main(){
    string str ="racecar";
    cout<<ispallindrome(str,0,str.length()-1);
}