#include<iostream>
using namespace std;
int binarySearch(int arr[],int high,int low,int x){
    while(low<=high){
        int mid=(high-low)/2;
        if(arr[mid]==x){

        return mid;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
int arr[]={2,3,4,23,44};
int x=10;
int n=sizeof(arr)/sizeof(arr[0]);
int result=binarySearch(arr,n-1,0,x);
if(result==-1)cout<<"element is not present";
else{
    cout<<"element is present";
}
 return 0;
}