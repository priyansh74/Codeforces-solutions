#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
void FAST_IO();
int main()
{
    //_time_
   FAST_IO();
    ll n;
    string s;
    cin>>n>>s;
    bool start=true,endd=true;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            if(start)
            {
                start=false;
                cout<<0;
            }
            else
            {
                start=true;
                cout<<1;
            }
        }
        else
        {
            if(endd)
            {
                endd=false;
                cout<<0;
            }
            else
            {
                endd=true;
                cout<<1;
            }
        }
    }
    cout<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    //cout.setf(ios::fixed);
//    //cout.precision(20);
//#ifndef _offline
//    //freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#endif
}

