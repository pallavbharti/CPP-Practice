#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
  if(ch=='+' || ch=='-') return 1;
  else return 2;
}
int solve(int val1, int val2,char op){
  if(op=='+')return val1+val2;
  else if(op=='-')return val1-val2;
  else if(op=='*')return val1*val2;
  else return val1/val2;
}

int main(){
stack<int>val;
stack<char>op;
string s = "(7+9)*4/8-3";

for (int i = 0; i < s.length(); i++)
//check if s[i] is a digit 0-9 :
{
  if (s[i]>=48 && s[i]<=57)
  {
    val.push(s[i]-48);
  }
else{   // s[i] is [ + - * /  ( ) ]
    if(op.size()==0 ){
        op.push(s[i]);
    }
    else if (s[i]=='(') op.push(s[i]);
    else if (op.top()=='(') op.push(s[i]);
    else if (s[i]==')')
    {
        while (op.top()!='(')
        {
            char ch = op.top();
            op.pop();
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,val2,ch);
            val.push(ans);
        }
        op.pop(); // opening bracket is also deleted .
        
    }
    else if(priority(s[i])>priority(op.top()))  op.push(s[i]);

    
    
    
    else{       // priority(s[i]) <=priority(op.top())     I have to perform KAAM:
        while (op.size()>0 && priority(s[i]) <=priority(op.top()))
        {
            char ch = op.top();
            op.pop();
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,val2,ch);
            val.push(ans); 
        }
        op.push(s[i]);

    }
}

        
} 
// the op stack can still have values so make it empty by doing KAAM
while (op.size()>0)
        {
          char ch = op.top();
            op.pop();
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,val2,ch);
            val.push(ans); 
      }
cout << val.top() << endl;
}
