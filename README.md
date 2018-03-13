# lab1-e24063016
how to compile your program


#include<iostream>   //引入 iostream
using namespace std;
int main()  //main function
{
int a;
cout<<"enter a integer\n";  //讓人輸入一個數字
cin >> a;   //讀取輸入數字
if(a==1){return 0;}  //要是a=1 程式結束
while(a!=1){   //當a 不等於1進入 while迴圈
if (a%2==1){a=3*a+1;cout<<a<<"\t";}  //a奇數時 乘上3倍加1  偶數時 除二  print 1個數列出來
else if (a%2==0){
a=a/2;cout<<a <<"\t";
}
}
}
~
