//find pivot in an array
#include<iostream>
using namespace std;
int getpivot(int arr[],int n ){
    int s=0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main(){
    int a[5]={3,8,10,12,1};
    cout<<"the pivot index is "<< getpivot(a,5)<<endl;
}