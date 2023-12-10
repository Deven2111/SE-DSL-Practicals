#include<iostream>
using namespace std;
class node
{
public:
int prn;
string name;
node *link;
};
class linkedlist
{
public:
node *start;
linkedlist()
{
start=NULL;
}
void insert_President()
{
node *n;
n=new node;
cout<<"\nEnter President PRN to be inserted\n";
cin>>n->prn;
cout<<"\nEnter President Name to be inserted\n";
cin>>n->name;
n->link=NULL;
if(start==NULL)
{
start=n;
}
else
{node *tmp;
tmp=start;
while(tmp->link!=NULL)
{
tmp=tmp->link;
}
tmp->link=n;
}
display();
}
void insert_Secretary()
{
node *n;
n=new node;
cout<<"\nEnter Secretary PRN to be inserted\n";
cin>>n->prn;
cout<<"\nEnter Secretary Name to be inserted\n";
cin>>n->name;
n->link=NULL;
if(start==NULL)
{
start=n;
}
else
{
node *tmp;
tmp=start;
while(tmp->link!=NULL)
{
tmp=tmp->link;
}
tmp->link=n;
}
display();
}
void insert_Member()
{
node *n;
n=new node;
cout<<"\nEnter Member PRN to be inserted\n";
cin>>n->prn;
cout<<"\nEnter Member Name to be inserted\n";
cin>>n->name;
n->link=NULL;
if(start==NULL)
{
start=n;
}
else
{
node *tmp;
tmp=start;
while(tmp->link!=NULL)
{
tmp=tmp->link;
}
tmp->link=n;
}
display();
}
void del_President()
{
if(start==NULL)
{
cout<<"\nLinked List is Empty !!\n";
return;
}
else
{
node *tmp;
tmp=start;
start=start->link;
delete tmp;
}
display();
}
void del_Secretary()
{
if(start==NULL)
{
cout<<"\nLinked List is Empty !!\n";
return;
}
else
{
node *tmp;
tmp=start;
while(tmp->link->link!=NULL)
{
tmp=tmp->link;
}
node *p;
p=tmp->link;
tmp->link=p->link;
delete p;
}
display();
}
void del_Member()
{
if(start==NULL)
{
cout<<"\nLinked List is Empty !!\n";
return;
}
else
{
node *tmp;
tmp=start;
while(tmp->link->link->link!=NULL)
{
tmp=tmp->link;
}
node *p;
p=tmp->link;
tmp->link=p->link;
delete p;
}
display();
}
void display()
{
node *tmp;
tmp=start;
if(start==NULL)
{
cout<<"\nLinked List is Empty !!\n";
return;
}
else
{
cout<<"\nElements of the Linked List are as follows: \n";
while(tmp!=NULL)
{
cout<<tmp->prn<<"\t"<<tmp->name<<"\n";
tmp=tmp->link;
}
}
}
};
int main()
{
linkedlist list;
int ch;
do
{
cout<<"\n\nChoose an option: \n1. Insert President\n2. Insert Secretary\n3. Insert Member\n4. DeletePresident\n5. Delete Secretary\n6. Delete Member\n7. Display Linked List\n8. Exit\n";
cin>>ch;
switch(ch)
{
case 1:
list.insert_President();
break;
case 2:
list.insert_Secretary();
break;
case 3:
list.insert_Member();
break;
case 4:
list.del_President();
break;
case 5:
list.del_Secretary();
break;
case 6:
list.del_Member();
break;
case 7:
list.display();
break;
case 8:
break;
default:
cout<<"\n\nInvalid Input! Please Enter Again...\n";
}
}while(ch!=8);
return 0;
}
