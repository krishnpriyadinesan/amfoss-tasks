#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,temp=0,x;
    cin>>n;
    temp=n/2;
    x=(n/2)+1;

    for (int i=1;i<=temp;i++) 
    {
    for (int j=1;j<=n;j++) 
    {
        if (j==x) 
        {
            for (int k=1;k<=2*i-1;k++) 
            {
                cout<<"D";
            }
            x--;
            j=x+2*i-1;
        }
        else 
        {
                cout<<"*";
        }
    }
        cout<<"\n";
    }

    for (int i=1;i<=n;i++) 
    {
        cout<<"D";
    }

    cout<<"\n";
    temp=n/2;
    x=2;

    for(int i=temp;i>=1;i--) 
    {
        for (int j=1;j<=n;j++) 
        {
            if (j==x) 
            {
                for (int k=1;k<=2*i-1;k++) 
                {
                    cout<<"D";
                }
                j=x+2*i-2;
            }
            else 
            {
                cout<<"*";
            }
        }

        x++;
        cout<<"\n";
    }

    return 0;
}
