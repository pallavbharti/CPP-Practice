#include<iostream>
using namespace std;

void permutation(string input , string output){
    if(input.length()==0){
        cout << output << endl;
        return;
    }

    for(int i = 0; i < input.length(); i++){
        char ch = input[i];
        string left = input.substr(0, i);
        string right = input.substr(i+1);
        string ros = left + right;
        
        permutation(ros, output + ch);
    }
}

int main(){
    permutation("abc", "");
}
