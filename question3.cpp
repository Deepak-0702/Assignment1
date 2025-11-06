#include<iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    if(n==0||n==1) return true;

    if(arr[n-2]>=arr[n-1])
    {
        return false;
    }
    return isSorted(arr,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,n))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0; 
}