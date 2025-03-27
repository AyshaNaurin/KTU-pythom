#include <stdio.h>
int main()
{
int A[20],n,i,large;
printf("Enter the size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number: ");
scanf("%d",&A[i]);
}
large = A[0];
for(i=0;i<n;i++)
{
if(large<A[i])
{
large=A[i];
}
}
printf("largest=%d",large);

}
