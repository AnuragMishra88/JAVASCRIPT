//SELECTION SORT
#include<stdio.h>
void selectionsort(int arr[100],int n){
    int a=-1;
    for(int i=0;i<n-1;i++){
        a=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[a])
            a=j;}
        if (a!=i){
            int t=arr[i];
            arr[i]=arr[a];
            arr[a]=t;}
    }

}
void main(){
    int arr[100];
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    selectionsort(arr,n);
    printf("ELEMENTS AFTER SELECTION SORT:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    printf("\n#####################\nANURAG MISHRA\n2300320130056\nIT A\n");
}





// INSERTION SORT
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int N) {
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;}
        arr[j + 1] = key;}
}
int main() {
    int arr[100];
    int num;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);}
    insertionSort(arr, num);

    printf("Sorted array: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n#####################\nANURAG MISHRA\n2300320130056\nIT A\n");
    return 0;}


//BUBBLE SORT
 #include <stdio.h>
 void bubble(int arr[100],int n){
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;}
        }}
 }
 int main() {
    int arr[100];
    int num;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);}
    bubble(arr,num);
    printf("ELEMENTS AFTER BUBBLE SORT:");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);}
    printf("\n#####################\nANURAG MISHRA\n2300320130056\nIT A\n");
    return 0;
 }


