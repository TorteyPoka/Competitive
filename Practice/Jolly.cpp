#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int a[3100];
    int b[3100];
    int n, test, i;
    while (cin>>n)
    {
        test = 1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            b[i] = abs(a[i] - a[i+1]);
            sort(b, b+i);
            cout << b[i] << endl;
        }

        for(i=1;i<n;i++)
      {
        if(b[i] != i)
        {
            test = 0;
            break;
        }
      }
     if(test == 0)
     {
        cout << "Not Jolly\n";
     }
     else
     {
        cout << "Jolly";
     }
    }
    return 0;
}