#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void enqueue();
void dequeue();
void display();
int q[SIZE],i,item,front=-1,rear=-1;
int main()
{
int ch;
printf("\n\n\n$$$ QUEUE IMPLEMENTATION USING ARRAY$$$\n\n\n");
while(1)
{
printf("QUEUE OPERATIONS ARE\n");
printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();break;
case 2:dequeue();break;
case 3:display();break;
case 4:exit(0);
default:printf("Enter the correct option\n");
break;
}
}
}
void enqueue()
{
if(rear==SIZE-1)
{
printf("Queue is full or overflow\n");
}
else
{
if(front==-1)
{
front=0;
}
printf("Enter the element to be enqueued:\t");
scanf("%d",&item);
rear=rear+1;
q[rear]=item;
}
}
void dequeue()
{
if(front==-1 || front>rear)
{
printf("Queue is empty or underflow\n");
}
else
{
printf("The deleted element is: %d",q[front]);
front=front+1;
}
}
void display()
{
if(front==-1 || front>rear)
{
printf("Queue is empty or underflow\n");
}
else
{
printf("Content of the queue is:\n");
for(i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
}
