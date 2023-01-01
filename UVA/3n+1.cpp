#include<iostream>

using namespace std;

int main()
{
    int n, a(0), b(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n!=1)
        {
            if(n%2==1)
            {
                int a=n=(3*n)+1;
                cout<<a<<" ";
                a=0;
                continue;
            }
            else 
            {
                b=n=n/2;
                cout<<b<<" ";
                b=0;
                continue;
            }
             
        }
        else break;
    }
    return 0;
}