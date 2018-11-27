#include<stdio.h>

int merge(int array[],int s,int m,int e)
{
    int len1=m-s+1;
    int len2=e-m;
    int L[len1],R[len2];
    for(int i=0;i<len1;i++)
    {
        L[i]=array[s+i];
    }
    for(int j=0;j<len2;j++)
    {
        R[j]=array[m+1+j];
    }

    int i=0,j=0,k=s;


    while(i<len1 && j<len2)
    {
	    if(L[i]<R[j])
	    {
	        array[k]=L[i];
	        i++;
	        k++;
	    }
	    else
	    {
	        array[k]=R[j];
        	j++;
	        k++;
	    }
    }
	while(i<len1)
	{
	    array[k]=L[i];
	    k++;
	    i++;
	}
	while(j<len2)
	 {
	    array[k]=R[j];
    	k++;
	    j++;
	 }	 

}
 

void mergeSort(int array[],int s,int e)
{
	if(s<e)
	{
	    int mid=(s+e)/2;
   	    //printf("%d--",mid);
        mergeSort(array,s,mid);
         mergeSort(array,mid+1,e);
        merge(array,s,mid,e);
    }   
}

void printArray(int array[],int len)
{

for(int i=0;i<len;i++)
{
    printf("%d\t",array[i]);
}
printf("\n");
}



int main()
{
    int array[]={38,27,43,3,9,82,10};
    int len;
    len=sizeof(array)/sizeof(array[0]);
    //printf("%d--\n",len);
    printArray(array,len);

    mergeSort(array,0,len-1);
    printArray(array,len);
}
