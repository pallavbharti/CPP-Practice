#include<iostream>
using namespace std;
void substring(string s, string str , int idx){
    if(idx==str.length()){
        cout<<s <<" ";
        return;
    }
    char ch= str[idx];
    substring(s+ch,str,idx+1);
    substring(s,str,idx+1);
    
}
int main(){
    string s="";
    string str;
    cout<<"enter string : ";
    cin>>str;
    cout<<"enter string you want to skip: ";
    
    substring(s,str,0);
}