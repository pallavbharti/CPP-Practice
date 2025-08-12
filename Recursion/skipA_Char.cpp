#include<iostream>
using namespace std;
void remove(string s, string str,char n , int idx){
    if(idx==str.length()){
        cout<<s;
        return;
    }
    char ch= str[idx];
    if(ch==n) remove(s,str,n,idx+1);
    else remove(s+ch,str,n,idx+1);
    
}
int main(){
    string s="";
    string str;
    char n;
    cout<<"enter string : ";
    cin>>str;
    cout<<"enter string you want to skip: ";
    cin>>n;
    
    remove(s,str,n,0);
}