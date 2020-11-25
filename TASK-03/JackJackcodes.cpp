#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()  
{
    int N,M,flag=0;
    cin>>N;
    int a[N];
    cin>>M;
    for(int i=0;i<=N-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=N-1;i++)
    {
        for(int j=i+1;j<=N-1;j++)
        {
            if(flag==1)
                break;
            if(a[i]+a[j]==M)
            {
                cout<<"True";
                flag=1;
                break;
            }
        }
    }
    if(flag!=1)
        cout<<"False"<<endl;   
    return 0;
}
