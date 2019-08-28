#include<stdio.h>


void main()
{
	int a,c=0,i,n;
	printf("Average of How many No.s do U want : ");
	scanf("%d",n);
	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",i);
		c=c+i;
	}
	a=c/n;
	printf("Average = ",a);
}
	
