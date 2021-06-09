
#include <iostream>
#include <math.h>
using namespace std;  
int main()  
{  
int n,r,sum=0,temp,power=0;    
cout<<"Enter the Number=  ";    
cin>>n;    
temp=n;
while(n!=0){
    power = power+1;
    n=n/10;
}
n=temp;
while(n>0)    
{    
r=n%10;    
sum=sum+pow(r,power);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;   
return 0;  
} 