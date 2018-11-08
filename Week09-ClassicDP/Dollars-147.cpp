#include <bits/stdc++.h>
using namespace std;

int coins[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

const int SIZE = 30000;
long long possible[SIZE];

int main()
{
    possible[0] = 1;

    for (int i = 0; i < 11; ++i)
    {
        int end = SIZE - coins[i];
        for (int j = 0; j < end; ++j)
        {
            possible[j + coins[i]] += possible[j];
        }
    }

    double num;

    while (scanf("%lf", &num), num > 0.0000001)
    {
        printf("%6.2f%17lld\n", num, possible[static_cast<int>(num * 100 + 0.5)]);
    }
}
