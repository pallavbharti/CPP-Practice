#include<iostream>
using namespace std;

void PermutationString(string ans, string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < org.length(); i++)
    {
        char ch = org[i];
        string left = org.substr(0,i);
        string right = org.substr(i+1);
        PermutationString(ans+ch,left+right);
    }
    
}


int main(){
    string org = "abc";
    PermutationString("",org);
}