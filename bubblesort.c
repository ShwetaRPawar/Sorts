#include<stdio.h>
int main()
{
	int i=0,j=0,n=0,a[10],temp=0;
	printf("\nnum:");
	scanf("%d",&n);
	printf("\nnumbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
for(i=0;i<n;i++)
{
printf("\n%d\t",a[i]);
}
return 0;
}
