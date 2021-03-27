#include<bits/stdc++.h>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
__gnu_pbds::gp_hash_table<string,int> m;
int n,ans;
string a,b,s;
inline int cheque(int l,int r){
	s=b.substr(l,r-l+1);
	int siz=r-l+1,i,j;
//	cout<<a<<endl<<s<<endl<<siz<<endl;
	for(i=0,j=0;i<n&&j<siz;i++){
//		cout<<i<<' '<<j<<' '<<a[i]<<' '<<s[j]<<endl;
		if(a[i]==s[j]){
			j++;
		}
	}
	if(j==siz)return 1;return -1;
}
void dfs(int l,int r){
//	cout<<l<<' '<<r<<' '<<b.substr(l,r-l+1)<<endl;
	int c=cheque(l,r);
	m[s]=c;
//	cout<<c<<endl<<endl;
	if(c==1)++ans;
	if(l!=r){
		string s1=b.substr(l+1,r-l);
		string s2=b.substr(l,r-l);
//		cout<<s1<<' '<<s2<<' '<<b.substr(l,r)<<endl; 
		if(!m[s1]){
//			cout<<s1<<endl;
			dfs(l+1,r);
		}
		if(!m[s2])dfs(l,r-1);
		
	}
}
int main(){
	freopen("block.in","r",stdin);
	freopen("block.out","w",stdout);
	cin>>n>>a>>b; 
	dfs(0,n-1);
	cout<<ans;
	return 0;
} 
