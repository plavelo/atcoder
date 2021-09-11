#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <boost/multi_array.hpp>
#include <boost/optional.hpp>
#include <boost/range/adaptors.hpp>
#include <boost/range/algorithm.hpp>
#include <boost/range/irange.hpp>
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
template <typename T> inline T getvalue(){T r;string s;getline(cin, s);istringstream(s)>>r;return r;}
template <typename T> inline vector<T> getvalues(){vector<T> v;T r;string s;getline(cin,s);istringstream iss(s);while(iss>>r){v.push_back(r);}return v;}
template <typename T, typename S> inline tuple<T,S> getpair(){T r1;S r2;string s;getline(cin,s);istringstream iss(s);iss>>r1>>r2;return {r1,r2};}
template <typename T> inline string join(vector<T>& v,string d){stringstream s;copy(v.begin(),v.end(),ostream_iterator<T>(s,d.c_str()));return s.str();}
template <typename T> inline bool chmin(T& a, const T& b){bool compare=a>b;if(a>b)a=b;return compare;}
template <typename T> inline bool chmax(T& a, const T& b){bool compare=a<b;if(a<b)a=b;return compare;}
// clang-format on

void logic()
{
    getvalue<int>();
    auto table = unordered_map<string, int>{};
    string name;
    while (getline(cin, name))
    {
        if (table[name] >= 1)
        {
            YesNo(true);
            return;
        }
        table[name]++;
    }
    YesNo(false);
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    logic();
    return 0;
}
