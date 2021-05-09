#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

template<typename T>
void printList(std::initializer_list<T> text)
{
    for (const auto & value: text)
        std::cout << value << " ";
}
 

void solve(){
  vector<int> roar;
  roar.pb(1234567);
  int num;
  for(int i = 1; i<10; i++){
    for(int j=i+1; j<13; j++){
      string number;
      if(j-i>=6) break;
      for(int k=i; k<=j; k++){
        number += to_string(k);
      }
      num = stoi(number);
      roar.pb(num);
      // cout << num << endl;
    }
  }
  for(int i = 10; i<100; i++){
    for(int j=i+1; j<=i+2; j++){
      string number;
      for(int k=i; k<=j; k++){
        number += to_string(k);
      }
      num = stoi(number);
      roar.pb(num);
      // cout << num << endl;
    }
  }
  for(int i = 100; i<999; i++){
    string number;
    number += to_string(i);
    number += to_string(i+1);
    num = stoi(number);
    roar.pb(num);
    // cout << num << endl;
  }

  int start;
  cin >> start;
  sort(roar.begin(), roar.end());
  for(int i = 0; i<roar.size(); i++){
    if(roar[i]>start){
      cout << roar[i] << '\n';
      break;
    }
  }
}
int main()
{
  fast_cin();
  int t;
  cin >> t;
  for(int it=1;it<=t;it++) {
    cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}