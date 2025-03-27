#include <stdio.h>
void main()
{
int A[20],n,i,pos=-1,key;
printf("Enter the size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the numbers: ");
scanf("%d",&A[i]);
}
printf("Enter the number to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(A[i]==key)
{
pos=i;
break;
}
}
if(pos==-1)
{
printf("Element not found");
}
else
{
printf("Element found at index %d",pos);
}
}
