#include<iostream>
using namespace std;

/**void usa(){
    cout<<"i am from USA"<<endl;
    return;
}
void india(){
    cout<<"i am from India "<<endl;
    usa();

}
int main(){
cout<<"you are in main"<<endl;
india();
}*/

// sum of two numbers ::

/**void sumOfNum (int a,int b )
{
 
int sum;
sum = a + b ;
cout<<sum;
return;
}
int main(){
    int a;
   cout<<"enter a :";
   cin>>a;
   int b;
   cout<<"enter b :";
   cin>>b;
   
sumOfNum(a,b);
} */ 

//sum with return types ::

int sumOfNum (int a,int b )
{
  int sum;
sum = a + b ;

return sum;
}
int main(){
    int a;
   cout<<"enter a :";
   cin>>a;
   int b;
   cout<<"enter b :";
   cin>>b;
   cout<<sumOfNum(a,b);
}