#include<iostream>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    string s;
    

    while(n--)
    {
        cin>>s;
        if(s=="X++")
        {
            x++;
        }
        else if(s=="++X")
        {
            ++x;
        }
        else if(s=="X--"){
            x--;
        }
        else{
            --x;
        }
    }
    printf("%d", x);


    return 0;
}