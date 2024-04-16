//search in rotated sorted array
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
int binarysearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start +(end-start)/2;
    while(start <= end){
        if(arr[mid]==key){
          return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start +(end - start)/2;
    }
    return -1;
}
int findposition(int arr[], int n, int k){
    int pivot = getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }
}
int main(){
    int a[5]= {7,9,1,2,3};
    findposition(a,5,9);
}