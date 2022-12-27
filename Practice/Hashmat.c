#include<stdio.h>
int main()
{
     int a, b;
     
     while (scanf("%d %d", &a, &b) != EOF)
     {
     if(a>b)
     {
        int x = a-b;
        printf("%d", x);
     }
     else
     {
        int y = b-a;
        printf("%d", y);
     }
     }

return 0;
}