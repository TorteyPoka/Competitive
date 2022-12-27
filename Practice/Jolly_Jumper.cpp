#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

int n;
int ar[3100], arr[3100];


bool jolly()
{
    for(int i = 0; i<n-1;i++)
        arr[i] = abs(ar[i+1] - ar[i]);
    sort(arr, arr + n-1);
    for(int i=0; i < n-1; i++)
        if (arr[i] != i+1)
        {
            printf("Not Jolly\n");
            return false;
        }
    printf("Jolly\n");
    return true;
}
int main()
{
    printf("Enter the size: ");
    while (scanf("%d", &n) == 1)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &ar[i]);
        jolly();
    }
}



// int n, i, newNum[100];

    // printf("Enter the size: ");
    // scanf("%d", &n);

    // int  num[n];

    // printf("Enter elements: ");
    // for(i=0; i<n; i++)
    // {
    //     scanf("%d", &num[i]);
    //     newNum[i] = num[i] - num[i+1];
    // }
    
    // for(i=0; i<n; i++)

    //  {
    //     printf("%d ", newNum[i]);
    //  }
