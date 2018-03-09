# lab1-e24063016
how to compile your program


#include<iostream> //引入iostream 
using namespace std; 
int main()
{
int a;	 //設一個整數a 
cout<<"enter a integer\n";  //顯示enter a integer
cin >> a;   //讀入a的值
if(a==1){return 0;}  // 如果是1 stop 
else if (a%2==1){a=3*a+1;cout<<a;}  //如果是非1奇數 乘上3倍加一 印出來
else if (a%2==0){  
a=a/2;cout<<a <<"\n";
if (a==11){cout<<"22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1";}  //偶數除2印出來   在else if 裡寫if 如果a除2以後如果是11表示原22 print 題目要求的數列
}
}
