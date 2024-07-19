ll power_mod(ll x,ll y,ll mod){
     ll res=1ll;
     while(y > 011){
          if(y & 1ll) res=(res*x)%mod;
          y=y>>1ll;
          x=(x*x)%mod;
          }
     return res;
}
