#include<stdio.h>
void main()
{
	int c=0,i,m;
	float a,n;
	printf("Average of How many No.s do U want : ");
	scanf("%f",&n);
	printf("Enter %.0f Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		c=c+m;
	}
	a=c/n;
	printf("Average = %.2f",a);
}
	
