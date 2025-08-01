#include<iostream> 
using namespace std; 
int main() 
{ 
 int num1,num2,choice; 
 cout << "Enter the number = "; 
 cin >> num1; 
 cout <<"Enter the number = "; 
 cin >> num2; 
  
  
 bool temp=true; 
 while(temp) 
 { 
  cout << "\n1.Addition"; 
     cout << "\n2.subtrction"; 
     cout << "\n3.divison"; 
     cout << "\n4.multiplcation"; 
     cout << "\n5.exit"; 
     cout << "\nEnter your choice :"; 
	 cin >> choice; 
  switch(choice) 
 { 
  case 1: 
   cout << num1 + num2; 
  break; 
   
  case 2: 
       cout << num1 - num2; 
  break; 
   
  case 3: 
      cout << num1 / num2; 
  break; 
   
  case 4: 
      cout << num1 * num2; 
  break; 
   
  case 5: 
   temp=false; 
  break;           
 } 
 } 
  
} 
 

