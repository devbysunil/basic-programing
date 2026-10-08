#include<iostream>
using namespace std;
int main(){


    // Hou to print a pattarn;

// int m;
// cout<<"enter a number of rows :";
// cin>>m;
// int n ;
// cout<<"enter a number of colms :";
// cin>>n;
// for(int i=1;i<=m  ;i++){
//     for(int j=1;j<=n ;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// How to print a same row and same colms pattarn ::
        

/** int n ;
cout<<"enter a side of square :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n ;j++){
        cout<<"* ";
    }
    cout<<endl;
}*/   

//How to print a numbers in form of same row and same colms pattarn ::

/**int n ;
cout<<"enter side of square :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n ;j++){
        cout<<j<<" ";
    }
    cout<<endl;
} */

// chack or intresting pattarn;

/**int n ;
cout<<"enter side of square :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n ;j++){
        cout<<i<<" ";
    }
    cout<<endl;
} */

//How to print a ABCD in a pattarn ::
// int n ;
// cout<<"enter side of square :";
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n ;j++){
//          char ch = (char)(j+64);
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// } 

// Chack fo inresting in alphabets ::

/** int n ;
cout<<"enter side of square :";
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n ;j++){
         char ch = (char)(i+64);
        cout<<ch<<" ";
    }
    cout<<endl;
} */

/**Write a program to print number of 1 to 10 in pattern in form of triengle ::

int n ;
   cout<<"enter side of square :";
   cin>>n;
   int a=1 ;
   for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++)
       {
          cout<<a<<" ";
          a++;
    }
       cout<<endl;
       }*/

       //Write a program to print number of 1 & 0 in pattern in form of square ::
 
       /**int n ;
          cout<<"enter side of square:";
          cin>>n;
   
          for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++)
              {
               if((i+j)%2==0){
                   cout<<"1"<<" ";
               }else{
                   cout<<"0"<<" ";
               }
                 }
              cout<<endl;
              }*/

// star triengle pattarn by nested loop ::
/**int n ;
cout<<"enter side of triangle :";
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i ;j++){
      
        cout<<"* " ;
    }
    cout<<endl;
} */    
 
//  number triengle pattarn by nested loop ::

// int n ;
// cout<<"enter side of triangle :";
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i ;j++){
      
//         cout<<j<<" " ;
//     }
//     cout<<endl;
// }


//alphabets triangle pattarn ::

 /**int n ;
cout<<"enter side of triengle :";
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i ;j++){
         char ch = (char)(j+64);
        cout<<ch<<" ";
    }
    cout<<endl;
}*/

// Wait for intrest you can Print a revese Pattarn ::

  /**int n ;
cout<<"enter side of triengle :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i ;j++){
         char ch = (char)(j+64);
    
        cout<<"* ";
        }
    cout<<endl;
    }
    // you can make a every types of reverse triengle same types who i given up ::
*/

//Write a program to print a odd numbers pattarn in triengle ::

/**   int n ;
cout<<"enter side of triengle :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i ;j++)
    {

        cout<<2*j-1<<" ";
 }
    cout<<endl;
    }
   //second mathod of this program ::
   int n ;
   cout<<"enter side of triengle :";
   cin>>n;
   for(int i=1;i<=n;i++){
    int a=1 ;
       for(int j=1;j<=i ;j++)
       {
          cout<<a<<" ";
          a+=2;
    }
       cout<<endl;
       }  */

//Write a program to print number of 1 to 10 in pattern in form of triengle ::

/**int n ;
   cout<<"enter side of triengle :";
   cin>>n;
   int a=1 ;
   for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++)
       {
          cout<<a<<" ";
          a++;
    }
       cout<<endl;
       }*/

// Write a program to print number of 1 & 0 in pattern in form of triengle ::
 
 /**
 
 int n ;
   cout<<"enter side of triengle :";
   cin>>n;

   for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++)
       {
        if((i+j)%2==0){
            cout<<"1"<<" ";
        }else{
            cout<<"0"<<" ";
        }
          
         
    }
       cout<<endl;
       }*/

 //Chack this ::
 
 /**int n ;
 cout<<"enter side of star :";
 cin>>n;

 for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++)
     {
      if( j==n/2+1 ||  i==n/2+1  ){
          cout<<"* ";
        }
     else{
      cout<<"  ";
       }
     }
     cout<<endl;
     }*/


    // Advance Triengle ::

    /**int n ;
    cout<<"enter side of triangle :";
    cin>>n;
    
    for(int i=1;i<=n;i++){  //this loop for a rows;
        for(int j=1;j<=n-i ;j++){  // this loop for a space;
          
            cout<<"  " ;
        }

        for(int j=1;j<=i ;j++){ //this loop for a star ;
          
            cout<<"* ";
        }
        cout<<endl;
    } */
// We can print same of up to any numbers , alphabets etc. :::

// Ptint a pattarn in rombas style with advance triengle;

/**int n ;
    cout<<"enter side of triangle :";
    cin>>n;
    
    for(int i=1;i<=n;i++){  //this loop for a rows;
        for(int j=1;j<=n-i ;j++){  // this loop for a space;
          
            cout<<"  " ;
        }

        for(int j=1;j<=n ;j++){ //this loop for a star ;
          
            cout<<"* ";
        }
        cout<<endl;
    }*/

//  Pascal triangle very intrested :::
int n ;
cout<<"enter side of triangle :";
cin>>n;

for(int i=0;i<=n;i++){
    for(int j=0;j<= n-i;j++){
        cout<<"  ";
    }
    for(int j=0;j<=i ;j++){
      
        cout<<"*"<<"   " ;
    }
    cout<<endl;
} 

}
    


    
   