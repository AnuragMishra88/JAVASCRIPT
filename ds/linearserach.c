// searching element in an array
//LINEAR SEARCH
#include<stdio.h>
void main()
{
    int arr[100];
    int num;
    int n;
    int loc=0;
    printf("enter no. of elements:");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements you want to search:");
    scanf("%d",&n);

    for(int i=0;i<num;i++)
    {
        if(arr[i]==n)
        {
            loc=i;
        }
    }
    if(loc!=0)
    printf("ELEMENT FOUND AT %d",loc+1);
    else
    printf("ELEMENT NOT FOUND");

}
// BINARY SEARCH
#include<stdio.h>
void main(){
    int arr[100];
    int n;
    int num;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int low=0;
    int high=n-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements you want to search:");
    scanf("%d",&num);
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==num)
        {printf("ELEMENT FOUND AT %d",mid+1);
        break;
        }
        else if(arr[mid]<num)
        {
            low=mid+1;
        }
        else if(arr[mid]>num)
        {
            high=mid-1;
        }  
    }
}