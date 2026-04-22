#include <bits/stdc++.h>
using namespace std;

void optimize()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int balance = 0;
        bool ok = false;

        for (int i = 0; i < (int)s.size() - 1; i++)
        {
            if (s[i] == '(') balance++;
            else balance--;

            if (balance == 0)
            {
                ok = true;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}