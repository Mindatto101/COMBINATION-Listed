//Coding or to be Coded !
#include <bits/stdc++.h>

using namespace std;
int a[1001];
void out(int k, int a[])   // Output function
{
    cout << "{";
    for (int i = 1; i <= k; i++)
    {
        if (i == k)
        {
            cout << a[k];
            break;
        }
        cout << a[i] << ",";
    }
    cout << "}";
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    out(k,a);       // First
    cout << endl;
    while (a[1] != (n-k+1))
    {
        for (int i = k; i >= 1; i--)
        {
            if (a[i] < (n-k+i))
            {
                a[i] = a[i] + 1;
                for (int j = i+1; j <= k; j++)
                {
                    a[j] = a[j-1]+1;
                }
                out(k,a);
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
