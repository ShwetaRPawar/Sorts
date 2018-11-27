#include<stdio.h>
#include<stdlib.h>
int binary(int array[],int s,int len,int n)
{
//printf("%d\t%d\n",s,len);
	int mid;
	if(len >= s)
	{
		 mid=(s+len)/2;
		//printf("\n%d\n",mid);

		if(array[mid]==n)
		{
			//printf("%d is found",n);
			return mid;
		}

		if(array[mid]>n)
		{
		return binary(array,0,mid-1,n);
		}
		else
		{		
		return  binary(array,mid+1,len,n);
		}
	}
return -1;
}

int main()
{
	int n=0;
	int array[]={2,5,8,12,16,23,38,56,72,91};
	int len=sizeof(array)/sizeof(array[0]);
	//printf("%d",len);
	printf("num:");
	scanf("%d",&n);
	int r=binary(array,0,len-1,n);
	if(r==-1)
	printf("%d is not found ",n);
	else
	printf("%d is found at %d",n,r);


}
