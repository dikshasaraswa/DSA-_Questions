#include<iostream>
using namespace std;
void printa(int arr[], int n ){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}

void swap(int arr[],int size){
    for(int i =0 ; i<size;i=i+2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int e[10] = {4, 5, 6, 7, 8, 9, 2, 24, 45, 34};
    int o[5] ={3, 4, 6, 8, 2};

    swap(e,10);
    printa(e,10);
    swap(o,5);
    printa(o,5);
}