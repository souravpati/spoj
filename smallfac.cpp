#include</bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a[200],n,i=0,m=0,j,x,temp;
		cin>>n;
		int b=n;
		while(b!=0){
			x=b%10;
			a[i] = x;
			i++;
			m++;
			b/=10;
		}

		for(i=2;i<n;i++){
			temp = 0;
			for(j=0;j<m;j++){
				x = a[j]*i+temp;
				a[j] = x%10;
				temp=x/10;
			}
			while(temp!=0){
				a[j] = temp%10;
				temp/=10;
				j++;
				m++;
			}
		}

		for(i=m-1;i>=0;i--){
			cout<<a[i];
		}
		cout<<"\n";
		

	}
	return 0;
}