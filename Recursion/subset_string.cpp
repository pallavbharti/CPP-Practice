#include<iostream>
using namespace std;
void substring(string s, string str , int idx){
    if(idx==str.length()){
        cout<<s <<" "<<endl;
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
    
    substring(s,str,0);
}