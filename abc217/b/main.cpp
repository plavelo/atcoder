#include <bits/stdc++.h>
#include <boost/multi_array.hpp>
#include <boost/optional.hpp>
#include <boost/range/irange.hpp>
#include <boost/range/algorithm.hpp>
#include <boost/range/adaptors.hpp>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
namespace adaptor = boost::adaptors;
// clang-format off
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
template <typename T> inline vector<T> getlines() {vector<string> v;string s; while(getline(cin,s)){v.push_back(s);}return v;}
template <typename T> inline bool chmin(T& a, const T& b) {bool compare=a>b;if(a>b)a=b;return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare=a<b;if(a<b)a=b;return compare;}
// clang-format on

void logic()
{
    vector<string> contests = {"ABC"s, "AGC"s, "AHC"s, "ARC"s};
    vector data = getlines<string>();
    sort(data.begin(), data.end());
    for (const auto &c : contests | adaptor::indexed())
    {
        if (c.value() != data[c.index()])
        {
            cout << c.value() << endl;
            break;
        }
    }
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    logic();
    return 0;
}
