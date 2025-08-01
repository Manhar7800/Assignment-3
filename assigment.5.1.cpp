#include<iostream>  
using namespace std;  
int main(){  
int size,i,sum=0;  

   float average;  
   cout<<"Enter the size of array= ";  
   cin>>size;
     
   int array[size];  
   for(i=0;i<size;i++){  
   cout<<"Enter the element in array["<<i<<"] is = ";  
   cin>>array[i];  
}  
   for(i=0;i<size;i++){  
   cout<<"Array a["<<i<<"] is = "<<array[i]<<endl;  
   sum=sum+array[i];  
}  
  cout<<"Sum of array element is= "<<sum<<endl;  
  cout<<"Average of Array Ellement is = "<<sum/size;  
  return 0;  
}
