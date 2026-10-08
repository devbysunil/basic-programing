#include<iostream>
#include<string>
using namespace std;

int main(){

//use of push_back in string :::
 
 /**  string str = "Mishrilal";
cout<<str<<endl;
str.push_back('p');
cout<<str<<endl;
str.push_back('a');
cout<<str<<endl;*/

// use of pop_back in string ::;
/** string str = "Mishrilal";
cout<<str<<endl;
str.pop_back();
cout<<str<<endl;
str.pop_back();
cout<<str<<endl;*/

// use of append in string ::;
/**  string str = "Mishrilal";
cout<<str<<endl;
str.append(" Patel");
cout<<str<<endl;*/

// use of length in string ::;           // length and size do same work in string so don't confuase 
/** string str = "Mishrilal";
cout<<str<<endl;
cout<<str.length()<<endl;
str.append("Patel");
cout<<str.length()<<endl; */

// use of clear in string ::;

/** string str = "Mishrilal";
cout<<str<<"   "<<str.length()<<endl;
str.clear();
cout<<str<<"   "<<str.length()<<endl;*/ 

// use of plus oprator in string 

 /** string str = " Mishrilal";
cout<<str<<"  "<<str.length()<<endl;
str = str + " Patel";
cout<<str<<"  "<<str.length()<<endl;

str ="Patel" + str;
cout<<str<<"  "<<str.length()<<endl; */


// use of to_string in string ;;

// int x = 24343;
// string str = to_string(x);
// cout<<str<<endl;
// str += "M.L.";
// cout<<str<<endl;

// use of STOI in string ;;

string str = "24343";
int x = stoi(str);
cout<<x<<endl;
cout<<x+3<<endl;


}