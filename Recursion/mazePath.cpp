#include<iostream>
using namespace std;

int maze(int sr,int sc, int er , int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right = maze(sr,sc+1,er,ec);
    int down = maze(sr+1,sc,er,ec);
    int totalways = right+down;
    return totalways;
}
void printpath(int sr, int sc, int er, int ec, string s) {
    if(sr > er || sc > ec) return;
    if(sr == er && sc == ec) {
        cout << s << endl;
        return;
    }
    printpath(sr, sc+1, er, ec, s + 'R'); // Move Right
    printpath(sr+1, sc, er, ec, s + 'D'); // Move Down
}

int main(){
    cout<<maze(1,1,3,3)<<endl;
    printpath(1,1,3,3,"");
    
}