#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
const int N=1e5+5;
#define fr(i,a,b) for(int i=a ; i<b ; i++)
#define rf(i,a,b) for(int i=a ; i>=0 ; i--)
typedef pair<int,int> pii;
//-------------------------------------------------------------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//------------------------------------------------------------------------------
class edge{
    public:
    int src;
    int neg;
    int wet;
    edge(){}
    edge(int src , int neg , int wet){
        this->src = src;
        this->neg = neg;
        this->wet = wet;
    }
};
int main(){
    boost
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
        freopen("error.txt" , "w" , stderr);
    #endif
    int nv;
    cin>>nv;
    int arr[] = {2,2,2,3,3,2,2};
    vector<vector<edge*>> G(nv , vector<edge*>());
    for(int i=0  ; i<nv ; i++){
        for(int j=0 ; j<arr[i] ; j++){
            int src , neg , wet ; 
            cin>>src>>neg>>wet;
            G[i].push_back(new edge(src , neg , wet));
        }
    }
    return 0;  
}