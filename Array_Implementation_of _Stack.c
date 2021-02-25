#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push();
void pop();
void display();
int s[SIZE],top=-1,i,item;
int main()
{
int ch;
printf("\n\n\n$$$ STACK IMPLEMENTATION USING ARRAY$$$\n\n\n");
while(1)
{
printf("STACK OPERATIONS ARE\n");
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:exit(0);
default:printf("Enter the correct option\n");
break;
}
}
}
void push()
{
if(top==SIZE-1)
{
printf("Stack is full or overflow\n");
}
else
{
printf("Enter the element to be pushed:\t");
scanf("%d",&item);
top=top+1;
s[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("Stack is empty or underflow\n");
}
else
{
printf("The deleted element is: %d",s[top]);
top=top-1;
}
}
void display()
{
if(top==-1)
{
printf("Stack is empty or underflow\n");
}
else
{
printf("Content of the stack is:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",s[i]);
}
}
}
