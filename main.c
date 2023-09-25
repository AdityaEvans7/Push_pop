#include<stdio.h>
 
#define size 5 
 
int top=-1,stack[size ];
void push();
void pop();
void display();
 
void main()
{
int ch;
while(1) 
{
printf("\nPush\nPop\nDisplay\nExit");
printf("\n\nEnter your Element(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Element");
}
}
}
 
void push()
{
int x;
if(top==size-1)
{
printf("\nStack is full");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&x);
top=top+1;
stack[top]=x;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is empty");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
 
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}