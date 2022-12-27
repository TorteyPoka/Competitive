#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool canPair(int ar[], int b)
{
 
    if(((ar[0] + ar[1]) % b==0) && ((ar[2] + ar[3]) % b==0))
    { 
        return true;
    }   
    else
        return false;

}

int main()
{
    int k;
    int arr[4];

    for(int i=0; i<4; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    canPair(arr, k);

 return 0;
}

