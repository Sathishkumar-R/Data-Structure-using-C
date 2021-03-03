#include<stdio.h>
int main()
{
int c, first, last, middle, n, f=0, search, array[100];
printf("\n\n\n Binary Search using Array \n\n\n");
printf("Enter number of elements:\t");
scanf("%d",&n);
printf("Enter %d integers\n", n);
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
}
printf("Enter value to find:\t");
scanf("%d",&search);
first = 0;
last = n - 1;
while( first <= last )
{
middle = (first+last)/2;
if ( search < array[middle] )
{
last = middle - 1;
}
else if( search > array[middle] )
{
first= middle + 1;
}
else
{
printf("%d found at location %d.\n", search,
middle+1);
f=1;
break;
}
}
if ( f==0 )
{
printf("Not found! %d is not present in the list.\n", search);
}
}
