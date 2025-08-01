#include <iostream> 
using namespace std; 
 
    int add(int a, int b) { return a + b; } 
    int subtract(int a, int b) { return a - b; } 
    int multiply(int a, int b) { return a * b; } 
    int divide(int a, int b) {  
    if (b != 0) return a / b; 
    else { 
        cout << "Error: Division by zero!" << endl; 
        return 0; 
    } 
} 
 
int main() { 
    int num1, num2; 
    int choice; 
     
    cout << "Enter two numbers: "; 
    cin >> num1 >> num2; 
 
    cout << "Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4.Divide\n"; 
    cin >> choice; 
 
    switch(choice) { 
        case 1:  
       cout << "Result: " << add(num1, num2);  
  break; 
         
        case 2:  
        cout << "Result: " << subtract(num1, num2);  
  break; 
        case 3:   
       cout << "Result: " << multiply(num1, num2);  
  break; 
        case 4:   
      cout << "Result: " << divide(num1, num2);  
  break; 
        default: cout << "Invalid choice!"; 
    } 
 
    return 0; 
} 
 

