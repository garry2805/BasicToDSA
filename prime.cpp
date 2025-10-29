#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            cout<<"It's not a prime number";
            break;
        }
        else{
            cout<<"Its a prime number";
            break;
        }
    }
    return 0;
}