// This code is given by - kiran_abc02 aka bentonite_02

#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <deque>
#include <functional>
#include <limits>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

#define ll long long int
#define ull unsigned long long
#define ld long double
#define god 1000000007

#define gcd(a, b) __gcd((a), (b))
#define F first
#define S second
#define endl '\n'

#define vec vector<long long int>
#define map map<ll, ll>
#define smap map<string, ll>
#define umap unordered_map<ll, ll>
#define sumap unordered_map<string, ll>

#define input(v)      \
    for (auto &x : v) \
    {                 \
        cin >> x;     \
    }
#define repn(i, n) for (ll i = 0; i < n; i++)        // Loop from 1 to n
#define rep(i, a, b) for (ll i = a; i < b; i++)      // Loop in a given range
#define rep_rev(i, a, b) for (ll i = a; i >= b; i--) // Reverse for loop
#define access(v) for (auto &x : v)                  // Access elements of container
#define print(a) cout << a << endl;
#define display(v)        \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl;
#define pr pair<ll, ll>
#define sort(v) sort(v.begin(), v.end())                         // Sort a container
#define reverse_sort(v) sort(v.begin(), v.end(), greater<int>()) // Reverse container in sorted order

#define maxim(v) *max_element(v.begin(), v.end())
#define minim(v) *min_element(v.begin(), v.end())
#define sumof(v) accumulate(v.begin(), v.end(), 0) // Calculate sum of elements in a container
#define count(v, n) count(v.begin(), v.end())      // Count no of elements of a container
#define reverse(v) reverse(v.begin(), v.end())     // Reverse a container

#define lcm(a, b) a / gcd(a, b) * b
#define square(x) x *x
#define cube(x) x *x *x
#define cBits(x) __builtin_popcount(x) // Count Set Bits

using namespace std;

// Code begins here-->

void solve()
{
    ll n;
    cin >> n;
    map k;
    vec v(n);
    input(v);

    access(v) // 1--5    2--2    3--1
    {
        k[x]++;
    }
    ll s = 0;
    s += k[4];
    s += k[2] / 2;
    if (k[2] % 2)
    {
        k[2] = 1;
    }
    else
    {
        k[2] = 0;
    }
    if (k[3] >= k[1])
    {
        s += k[3];
        k[1] = 0;
    }
    else
    {
        s += k[3];
        k[1] -= k[3];
        k[3] = 0;
    }
    if (k[2])
    {
        if (k[1] == 1 || k[1] == 2)
        {
            s++;
            k[1] = 0;
        }
        else if (k[1] > 2)
        {
            k[1] -= 2;
            s++;
        }
        else
        {
            s++;
        }
    }
    if (k[1] % 4 == 0)
    {
        s += k[1] / 4;
    }
    else
    {
        s += (k[1] / 4) + 1;
    }
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll _ = 1;
    // cin >> _;
    while (_--)
    {
        solve();
    }

    return 0;
}

// 2 3 4 4 2 1 3 1
// 1 1 2 2 3 3 4 4
