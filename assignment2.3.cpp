/*#include<iostream> 
#include<string> 
using namespace std; 
class arith 
{ 
public : 
arith(int a,int b) 
{ 
  cout <<"1.addition" << endl; 
  cout <<"2.subtraction" << endl; 
  cout <<"3.multipition" << endl; 
  cout <<"4.divison" << endl; 
   
  int choice; 
  cout <<"Enter the choice ="; 
  cin >> choice; 
  switch(choice) 
  { 
   case 1: 
    cout <<"addition of = "<< a+b; 
   break; 
   case 2: 
    cout <<"subtraction of =" << a-b; 
   break; 
   case 3: 
       cout <<"multipition of =" << a*b; 
   break; 
   case 4: 
       cout <<"divison of =" << a/b; 
   break;    
         
 } 
 } 
 }; 
int main () 
{ 
 arith(14,4); 
 return 0; 
} */


                                 // relation operator


/*#include<iostream> 
using namespace std; 
int main() 
{ 
int a,b; 
    cout << "Enter the first number:"; 
    cin >> a; 
    cout << "Enter the second number:"; 
    cin >> b; 
    cout << "\nResult in relational opreation:\n"; 
    cout <<"a==b:" << (a==b) << endl; 
    cout <<"a!=b:" << (a!=b) << endl; 
    cout <<"a>=b:" << (a>=b) << endl; 
    cout <<"a<=b:" << (a<=b) << endl; 
    cout <<"a<b:" << (a<b) << endl; 
    cout <<"a>b:" << (a>b) << endl; 
    return 0; 
} */

                               //logical operator
                               
                               
/*#include<iostream> 
using namespace std; 
int main() 
{ 
int age; 
int marks; 
 cout << "\nEnter the age:"; 
 cin >> age; 
  
 cout << "\nEnter the mark:"; 
 cin >> marks; 
  
 // logical AND(&&) 
 if(age>18 && marks>50) 
 { 
  cout << "you are eligable!" << endl; 
 } 
 else 
 { 
  cout << "you are not eligable" << endl; 
 } 
  
 // logical OR(||) 
 if(age>18 || marks>50) 
 { 
  cout << "you meet the one condition." << endl; 
 } 
  
 if(!(age>18)) 
 { 
  cout << "you are NOT older than 18:" << endl; 
 } 
 return 0; 
} */



                               // bitwise operator
                               
#include<iostream> 
using namespace std; 
 
void arithmeticOperators(int a, int b) { 
    char op; 
    bool arithLoop = true; 
 
    while (arithLoop) { 
        cout << "\n\n--- Arithmetic Operations ---"; 
        cout << "\n+ : Addition"; 
        cout << "\n- : Subtraction"; 
        cout << "\n* : Multiplication"; 
        cout << "\n/ : Division"; 
        cout << "\nE : Exit to Main Menu"; 
        cout << "\nEnter your operator: "; 
        cin >> op; 
 
        switch (op) { 
        case '+': 
            cout << "Result: " << a + b << "\n"; 
            break; 
        case '-': 
            cout << "Result: " << a - b << "\n"; 
            break; 
        case '*': 
            cout << "Result: " << a * b << "\n"; 
            break; 
        case '/': 
            if (b != 0) 
                cout << "Result: " << float(a) / b << "\n"; 
            else 
                cout << "Error: Division by zero!\n"; 
            break; 
        case 'e': 
        case 'E': 
            arithLoop = false; 
            break; 
        default: 
            cout << "Invalid operator!\n"; 
        } 
    } 
} 
 
    void relationalOperators(int a, int b) { 
    char op; 
    bool relLoop = true; 
 
    while (relLoop) { 
        cout << "\n\n--- Relational Operations ---"; 
        cout << "\na. > (greater than)"; 
        cout << "\nb. < (less than)"; 
        cout << "\nc. >= (greater than or equal)"; 
        cout << "\nd. <= (less than or equal)"; 
        cout << "\ne. == (equal)"; 
        cout << "\nf. != (not equal)"; 
        cout << "\ng. Exit to Main Menu"; 
        cout << "\nEnter your choice: "; 
        cin >> op; 
 
        switch (op) { 
        case 'a': 
            cout << a << " > " << b << " = " << (a > b ? "True" : "False") << "\n"; 
            break; 
        case 'b': 
            cout << a << " < " << b << " = " << (a < b ? "True" : "False") << "\n"; 
            break; 
        case 'c': 
            cout << a << " >= " << b << " = " << (a >= b ? "True" : "False") << "\n"; 
            break; 
        case 'd': 
            cout << a << " <= " << b << " = " << (a <= b ? "True" : "False") << "\n"; 
            break; 
        case 'e': 
            cout << a << " == " << b << " = " << (a == b ? "True" : "False") << "\n"; 
            break; 
        case 'f': 
            cout << a << " != " << b << " = " << (a != b ? "True" : "False") << "\n"; 
            break; 
        case 'g': 
        case 'G': 
            relLoop = false; 
            break; 
        default: 
            cout << "Invalid choice!\n"; 
        } 
    } 
} 
 
    void logicalOperators(int a, int b) { 
    char op; 
    bool logLoop = true; 
 
    while (logLoop) { 
        cout << "\n\n--- Logical Operations ---"; 
        cout << "\na. && (Logical AND)"; 
        cout << "\nb. || (Logical OR)"; 
        cout << "\nc. ! (Logical NOT)"; 
        cout << "\nd. Exit to Main Menu"; 
        cout << "\nEnter your choice: "; 
        cin >> op; 
 
        switch (op) { 
        case 'a': 
            cout << "(" << a << " && " << b << ") = " << (a && b) << "\n"; 
            break; 
        case 'b': 
            cout << "(" << a << " || " << b << ") = " << (a || b) << "\n"; 
            break; 
        case 'c': 
            cout << "!a = " << (!a) << ", !b = " << (!b) << "\n"; 
            break; 
        case 'd': 
        case 'D': 
            logLoop = false; 
            break; 
        default: 
            cout << "Invalid choice!\n"; 
        } 
    } 
} 
 
    void bitwiseOperators(int a, int b) { 
    char op; 
    bool bitLoop = true; 
 
    while (bitLoop) { 
        cout << "\n\n--- Bitwise Operations ---"; 
        cout << "\na. & (AND)"; 
        cout << "\nb. | (OR)"; 
        cout << "\nc. ^ (XOR)"; 
        cout << "\nd. ~ (NOT)"; 
        cout << "\ne. << (Left Shift)"; 
        cout << "\nf. >> (Right Shift)"; 
        cout << "\ng. Exit to Main Menu"; 
        cout << "\nEnter your choice: "; 
        cin >> op; 
 
        switch (op) { 
        case 'a': 
            cout << a << " & " << b << " = " << (a & b) << "\n"; 
            break; 
        case 'b': 
            cout << a << " | " << b << " = " << (a | b) << "\n"; 
            break; 
        case 'c': 
            cout << a << " ^ " << b << " = " << (a ^ b) << "\n"; 
            break; 
        case 'd': 
            cout << "~" << a << " = " << (~a) << ", ~" << b << " = " << (~b) << "\n"; 
            break; 
        case 'e': 
            cout << a << " << 1 = " << (a << 1) << ", " << b << " << 1 = " << (b << 1) << "\n"; 
            break; 
        case 'f': 
            cout << a << " >> 1 = " << (a >> 1) << ", " << b << " >> 1 = " << (b >> 1) << "\n"; 
            break; 
        case 'g': 
        case 'G': 
            bitLoop = false; 
            break; 
        default: 
            cout << "Invalid choice!\n"; 
        } 
    } 
} 
 
int main() { 
    int a, b, ch = 0; 
 
    cout << "Enter number 1 and number 2: "; 
    cin >> a >> b; 
 
    bool mainLoop = true; 
    while (mainLoop) { 
        cout << "\n\n=== Main Menu ==="; 
        cout << "\n1. Arithmetic Operators"; 
        cout << "\n2. Relational Operators"; 
        cout << "\n3. Logical Operators"; 
        cout << "\n4. Bitwise Operators"; 
        cout << "\n5. Exit"; 
        cout << "\nEnter your choice: "; 
        cin >> ch; 
 
        switch (ch) { 
        case 1: 
            arithmeticOperators(a, b); 
            break; 
        case 2: 
            relationalOperators(a, b); 
            break; 
        case 3: 
            logicalOperators(a, b); 
            break; 
        case 4: 
            bitwiseOperators(a, b); 
            break; 
        case 5: 
            cout << "\nExiting program. Goodbye!\n"; 
            mainLoop = false; 
            break; 
        default: 
            cout << "\nInvalid main menu choice!\n"; 
        } 
    } 
 
    return 0; 
} 
 
 
 
                               
                               
                               
 
 
 
 
                               
                               



 
 
 
 
 
 
