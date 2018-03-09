#include<iostream>
using namespace std;
int main()
{
int a;	
cout<<"enter a integer\n";
cin >> a;
if(a==1){return 0;}
else if (a%2==1){a=3*a+1;cout<<a;}
else if (a%2==0){
a=a/2;cout<<a <<"\n";
if (a==11){cout<<"22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1";}
}
}
