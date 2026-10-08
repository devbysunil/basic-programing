#include<iostream>
using namespace std;
int main(){
    
    int arr[5];
    // arr[0] = 3;
    // arr[1] = 4;
    // arr[2] = 2;
    // arr[3] = 0;
    // arr[4] = 6;
    cout<<"enter array elements : ";
    for(int i = 0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=4;i++){
        cout<<arr[i]<<"  " ;
    }
   
    arr[0] = 10;
    arr[4] = 11;
    for(int i = 0;i<=4;i++){
        cout<<arr[i]<<"  ";
    }
    // cout<<arr[0]<<"  ";
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;



}