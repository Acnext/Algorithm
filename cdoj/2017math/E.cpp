#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
LL ans=1;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)ans*=i;
    ans*=ans*n;
    printf("%lld",ans);
    return 0;
}
