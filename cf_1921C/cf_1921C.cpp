/**
 * Submission: https://codeforces.com/contest/1921/submission/241949334
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long n,f,x,y;
	long long a[200010];
	cin>>t;
	while(t--){
		cin>>n>>f>>x>>y;
		a[0]=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			f-=min(x*(a[i]-a[i-1]),y);
		}
		if(f<=0) cout<<"NO"<<'\n';
		else cout<<"YES"<<'\n';
	}
}