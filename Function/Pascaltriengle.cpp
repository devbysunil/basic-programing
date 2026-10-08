#include<iostream>
using namespace std;
/** int fact(int x){
    int f = 1;
    for ( int i = 1 ;i<=x;i++){
        f *= i;
    }
    return f;
    }
    int ncr(int n,int r){
     return fact(n)/(fact(r)*fact(n-r));
    }
    int main(){
        int n ;
        cout<<"enter a value of n :";
        cin>>n;
        for(int i = 0; i<=n ; i++){
           for(int j =0;j<=i;j++){
                cout<<ncr(i,j)<<" ";
             }
            cout<<endl;
        }

    }*/

                    // OR //

//   int fact(int x){
// int f = 1;
// for ( int i = 1 ;i<=x;i++){
//  f *= i;
//  }
// return f;
//    }
//     int ncr(int n,int r){
//      return fact(n)/(fact(r)*fact(n-r));
//           }
//             int main(){
//              int n ;
//               cout<<"enter a value of n :";
//                  cin>>n;
//               for(int i = 0; i<=n ; i++){
//              for(int j =0;j<=n-i-1;j++){
//             cout<<"  ";
//          }
//          for(int j =0;j<=i;j++){
//          cout<<ncr(i,j)<<"   ";
//       }
//       cout<<endl;
//     }
// } 


// swap function

int swap(int& x,int& y){
 int temp = x;
        x = y;
        y = temp;

}
int main(){
int x = 4;
int y = 15;
cout<<x<<" "<<y<<endl;
swap(x,y);
cout<<x<<" "<<y<<endl;

}

                        