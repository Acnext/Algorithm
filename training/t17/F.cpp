#include <bits/stdc++.h>
using namespace std;
int t,n,a[1000000],dp[10000000];
int LIS(int* w)
{
    int j;//jΪ��ǰ�������������
    dp[j=1] = w[1];
    for(int i = 2;i <= n;i++)
    {
        if(w[i] < dp[j])
            dp[++j] = w[i];
        else if(w[i] == dp[j]) continue;
        else {
            for(int k = j;k >= 1;k--)
            {
                if(k == 1)
                    dp[1] = w[i]>dp[1]?w[i]:dp[1];
                //�ҵ����С����ʡ���λ��
                if(w[i]>dp[k] && w[i]<dp[k-1])
                    dp[k] = w[i];
            }
        }
    }
    return j;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        cout<<LIS(a)<<endl;
    }
}
