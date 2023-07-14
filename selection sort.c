#include<stdio.h>
int main()
{
    int arr[8]={9,8,7,6,5,4,3,2};
    int n=8;
    int i,j,min,swap;
    printf("Sorted array are:\n");
    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]< arr[min])
                min=j;
        }
        if(min!=i)
        {
           swap=arr[i];
           arr[i]=arr[min];
           arr[min]=swap;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
