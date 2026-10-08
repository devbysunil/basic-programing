#include<iostream>
using namespace std;
int main(){
 int arr[4][5];
    arr[0][0] = 2;
    arr[0][1] = 3;
    arr[0][2] = 4;
    arr[0][3] = 5;
    arr[0][4] = 6;
    arr[1][0] = 8;
    arr[1][1] = 7;
    arr[1][2] = 2;
    arr[1][3] = 9;
    arr[1][4] = 0;
    arr[2][0] = 11;
    arr[2][1] = 34;
    arr[2][2] = 5;
    arr[2][3] = 7;
    arr[2][4] = 8;
    arr[3][0] = 6;
    arr[3][1] = 12;
    arr[3][2] = 24;
    arr[3][3] = 22;
    arr[3][4] = 13;
    cout<<"row by printing :"<<endl; 
    // row by printing
    for(int i= 0;i<4;i++){
        for(int j = 0;j<5;j++){
            cout<<arr[i][j]<<" \t ";
        }
            cout<<endl;
    }
    cout<<endl;
    cout<<"colam by printing :"<<endl;
// column by printing
for(int j = 0;j<5;j++){
    for(int i= 0;i<4;i++){
        cout<<arr[i][j]<<" \t ";
    }
    cout<<endl;
}
  
}