// Dutch Flag Algorithm to sort 0's , 1's & 2's 
// take 3 pointers low , mid & high. (operation perform using mid )

#include <iostream>
using namespace std;
#include<vector>

void display(vector<int> v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i] <<"  ";
    } 

}

void sortv(vector<int> &v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while (mid<=high){
        if (v[mid]==2)             
        {
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }

        else if (v[mid]==0)             
        {
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++; mid++;
        }
        else
        mid++;
    }
    
    
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;

    vector <int> v;
    cout<< "enter array element : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i] << "  ";
    }

    sortv(v);
    cout<<endl <<"after sorting array: ";
    display(v);
    
}