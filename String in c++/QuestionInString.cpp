#include<iostream>
using namespace std;
int main(){
//  string str = "anil vishwakarma" ;
//  cout<<str.size();
// char ch = '\0';
// cout<<ch;

// Input a string and count all the vowels in the givin string :::
     
 /** string str = "virat kohli is a best cricketer in the world";
cout<<str<<endl;
int count = 0;
int n = str.size();
for(int i = 0;i<n;i++){
    if('i'== str[i] || 'u' == str[i] ||'o'==str[i] ||'e'==str[i] || 'a'==str[i]){
       count++;
    }
}
cout<<count;*/

// Input a string and update all the even posintions in the string to character 'a'. consider 0 - based indexing .

/**  string str = "Viratkohli";
int n = str.size();
for(int i=0;i<n;i++){
    if(i%2==0){
        str[i]='a';
        
    }
    cout<<str[i];
    
}*/

// Return the total number of digit in a number with out using any loops ::;

int x = 24343;
string str = to_string(x);
cout<<str.length()<<endl;

}