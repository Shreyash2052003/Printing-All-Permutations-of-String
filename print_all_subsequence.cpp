#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i = i + 1)
#define ff first
#define ss second
#define setsBits(x) builtin_popcount()
void printF(int idx, vector<int> &v, int arr[], int n)
{
    if (idx == n)
    {
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
     printF(idx + 1, v, arr, n);
    v.push_back(arr[idx]);
   
    
    
    
    printF(idx + 1, v, arr, n);
   v.pop_back();
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    printF(0, v, arr, n);
}