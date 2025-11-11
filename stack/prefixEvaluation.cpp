#include<iostream>
#include<stack>
using namespace std;


int solve(int val1, int val2,int op){
  if(op=='+')return val1+val2;
  else if(op=='-')return val1-val2;
  else if(op=='*')return val1*val2;
  else return val1/val2;
}

int main(){
stack<int>val;

string s = "-/*+7983";

for (int i = s.length()-1 ; i >=0; i--)
//check if s[i] is a digit 0-9 :
{
  if (s[i]>=48 && s[i]<=57)
  {
    val.push(s[i]-48);
  }
else{   // s[i] is [ + - * / ]
   // in this case because of reverse traversal first val1 then val2 :
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1,val2,s[i]);
            val.push(ans); 
        }
    }

cout << val.top() << endl;
cout << 7+9*4/8-3 << endl;
}

