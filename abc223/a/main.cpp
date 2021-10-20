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
using ui = unsigned int;
using ll = long long;
template <typename T> inline T getvalue(){T r;string s;getline(cin, s);istringstream(s)>>r;return r;}
template <typename T> inline vector<T> getvalues(){vector<T> v;T r;string s;getline(cin,s);istringstream iss(s);while(iss>>r){v.push_back(r);}return v;}
template <typename T> inline vector<T> getlines(){vector<T> v;T r;string s;while(getline(cin,s)){istringstream iss(s);iss>>r;v.push_back(r);}return v;}
template <typename T, typename S> inline tuple<T,S> getpair(){T r1;S r2;string s;getline(cin,s);istringstream iss(s);iss>>r1>>r2;return {r1,r2};}
template <typename T,typename S,typename R> inline tuple<T,S,R> gettriple(){T r1;S r2;R r3;string s;getline(cin,s);istringstream iss(s);iss>>r1>>r2>>r3;return {r1,r2,r3};}
template <typename T,typename S,typename R,typename Q> inline tuple<T,S,R,Q> getquad(){T r1;S r2;R r3;Q r4;string s;getline(cin,s);istringstream iss(s);iss>>r1>>r2>>r3>>r4;return {r1,r2,r3,r4};}
template <typename T> inline string join(vector<T>& v,string d){stringstream s;copy(v.begin(),v.end(),ostream_iterator<T>(s,d.c_str()));return s.str();}
vector<int> sieve(int n) {vector<int> r(n+1);iota(r.begin(),r.end(),0);for(int i=2;i*i<=n;++i){if(r[i]<i)continue;for(int j=i*i;j<=n;j+=i)if(r[j]==j)r[j]=i;}return r;}
vector<int> factor(int n) {vector<int> m=sieve(n);vector<int> r;while(n>1){r.push_back(m[n]);n/=m[n];}return r;}
template <typename T> inline bool chmin(T& a, const T& b){bool compare=a>b;if(a>b)a=b;return compare;}
template <typename T> inline bool chmax(T& a, const T& b){bool compare=a<b;if(a<b)a=b;return compare;}
// clang-format on

void logic()
{
    auto x = getvalue<int>();
    YesNo(x >= 100 && x % 100 == 0);
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    logic();
    return 0;
}
