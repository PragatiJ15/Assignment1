#include <iostream>
#include <string>
using namespace std;

class member{
 
  char name[20], address[40];
   double number;
   int age;
   
   public:
    int salary;
    void input()
    {
     cout<<endl;
     cout<<"Name : "<<endl;
     cin.getline(name, 20);
     cout<<"Age : "<<endl;
     cin>>age;
     cout<<"Phone Number : "<<endl;
     cin>>number;
     cout<<"Address : "<<endl;
     cin.getline(address, 40);
     cout<<"Salary : "<<endl;
     cin>>salary;
     
 }
 void display()
    {
     cout<<endl;
     cout<<"Name : "<<name<<endl;
     cout<<"Age : "<<age<<endl;
     cout<<"Phone Number : "<<number<<endl;    
     cout<<"Address : "<<address<<endl;    
     cout<<"Salary : "<<salary<<endl;   
     
 }
};

class employee : public member{
  char specialization[20], department[20];
  public:
  void input()
  { 
  cout<<"\n \t Enter Employee Details \t \n";
  member::input();
  cout<<"Specialization : "<<endl;
  cin.getline(specialization, 20);
  cout<<"Department : "<<endl;
  cin.getline(department, 20);
  }
  void display()
  { 
  cout<<"\n \t Displaying Employee Details \t \n";
  member::display();
  cout<<"Specialization : "<<specialization<<endl;
  cout<<"Department : "<<department<<endl;
  }
  void printSalary()
     {
     cout<<"\n Salary of the member is : "<<salary<<endl;
  }
  
};

class manager : public member{
  char specialization[20], department[20];
  public:
   void input()
  { 
  cout<<"\n \t Enter Manager Details \t \n";
  member::input();
  cout<<"Specialization : "<<endl;
  cin.getline(specialization, 20);
  cout<<"Department : "<<endl;
  cin.getline(department, 20);
  }
  void display()
  { 
  cout<<"\n \t Displaying Manager Details \t \n";
  member::display();
  cout<<"Specialization : "<<specialization<<endl;
  cout<<"Department : "<<department<<endl;
  }
  void printSalary()
     {
     cout<<"\n Salary of the member is : "<<salary<<endl;
  }
};
int main()
{
 employee e;
 manager m;
 e.input();
 m.input();
 e.display();
 e.printSalary();
 m.display();
 m.printSalary();
}