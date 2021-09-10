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
template <typename T> inline T getvalue(){T r;string s;getline(cin, s);istringstream(s)>>r;return r;}
template <typename T> inline vector<T> getvalues(){vector<T> v;T r;string s;getline(cin,s);istringstream iss(s);while(iss>>r){v.push_back(r);}return v;}
template <typename T> inline vector<T> getlines(){vector<T> v;T s;while(getline(cin,s)){v.push_back(s);}return v;}
template <typename T> inline string join(vector<T>& v,string d){stringstream s;copy(v.begin(),v.end(),ostream_iterator<T>(s,d.c_str()));return s.str();}
template <typename T> inline bool chmin(T& a, const T& b){bool compare=a>b;if(a>b)a=b;return compare;}
template <typename T> inline bool chmax(T& a, const T& b){bool compare=a<b;if(a<b)a=b;return compare;}
// clang-format on

void logic()
{
    int n = getvalue<int>();
    auto ps = getvalues<int>();
    auto table = unordered_map<int, int>{};
    for (const auto &p : ps | adaptor::indexed())
    {
        table[p.value()] = (int)p.index() + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << table[i];
        }
        else
        {
            cout << " "s << table[i];
        }
    }
    cout << endl;
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    logic();
    return 0;
}
