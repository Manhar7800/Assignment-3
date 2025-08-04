#include<iostream>
using namespace std;

class Person
{
	public:
	int age;
	string name;
	string address;
			
	void getdetails()
	{
	cout<<"Enter a name: ";
	cin>>name;
    cout<<"Enter a age: ";
	cin>>age;
    cout<<"Enter the address: ";
    cin>>address;	
	}
};

class Student : public Person
{
	private:
		
	int roll_no;
	public:
	void display()
	{
    cout<<"Enter the roll no: ";
	cin>>roll_no;
				
	cout<<"\n";
	cout<<"Student name: "<<name<<endl;
	cout<<"Student age: "<<age<<endl;
	cout<<"student address: "<<address<<endl;
	cout<<"student roll NO: "<<roll_no<<endl;
	}	
};

class Teacher : public Person
{
	private:
		
	string depart;
	public:
	void display()
{
	cout<<"Enter a Department : ";
	cin>>depart;
				
	cout<<"\n";
	
	cout<<"Teacher name: "<<name<<endl;
	cout<<"Teacher age: "<<age<<endl;
	cout<<"Teacher address: "<<address<<endl;
	cout<<"Techer Department: "<<depart<<endl;
	}	
};

int main()
{
	
	Student s;
	s.getdetails();
	s.display();
	
	cout<<"\n";	
	Teacher p;
	p.getdetails();
	p.display();
}
