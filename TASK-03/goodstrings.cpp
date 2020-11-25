#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N,zero=0,one=0;
    char a[100];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        if(a[i]=='1')
            one++;
        else 
            zero++;
    }
    if(one==zero)
        cout<<2;
    else
        cout<<1;
    return 0;
}
