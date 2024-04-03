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
#define mod 1000000007
ll POW(ll a,ll b)
{   ll ans=1;
   while(b>0)
   {   if(b%2)ans=(ans*a)%mod;
       b/=2;
       a=(a*a)%mod;
   }
   return ans;
}
  ll pre[100+1][100+1]={0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    
          ll n,j,i;
          cin>>n;
          ll arr[n+1][n+1];
        
      
         for(i=1;i<=n;i++)
         {
             pre[0][i]=0;
             pre[i][0]=0;

             for(j=1;j<=n;j++)
             {
                  cin>>arr[i][j];
                  
                 
                  pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+arr[i][j];
             }

         }
          
             ll q;
             cin>>q;
             while(q--)
             {
                  ll a,b,c,d;
                  cin>>a>>b>>c>>d;
                  cout<<pre[c][d]-pre[a-1][d]-pre[c][b-1]+pre[a-1][b-1]<<endl;
             }
          
     

    return 0;
}
