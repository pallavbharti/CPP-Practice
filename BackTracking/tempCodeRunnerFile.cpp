#include<iostream>
using namespace std;

void permutation(string input , string output){
    int n = input.length();
    if(output.length() == input.length()){
        cout<<output<<endl;
        return;
    }
    for(int i =0 ; i< n ; i++){
        char ch = input[i];
        string left = input.substr(0,i);
        string right = input.substr(i+1);
        string ros = left+right;
        permutation(ros,output+ch);
    }
}

int main(){
    string s = "";
    string org = "abc";
    permutation(org,s);
    
}