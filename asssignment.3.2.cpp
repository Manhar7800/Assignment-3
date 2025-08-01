 #include<iostream>  
using namespace std;  
int main(){  
 int num=47;  
 int guess;  
 int count=10;  
   
 while(count!=0){  
    
  cout<<"Total Remaining Attempt= "<<count<<endl;  
  cout<<"Guess the number between 1 To 100 =";  
     cin>>guess;  
     cout<<endl;  
   
  if(guess==47){  
   cout<<"You Guess  Correct number"<<endl;  
   break;  
  
  }  
  else if(guess>47){  
cout<<"You Guess To high number"<<endl;  
}  
else{  
cout<<"You  Guess To low Number"<<endl;  
}  
count--;  
}  
return 0;  
}



