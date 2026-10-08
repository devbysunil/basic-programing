#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=7;
}
int main(){
   int arr[4]={2,4,6,5};
   for(int i = 0;i<=3;i++){
    cout<<arr[i]<<"  ";
}
cout<<"\n";
change(arr);
for(int i = 0;i<=3;i++){
    cout<<arr[i]<<"  ";
}

}