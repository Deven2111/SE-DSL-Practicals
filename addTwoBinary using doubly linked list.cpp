#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
char flip(char c){return(c=='0')?'1':'0';}
void addTwoBinaryNumbers()
{
long bn1,bn2;
int i=0,r=0;
int sum[20];
cout<<"Additionoftwobinarynumbers:\n";
cout<<"Enterthe1stbinarynumber:";
cin>>bn1;
cout<<"Enterthe2ndbinarynumber:";
cin>>bn2;
while(bn1!=0||bn2!=0)
{
sum[i++]=(int)((bn1%10+bn2%10+r)%2);
r=(int)((bn1%10+bn2%10+r)/2);
bn1=bn1/10;
bn2=bn2/10;
}
if(r!=0){
sum[i++]=r;
}
--i;
cout<<"Thesumoftwobinarynumbersis:";
while(i>=0){
cout<<(sum[i--]);
}
cout<<("\n");
cout<<"\n\n";
}
void printOneAndTwosComplement()
{
string bin;
cout<<"EnterABinaryNumber:"<<endl;
cin>>bin;
int n=bin.length();
int i;
string ones,twos;
ones=twos="";
for(i=0;i<n;i++)
ones+=flip(bin[i]);
twos=ones;
for(i=n-1;i>=0;i--)
{
if(ones[i]=='1')
twos[i]='0';
else
{
twos[i]='1';
break;
}
}
if(i==-1)
twos='1'+twos;
cout<<"1'scomplement:"<<ones<<endl;
cout<<"2'scomplement:"<<twos<<endl;
cout<<"\n\n";
}
int main()
{
int ch;
while(true)
{
cout<<"1.AdditionOfTwoBinaryNumbers.\n";
cout<<"2.OnesAndTwosComplementOfABinaryNumber.\n";
cout<<"3.Exit.\n";
cout<<"EnterYourChoice:"<<endl;
cin>>ch;
switch(ch)
{
case 1:
addTwoBinaryNumbers();
break;
case 2:
printOneAndTwosComplement();
break;
case 3:
exit(0);
default:
cout<<"PleaseEnterAValidInput!";
}
}
return 0;
}
