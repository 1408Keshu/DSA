#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j] > key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
      int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    InsertionSort(arr,n);
    cout<<endl<<"After Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}