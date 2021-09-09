#include <bits/stdc++.h>
#include <boost/multi_array.hpp>
#include <boost/optional.hpp>
#include <boost/range/irange.hpp>
#include <boost/range/algorithm.hpp>
#include <boost/range/adaptors.hpp>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
// clang-format off
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
template <typename T> inline bool chmin(T& a, const T& b) { bool compare = a > b; if (a > b) a = b; return compare; }
template <typename T> inline bool chmax(T& a, const T& b) { bool compare = a < b; if (a < b) a = b; return compare; }
// clang-format on

void logic()
{ // write your code here

    string s, t;
    cin >> s >> t;
    YesNo(s < t);
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    logic();
    return 0;
}
