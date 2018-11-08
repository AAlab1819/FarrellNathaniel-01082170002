#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        int n, g, max_weight;
        int max_value=0;
        int dp[31]={0};
        
        cin >> n;
        int p[n], w[n];
        
        for(int i = 0; i < n; i++)
        {
            cin >> p[i] >> w[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 30; j >= 0; j--)
            {
                if(w[i] <= j && dp[j] < dp[j-w[i]] + p[i])
                {
                    dp[j] = dp[j - w[i]] + p[i];
                }
            }
        }
        
        cin >> g;
        for(int i = 0; i < g; i++)
        {
            cin >> max_weight;
            max_value += dp[max_weight];
        }
        cout << max_value << endl;
        tc--;
    }
    return 0;
}
