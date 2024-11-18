#include<iostream>
using namespace std;
int mean(int arr[100],int n)
{
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+arr[i];
    }
    return sum/n;
}
int median(int arr[100],int n)
{
    if(n%2!=0)
    {
        return arr[(n+1)/2];
    }
    else
    {
        return ((arr[n/2]+arr[(n/2)+1])/2);
    }

}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"Mean is "<< mean(a,n)<<endl;
    cout<<"Median is "<< median(a,n);
}