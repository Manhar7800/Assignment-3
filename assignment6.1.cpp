#include<iostream> 
using namespace std; 
class calculate 
{ 
  public : 
  void add(int a,int b) 
  { 
   cout <<"Adition of two number is :"<<a+b; 
  } 
  void sub(int a,int b) 
  { 
   cout <<"Subtraction of two number is :"<<a-b; 
  } 
  void mul(int a,int b) 
  { 
   cout <<"multiplication of two number is :"<<a*b; 
  } 
  void div(int a,int b) 
  { 
   cout <<"divison of two number is :"<<a/b; 
  } 
}; 
 
int main() 
{ 
 int num1,num2,choice; 
 cout <<"Enter the number 1 and 2 :"<<endl; 
 cin>>num1>>num2; 
 calculate c; 
 cout <<"\n1. Addition :"; 
 cout <<"\n2. subtraction :"; 
 cout <<"\n3. multiplication :"; 
 cout <<"\n4. divison :"; 
 
 while(choice!=5) 
 { 
  cout <<"\nEnter the choice :"; 
  cin >> choice; 
 switch(choice) 
 {   
  case 1:   
   c.add(num1,num2); 
  break; 
  
  case 2: 
    c.sub(num1,num2); 
  break;
   
  case 3: 
   c.mul(num1,num2); 
  break;
   
  case 4: 
   c.div(num1,num2); 
  break; 
  case 5:
   
  break;      
} 
} 
}
