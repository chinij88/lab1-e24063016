#include<iostream>
using namespace std;
int main()
{
int a;	
cout<<"enter a integer\n";
cin >> a;
if(a==1){return 0;}
while(a!=1){
if (a%2==1){a=3*a+1;cout<<a<<"\t";}
else if (a%2==0){
a=a/2;cout<<a <<"\t";
}
}
}
