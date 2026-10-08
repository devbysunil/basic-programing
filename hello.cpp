#include<iostream>
using namespace std;
int main(){  

// int l;
// cout<<"enter l :";
// cin>>l;
// int b;
// cout<<"enter b :";
// cin>>b;
// int a = l*b;
// int p = 2*(l+b);
// cout<<a;cout<<"\n";
// cout<<p;cout<<"\n";
// if(a>p){
//     cout << "its possible";
// }
// else{
//  cout<< "its not";
// }
// int r,s,a;
// cout<<"enter age of ram:";
// cin>>r;

// cout<<"enter age of shyaam :";
// cin>>s;

// cout<<"enter age of ajay :";
// cin>>a;
// if(r<s){
//     if(r<a){
//         cout<< r ;cout<<" \n Ramesh is yougest";
//     }
//     else{
//         cout<< a ;cout<<" \n ajay is yougest";
//     }
// }
// else{
//     if(s<a){
//         cout<< s;cout<<" \n Shyaam is yougest";
//     }
//     else{
//         cout<< a ; cout<<"\n Ajay is youngest";
//      }
// }

//switch statement
/** int n1;
cin>>n1;
char op;
cin>>op;
int n2;
cin>>n2;
switch (op){
case '+':
   cout<<n1+n2;
   break;
case '-':
    cout<<n1-n2;
    break;
case '*':
    cout<<n1*n2;
    break;
case '/':
    cout<<n1/n2;
    break;
case '%':
    cout<<n1%n2;
    break;
}**/

//prime and composite numbers

    /**int n;
 cout<<"enter n :";
cin>>n; 
 bool flag = true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
          flag = false;
            break;
         }
        
    }
    if(n==1){
        cout<<"neather prime nor compsite";
    }
else if(flag == true){
cout<<"prime\n";
}
 else{ cout<<"composite\n";}**/



//  int n;
//  cout<<"enter n :";
// cin>>n;
/**int x= 4,y=0;
while(x>=0){
x--;
y++;
if(x==y){
    continue;
}else{
    cout<<x<<" "<<y<<"\n";
}
}**/

//sum of digits 


/**int n;
 cout<<"enter n :";
cin>>n;

int sum = 0;
while(n!=0){
   int ld = n%10;
   n=n/10;
    sum += ld ;
 
}
cout<<sum;*/

//cuont a product of n numbers

/** int n;
 cout<<"enter n :";
cin>>n;

int product = 1;
while(n!=0){
   int ld = n%10;
   n=n/10;
    product *= ld ;
 
}
 cout<<product;*/ 

//Reverse number of givin number ::
/** int n;
cout<<"enter n :";
cin>>n;

int r = 0;

while(n!=0){
  
  
   int ld = n%10 ;
       r *=10;
       r += ld;
       n /=10;
 
        }
  cout<<r<<endl;*/
    


 // sum of givin number and its  reverse number ::
 /** int n;
 cout<<"enter n :";
cin>>n;

int r = 0;
int sum = 0;
while(n!=0){
   
   
    int ld = n%10 ;
        r *=10;
        r += ld;
        n /=10;
        sum +=ld;
         }
   cout<<r<<endl;
   cout<<sum; */

   //How to count a factorial of givin number
 /**  int n;
   cout<<"enter n :";
  cin>>n;
  int fact = 1;

  for(int i = 1; i<=n;i++){

     fact = fact*i;
    
  }
  cout<<fact; */ 
  
//A TO Z with its asicy value

//   int i = 65;
  
//   while(i<=90){
//     char ch = (char)i; 
// cout<<i<<" "<<ch<<"\n" ;
// i++;}
// int i = 1;
// while(i<=10){
//     cout<<"10010101010101010101010102"<<" ";
//     i += 0;
   
// }


    cout<<"hello world !"<<endl;
  
return 0;
  }

