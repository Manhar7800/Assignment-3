#include<iostream>            
using namespace std;          
 
int main() {                  
 
    const int year = 2025;    
 
    int age = 20;             
    float height = 5.9;       
    char initial = 'J';       
 
 
    cout << "Year: " << year << endl; 
    cout << "Age: " << age << endl; 
    cout << "Height: " << height << " feet" << endl; 
    cout << "Initial: " << initial << endl; 
 
     
    int nextYearAge = age + 1; 
    cout << "Age next year: " << nextYearAge << endl; 
    return 0;                
}
