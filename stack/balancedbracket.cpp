#include <iostream>
#include <stack>
using namespace std;
bool isbalanced(string s){
    if(s.length()%2!=0) return false;
    stack <char> st;
    //step 1 : "("
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(') st.push(s[i]);
        //step 2: ")" 
        else{
            if(st.size()==0) return false;
            else st.pop();
        }

    }
    // step 3 : 
        if(st.size()==0) return true;
        else return false;
    
}

int main(){
    string s = "())()(";
    cout<<isbalanced(s);

}
