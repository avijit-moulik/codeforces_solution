#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int k, l, m, n, d, c;
    cin >> k >> l >> m >> n >> d;
    if (d >= k && d >= l && d >= m && d >= n)
    {
        for (int i = 1; i <= d; i++)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                c++;
            }
        }
    }

    cout << c;
}
