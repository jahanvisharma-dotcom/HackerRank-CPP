#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;
int main() 
{
int a[MAX], N,i;
cin>>N;
for(i=1;i<=N;i++)
{
cin>>a[i];
}
for(i=0;i<N;i++)
{
cout<<a[N-i]<<" ";
} 
return 0;
}
