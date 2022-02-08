#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[n - i - 1])
                count++;
        }
        if ((k - count) < 0)
        {
            cout << "NO";
        }
        else
        {
            if (n % 2 != 0) // checking if the length of string is odd if yess the middle most bit can be flipped (k-count) times
            {
                cout << "Yes";
            }
            else
            {
                if ((k - count) % 2 == 0) // if the (k-count) is even then any bit of even lenghted string can be flipped
                {
                    cout << "Yes";
                }
                else
                {
                    cout << "No";
                }
            }
        }
    }
    return 0;
}