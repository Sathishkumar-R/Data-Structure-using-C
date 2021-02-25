#include<stdio.h>
#include<stdlib.h>
int list[5],i,n=0;
void create();
void insert(int x,int p);
void del(int p);
void display();
int main()
{
int x,p,c;
printf("$$$ LIST ADT USING ARRAY $$$");
while(1)
{
printf("\nThe operations are:");
printf("\n1.CREATE\t2.INSERT\t3.del\t4.DISPLAY\t5.EXIT\n");
printf("Enter your choice:");
scanf("%d",&c);
switch(c)
{
case 1: create();
break;
case 2: printf("Enter the element and position:");
scanf("%d%d",&x,&p);
insert(x,p);
break;
case 3: printf("Enter the position of element to be deleted:");
scanf("%d",&p);
del(p);
break;
case 4: display();
break;
case 5: exit(0);
default: printf("\n Enter valid choice:");
break;
}
}
}
void create()
{
int e,i;
printf("\n Enter the no.of elements");
scanf("%d",&e);
printf("\n Enter the elements");
for(i=0;i<e;i++)
{
scanf("%d",&list[i]);
}
n=e;
}
void insert(int x,int p)
{
if(n==5)
printf("List is full");
else if((p<0)||(p>n))
printf("Position is invalid");
else
{
for(i=n-1;i>=p;i--)
{
list[i+1]=list[i];
}
list[p]=x;
n++;
}
}
void del(int p)
{
if(n==0)
printf("List is empty");
else if((p<0)||(p>n-1))
printf("position is invalid");
else
{
for(i=p;i<n;i++)
{
list[i]=list[i+1];
}
n--;
}
}
void display()
{
int p;
if(n==0)
printf("list is empty");
else
{
printf("The elements present in the list are:\n");
printf("\nElement\tPosition\n\n");
for(p=0;p<n;p++)
{
printf("%d\t%d\n\n",list[p],p);
}
}
}
