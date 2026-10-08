#include<iostream>
using namespace std;
// void greet(){
//     cout<<"hello!"<<endl;
//     greet();
// }
// int main(){
//     greet();
// }

// Write a program to print a numbers N to 1 using by recursion :::

// void print(int n){
//     if(n==0){
//         return;
//     }
//    cout<<n<<endl;
//    print(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
// print(n);
// }

// Write a program to print a numbers 1 to N using by recursion :::

  /** void print(int x,int n){
    if(x>n){               //base case
        return;    
    }
   cout<<x<<endl;         // work
   print(x+1,n);          //call
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
  
print(1,n);
} */

// Write a program to print a numbers 1 to N using by recursion with out extra parameters :::

  /**void print(int n){
        if(n==0){                // Base case
            return;
        }
        // if we swaped work from call then we can print a number of 1 to N 
      print(n-1);             //call
      cout<<n<<endl;          // work
    }
    int main(){
        int n;
        cout<<"enter n :";
        cin>>n;
    print(n);
    }*/

    // Write a program to print a sum of 1 to N numbers using by recursion in return types ::
     
  /** int sum(int n){
      if(n==1){
        return 1;
      }
      return n + sum(n-1);
    }
    int main(){
        int n ;
        cout<<"enter n :";
        cin>>n;
        cout<<sum(n);
   } */

    // Write a program to count a factorial of  N numbers using by recursion in return types ::

    /**int fact(int n){
      if(n==0 || n==1){
        return 1;
      }
      return n*fact(n-1);
    }
    int main(){
        int n ;
        cout<<"enter n :";
        cin>>n;
        cout<<fact(n);
   }*/

   // Make a function which calculates 'a' raised to the power 'b' using recursion ::

   int pow(int a , int b){
    if( b==0){
      return 1;
    }
    return a*pow(a,b-1);
  }
  int main(){
      int a ;
      cout<<"enter base :";
      cin>>a;
      int b ;
      cout<<"enter power :";
      cin>>b;
      cout<<a <<" the power "<< b << " is : "<<pow(a,b);
 }

 #include<iostream>
 using namespace std;
 
 // Make a function which calculates Nth fibonacci numbers using by recursion ::

 /**int fibo(int n){
    if( n==1 || n==2){
      return 1;
    }
    return fibo(n-1) + fibo(n-2);
  }
  int main(){
      int n ;
      cout<<"enter n :";
      cin>>n;
      
      cout<<"Fibonacci of  "<< n << " is : "<< fibo(n);
 }*/

 