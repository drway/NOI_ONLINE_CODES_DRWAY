#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n,q,a[maxn],b[maxn];
int main(){
	freopen("island.in","r",stdin);
	freopen("island.in","w",stdout);
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	while(q--){
		int l,r,c,d,ans=0;
		cin>>l>>r>>c>>d;
		for(int i=l;i<=r;i++){
			if((a[i]^c)<=min(b[i],d))ans++;
		}
		cout<<ans<<endl;
	}return 0;
}
