#include <iostream>
using namespace std;
int main()
{
 int i,j,k,n;
 cout<<"enter the number of lines ";
 cin>>n;
 int x=n;
for(k=1;k<=n;k++){
 for(i=x;i>1;i--)
 {
 cout<<"   ";
 }
 for(j=n-x;j>=0;j--)
 {
 cout<<"  *";
 }
 cout<<"\n";
 x--;
}
}