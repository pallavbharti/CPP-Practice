# include<iostream>
using namespace std;
# include<vector>
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(13);
    v.push_back(27);
    for(int i=0;i<v.size();i++){
        cout<<v[i] <<"  ";
    }

    cout<<"size of vector: " <<v.size() << endl;

    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i] <<"  ";
    }

}