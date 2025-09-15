#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void substring(string ans, string org ,vector<string>&v,bool flag){
    if(org==""){
        v.push_back(ans); return;
    }
    // if one element is there in org 
    char ch = org[0];
    if(org.length()==1){
        if(flag==true){
            substring(ans+ch,org.substr(1),v,true);   // Left call
            substring(ans,org.substr(1),v,true);      // Right call
            return;
        }
    }               // if duplicate exists 
    char dh = org[1];
    if(dh == ch) {
        if(flag ==true) substring(ans+ch,org.substr(1),v,true); 
        substring(ans,org.substr(1),v,false); 
    }               // NO DUPLICATE ELEMENT

    else{
        if(flag ==true) substring(ans+ch,org.substr(1),v,true); 
        substring(ans,org.substr(1),v,true); 
    }
}
int main(){
    vector<string> v;
    string s="";
    string str;
    cout<<"enter string : ";
    cin>>str;

    sort(str.begin(),str.end());
    substring(s,str,v,true);

    for(string ele : v){
        cout<<ele <<endl;
    }
}
