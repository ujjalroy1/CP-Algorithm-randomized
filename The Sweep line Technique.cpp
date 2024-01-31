#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class type1>
#define ll long long int
#define endl "\n"
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using ordered_multiset = tree <type1, null_type, less_equal <type1>, rb_tree_tag, tree_order_statistics_node_update>;
 //ordered_multiset <ll> kek;(declaration for multiorder set)
// ordered_set o_set;(declaration)
//kek.order_of_key(i);(strictly less then i for multi order set)
//o_set.order_of_key(5) ;(strictly less then i for multi order set)
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    ll n,i,cnt=0;
    cin>>n;
    vector<pair<ll,ll>>vp;
    for(i=0;i<n;i++)
    {
         ll x,y;
         cin>>x>>y;
         vp.push_back({x,-1});
         vp.push_back({y,1});
    }
    sort(vp.begin(),vp.end());
    for(i=0;i<vp.size();i++)
    {
        cnt-=vp[i].second;
        cout<<vp[i].first<<" "<<cnt<<endl;
        // if(cnt>=3)
        // {
        //     cout<<"NO\n";
        //    // return 0;
        // }
    }
    cout<<"YES\n";

    return 0;
}
