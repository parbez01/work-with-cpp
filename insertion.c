#include<stdio.h>
int main()
{
    int a[8]={7,6,4,3,5,2,1,8};
    int n=8;
    int i,j,temp;
    printf("Sorted array are:\n\n");
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j] > temp)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=temp;
    }
    for(i=0;i< n;i++)
        printf("%d\n",a[i]);
        return 0;
}
