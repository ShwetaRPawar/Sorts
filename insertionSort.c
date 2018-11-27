#include<stdio.h>

int insertion(int array[],int len)
{
/*    int i,j=1;
    while(j<len)
    {
        i=0;
        while(i<j)
        {
            
            if(array[i]>array[j])
            {
                int temp=array[j];
               // printf("%d..",temp);
                while(j>i)
                {
                    array[j]=array[j-1];
                    j--;

                }
                array[i]=temp;   
            }
        i++;
        }
        j++;
    }
*/

    int i,j;
    for(i=1;i<len;i++)
    {
        int key=array[i];
        j=i-1;

        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
                j--;
        }
        array[j+1]=key;
    }
}
void print(int array[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}



int main()
{
    int array[]={12,4,6,8,1,3,10};
    int len=sizeof(array)/sizeof(array[0]);
    print(array,len);
    insertion(array,len);
    print(array,len);
    return 0;
}
