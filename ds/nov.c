// Reverse the elements of an Array. 
#include<stdio.h>
void main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("BEFORE SWAPPING\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;

    }
    printf("AFTER SWAPPING\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");


}
// Matrix rotation clockwise  at 90 degrees
