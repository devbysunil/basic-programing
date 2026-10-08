#include<iostream>
using namespace std;
int main(){

// Write a program to store all roll numbers and marks obtained by 4 students side by side in matrix ::;

    // int arr[4][2] = {{12,88},{13,78},{14,89},{15,90}};
    // for(int i= 0;i<4;i++){
    //     for(int j = 0;j<2;j++){
    //         cout<<arr[i][j]<<"  ";

    //     }
    //     cout<<endl;
    // }

    // Write a program to store 10 every index of 2D matrix with a 5 rows and 5 columns
    
    // first type :-

    /** int arr[5][5] = {{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10}};
    for(int i= 0;i<5;i++){
            for(int j = 0;j<5;j++){
                cout<<arr[i][j]<<"  ";
    
            }
            cout<<endl;
        }*/

       // Second types :-
      /** int arr[5][5];
         for(int i= 0;i<5;i++){
            for(int j = 0;j<5;j++){
                arr[i][j] = 10;
            }

       }
         for(int i= 0;i<5;i++){
            for(int j = 0;j<5;j++){
              cout<<arr[i][j]<<"  ";

        }
        cout<<endl;
    } */


  //  Write a program to add two matrices ::;  

     /** int a[2][3] = {{4,7,6},{1,3,4}};
      int b[2][3] = {{7,2,3},{9,8,5}};
      int c[2][3];
      for(int i= 0;i<2;i++){
        for(int j = 0;j<3;j++){
          c[i][j] = a[i][j]+b[i][j];
        }
     }
     for(int i= 0;i<2;i++){
        for(int j = 0;j<3;j++){
          cout<<c[i][j]<<"\t";

    }
    cout<<endl;
} */

// Find the maximum element in a givin matrix ::;

    /** int arr[2][4] = {{3,5,7,10},{8,9,2,15}};
    int mx = arr[0][0];
    for(int i= 0;i<2;i++){
        for(int j = 0;j<4;j++){
        //  mx = max(mx,arr[i][j]);   // first type

         if(arr[i][j]>mx){            //second type
            mx = arr[i][j];
         }
         }
     }
     cout<<mx<<" "; */

    // Find the minimum element in a givin matrix ::;

    /** int arr[2][4] = {{3,5,7,10},{8,9,2,15}};
     int mn = arr[0][0];
     for(int i= 0;i<2;i++){
         for(int j = 0;j<4;j++){
         //  mn = min(mn,arr[i][j]);   // first type
 
          if(arr[i][j]<mn){            //second type
             mn = arr[i][j];
          }
          }
      }
      cout<<mn<<" ";  */


// Find the sum of element in a givin matrix ::;

/**  int arr[2][4] = {{3,5,7,10},{8,9,2,15}};
     int sum =0;
     for(int i= 0;i<2;i++){
         for(int j = 0;j<4;j++){
         sum += arr[i][j];
          }
      }
      cout<<sum<<" ";*/
      
      
// Find the pruduct of element in a givin matrix ::;

/**  int arr[2][2] = {{3,5},{8,9}};
 int product = 1;
 for(int i= 0;i<2;i++){
     for(int j = 0;j<2;j++){
     product  *= arr[i][j];
      }
  }
  cout<< product<<" ";*/

  // Give a matrix 'a' of dimention n x m and two coordinates (l1,r1) and (l2,r2). Return the sum of rectangle form (l1,r1) to (l2,r2).

  /**int arr[5][5] = {{3,5,7,10,3},{8,9,2,15,4},{3,5,7,10,3},{8,9,2,15,4},{6,2,7,12,13}};
  int sum =0;
  for(int i= 1;i<2;i++){
      for(int j = 1;j<2;j++){
      sum += arr[i][j];
       }
   }
   cout<<sum<<" "; */ 

// W   
  
  
    }