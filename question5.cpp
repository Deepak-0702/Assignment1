#include<iostream>
using namespace std;
int CountZeros(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<10)
    {
        return 0;
    }
    int digit=n%10;
    if(digit==0)
    {
        return 1+CountZeros(n/10);
    }
    else{
        return CountZeros(n/10);
    }
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the no. of zeros in given number:"<<CountZeros(n)<<endl;
    return 0;
}