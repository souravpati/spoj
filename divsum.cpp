#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ios::sync_with_stdio(0);
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll sum=1;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)sum+=i+n/i;
			if(i*i==n)sum-=i;
		}
		cout<<sum<<endl;
	}
	return 0;
}