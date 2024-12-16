#include<iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool found=false;
    int ind;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            ind=i;
            found=true;
            break;
        }
    }
    if(found){
        
    cout<<"found at "<<ind+1;
    
    }
    else{
        cout<<"Not Found";
    }

 return 0;
}