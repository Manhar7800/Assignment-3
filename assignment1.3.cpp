/*#include<stdio.h> 
int main() 
{ 
int length,width,Area; 
printf("\n Enter the length = "); 
scanf("%d",&length);
 
printf("\n Enter the width = "); 
scanf("%d",&width); 

Area = length * width; 
printf("\n length is = %d",length); 
printf("\n width is = %d",width); 

printf("\n Rectangle of Area = %d",Area); 
return 0; 
}*/


#include<iostream>
using namespace std;

int main() 
{ 
    int length, width, Area; 
 
    cout << "Enter the length: "; 
    cin >> length; 
 
    cout << "Enter the width: "; 
    cin >> width; 
     
    cout << "Enter the Area: "; 
    Area = length * width; 
 
    cout << "Length = " << length << endl; 
    cout << "Width = " << width << endl; 
    cout << "Area = " << Area;  
     
 
    return 0; 
}
