/*#include<iostream> 
using namespace std; 
int main() 
{ 
int a=10; 

 float b = 5.2; 

 float result = a + b; 
  cout << "result:" << result << endl; 
   return 0;
} */



//explicit


#include<iostream> 
using namespace std; 
class employee 
{ 
int salary; 
public : 
void setsalary(int sal) 
{ 
salary=sal;
} 
int getsalary() 
{ 
return salary;
} 
}; 

int main()  
{ 
employee p; 
int sal; 
cout << "Enter salary: "; 
cin >> sal; 
p.setsalary(sal);   
cout << "The salary is: " << p.getsalary() << endl;   
return 0; 
} 
