#include<iostream>
using namespace std;
int uniqueelement(int*arr, int size){
    int ans =0;
    for(int i =0 ; i< size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int a[5]={1,2,3,2,1};
    int x = uniqueelement(a,5);
    cout<<x<<endl;
}
