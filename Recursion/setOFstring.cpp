#include <iostream>
#include <string>
#include <vector>
using namespace std;

void substring(string s, string org ,vector<string>&v){
    if(org==""){
        v.push_back(s);
        return;
    }
    char ch =org[0];
    substring(s,org.substr(1),v);
    substring(s+ch,org.substr(1),v);
    
}
int main(){
    string org ="aba";
    string s="";
    vector<string>v;
    substring(s,org,v);
    for(string ele : v){
        cout<<ele<<" ";
    }
}