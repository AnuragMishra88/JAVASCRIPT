// [1]  Find the largest number among the three numbers entered by the user.
#include<stdio.h>
void main()
{
    int a;
    int b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("%d is greatest",a);
    }
    else if(b>c&&b>a)
    {
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
}
// [2] Check whether an alphabet entered by the user is a vowel or a consonant.
#include<stdio.h>
void main()
{
    char a;
    printf("enter an alphabet");
    scanf("%c",&a);
    if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("vowel");

    }
else{
    printf("consonant");
}    
    
}
// [3] Check whether the year entered by the user is a leap year or not.
#include<stdio.h>
void main()
{
    int year;
    printf("enter year;\n");
    scanf("%d",&year);
    if(year%400==0)
    printf("leap year");
    else if(year%100==0)
    printf("not a leap year");
    else if(year%4==0)
    printf("leap year");
}
// [4] Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter side 1");
    scanf("%d",&a);
    printf("enter side 2");
    scanf("%d",&b);
    printf("enter side 3");
    scanf("%d",&c);
    if(a==b && b==c && a==c)
    printf("equilateral");
    else if(a==b || b==c || c==a)
    printf("ISOSCELES");
    else{
        printf("scalene");
    }

}
/* [5] "Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot"*/
#include<stdio.h>
void main()
{
    int temp;
    printf("enter temperature\n");
    scanf("%d",&temp);
    if(temp<0)
    printf("Freezing weather");
    else if(temp<10)
    printf("Very Cold weather");
    else if(temp<20)
    printf("Cold weather");
    else if(temp<30)
    printf("Normal in Temp");
    else if(temp<40)
    printf("Its Hot");
    else if(temp>=40)
    printf("Its Very Hot");
    else
    printf("inavlid input");
}
// MERGING TWO SORTED ARRAY
#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,6},arr2[]={22,45,78,99},i=0,j=0,k=0,c[10];
    while(i<=6 && j<=4)
    {
        if(arr1[i]<=arr2[j])
        {
            c[k]=arr1[i];
            i++;
            k++;
        }
        else{
            c[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<=6)
    {
        c[k]=arr1[i];
        k++;
        i++;

    }
    while(j<=4)
    {
        c[k]=arr2[j];
        k++;
        j++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
// UNION OF TWO ARRAYS
#include<stdio.h>
int main()
{
    int arr1[]={1,2,22,4,5,6},arr2[]={22,45,78,99},i=0,j=0,k=0,c[10];
    while(i<=6 && j<=4)
    {
        if(arr1[i]<arr2[j])
        {
            c[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]==arr2[j]){
            c[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        else{
            c[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<=6)
    {
        c[k]=arr1[i];
        k++;
        i++;

    }
    while(j<=4)
    {
        c[k]=arr2[j];
        k++;
        j++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
// INTERSECTION
#include<stdio.h>
int main()
{
    int arr1[]={1,22,3,4,5,6},arr2[]={22,45,78,99},i=0,j=0,k=0,c[1];
    while(i<=6 && j<=4)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]==arr2[j]){
                c[k]=arr2[j];
                j++;
                k++;
                i++;}
        else{
            j++;
        }
        }
    
    for(int i=0;i<1;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}




