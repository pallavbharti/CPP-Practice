 #include<iostream>
using namespace std;


 int mySqrt(int x) {
        int low=0,high=x;

        while(low<=high){
            int mid = low + (high - low)/2;
            long long m = (long long)mid;
            long long y = (long long)x;
            if(m*m==y) return mid;
            else if(m*m>y) high = mid-1;
            else low=mid+1;
        }
        return high;
    }
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;

    cout<< mySqrt(x);
}