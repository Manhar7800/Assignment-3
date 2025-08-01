#include<iostream> 
using namespace std; 
int main() 
{ 
int num,i; 
cout << "Enter the number display in multiple table:"; 
cin >>num; 
cout << "\n multiplication Table of" << num <<":\n"; 
  
 for(i=1;i<=10;i++) 
 { 
  cout << num <<" x " << i << " = " << num * i << endl; 
   
 } 
 return 0; 
}
