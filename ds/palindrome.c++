#include<iostream>
using namespace std;
int palindrome(int n)
{
    
    int rev=0;
    int rem;
    int a=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==a)
    cout<<"Palindrome";
    else
    cout<<"Not a Palindrome";
    return 0;

}
int main()
{
    int num;
    cin>>num;
    palindrome(num);
}