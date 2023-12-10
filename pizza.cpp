#include<iostream>
#include<cstdlib>
using namespace std;
class pizza
{
int front,rear,q[5];
public:
pizza()
{
front=-1;
rear=-1;
}
int isfull()
{
if((front==0&&rear==4)||front==rear+1)
{
return 1;
}
else
{
return 0;
}
}
int isempty()
{
if(front==-1&&rear==-1)
{
return 1;
}
else
{
return 0;
}
}
void add()
{
if(isfull()==0)
{
cout<<"\nEnterthePizzaID:";
if(front==-1&&rear==-1)
{
front=0;
rear=0;
cin>>q[rear];
}
else
{
rear=(rear+1)%5;
cin>>q[rear];
}
char c;
cout<<"Do you want to add another order?";
cin>>c;
if(c=='y'||c=='Y')
add();
}
else
{
cout<<"\nOrdersarefull";
}
}
void serve()
{
if(isempty()==0)
{
if(front==rear)
{
cout<<"\nOrderservedis:"<<q[front];
front=-1;
rear=-1;
}
else
{
cout<<"\nOrderservedis:"<<q[front];
front=(front+1)%5;
}
}
else
{
cout<<"\nOrdersareempty";
}
}
void display()
{
if(isempty()==0)
{
for(int
i=front;i!=rear;i=(i+1)%5)
{
cout<<q[i]<<"<-";
}
cout<<q[rear];
}
else
{
cout<<"\nOrdersareempty";
}
}
void check()
{
int ch;
cout<<"\n\n****PIZZAPARLOUR****\n\n";
cout<<"\n1.AddaPizza\n2.DisplaytheOrders\n3.Serveapizza\n4.Exit\nEnteryourchoice:";
cin>>ch;
switch(ch)
{
case 1:
add();
break;
case 2:
display();
break;
case 3:
serve();
break;
case 4:
exit(0);
default:
cout<<"Invalidchoice";
check();
}
char ch1;
cout<<"\nDoyouwanttocontinue?";
cin>>ch1;
if(ch1=='y'||ch1=='Y')
check();
}
};
int main()
{
pizza p1;
p1.check();
return 0;
}
