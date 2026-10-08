#include<iostream>
using namespace std;
int main(){

// write a program to calculate sum of all the elements givin by array ::; 

    /** int arr[] = {2,3,4,5,6};
    int sum = 0;
    int n = sizeof(arr)/4;

    for(int i = 0;i<n;i++){
     sum += arr[i];
        
    }
    cout<<sum<<"  ";*/

    // write a program to calculate product of all the elements givin by array ::; 

 /** int arr[] = {2,3,4,5};
    int product = 1;
    int n = sizeof(arr)/4;

    for(int i = 0;i<n;i++){
      product *= arr[i];
        
    }
    cout<<product<<"  "; */

     // write a program to find a maximum numbers of all the elements givin by array ::; 

   /** int arr[] = {2,11,4,5,8,4,7,9,33};
      int mx = arr[0];
      int n = sizeof(arr)/4;
      for(int i = 0;i<n;i++){
      // if(arr[i] > mx){               // first type 
      //   mx = arr[i];
      // }                          
      mx = max(mx,  arr[i]);            // second type 
        }
      cout<<mx<<"  "; */


  // write a program to find a minimum numbers of all the elements givin by array ::; 

       /** int arr[] = {2,11,4,5,8,4,7,9,33};
      int mn = arr[0];
      int n = sizeof(arr)/4;
      for(int i = 0;i<n;i++){
      if(arr[i] < mn){               // first type 
        mn = arr[i];
      }                          
      // mn = min(mn,  arr[i]);            // second type 
        }
      cout<<mn<<"  "; */

  //  give an array of integers, change the value of all odd indexed elements to its second multipals and increment all even index value by 10 ::;
      
  /** int arr[] = {1,2,3,5,7,8,9,4};
     int n = sizeof(arr)/4;
      for(int i = 0;i<n;i++){
      if(arr[i]%2 == 0){ 
             arr[i] += 10;      
        } 
        else{
          arr[i] *= 2;
        }       
        cout<<arr[i]<<"  ";                  
        } */


        // count the number of elements in givin array greater than a givin numbers x :::


/** int arr[] = {1,2,3,5,7,8,9,4};
      int n = sizeof(arr)/4;
      int x;
      cout<<"enter x :";
      cin>>x;
      int count = 0;
        for(int i = 0;i<n;i++){
           if(arr[i] > x){
              count++;
           }
        }
      cout<<count<<"  "; */     
      
// Find the deffirence between the sum elements at even idices to sum of elements at odd idices :
  
 /** int arr[] = {1,2,3,5,7,8,9,4};
     int n = sizeof(arr)/4;
     int sumOfeven = 0;
     int sumOfodd = 0;
      for(int i = 0;i<n;i++){
      if(arr[i]%2 == 0){ 
            sumOfeven += arr[i];
        } 
        else{
          sumOfodd += arr[i];
        } 
         }
        int def = sumOfeven - sumOfodd;      
        cout<<def<<"  ";  */
        
  // Find the second largest elements in the givin array :::;
  
  /** int arr[] = {2,4,6,2,7,8,9,11,33,0,15};
  int mx = arr[0];

  int n = sizeof(arr)/4;
  for(int i = 0;i<n;i++){
   mx = max(mx,  arr[i]);            
    }
    int smax = arr[0];
    for(int i = 0;i<n;i++){
      if(arr[i] != mx){
        smax = max(smax,  arr[i]); 
      }
     }
       cout<<smax<<"  ";  */
       
       
     // write a program to copy the contents of one array into another in the reverse order ::;
     
    // int a[] = {2,3,4,5,6,7};
    //    int n = sizeof(a)/4;
    //    for(int i=0;i<n;i++){
    //    cout<<a[i]<<"  ";
    //    }
    //    cout<<endl;
    //  int b[n];
    //     for(int i=0;i<n;i++){
    //     int j = n-1-i;
    //     b[i] =  a[j];
    //     cout<<b[i]<<"  ";
    //     }
  

  // write a progream to revese the array withuot using any extra array ::;

  /**int a[] = {2,3,4,5,6,7};
       int n = sizeof(a)/4;
       for(int i=0;i<n;i++){
       cout<<a[i]<<"  ";
       }
        cout<<endl;
        int i = 0;
        int j = n-1;
     while(i<j){
          int temp = a[i];
              a[i] = a[j];
              a[j] = temp; 
              i++;
              j--;
    }
     for(int i=0;i<n;i++){
          cout<<a[i]<<"  ";
        }*/
  

}
