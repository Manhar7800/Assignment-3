#include<iostream> 
using namespace std; 
 
int main() 
{ 
 float per; 
 char grade; 
 cout << "\nEnter the percentage ="; 
 cin >> per; 
 cout << "\ngrade is =";  
 if(per>80) 
 { 
  cout << "A"; 
 } 
 else if(per>=35 && per<=80) 
 { 
  cout << "B"; 
 } 
 else 
 { 
  cout << "C"; 
 } 
 return 0; 
} 
  
