#include<stdio.h>
void selectionsort(int arr[100],int n){
    int a=-1;
    for(int i=0;i<n-1;i++)
    {
        a=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[a])
            a=j;
        }
        if (a!=i)
        {
            int t=arr[i];
            arr[i]=arr[a];
            arr[a]=t;
        }
        
    }

}
void main()
{
    int arr[100];
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);

    }

}