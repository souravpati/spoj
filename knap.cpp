#include </bits/stdc++.h>
using namespace std;
 
int knap(int n,int w, int wt[], int val[] ){
    int tab[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0)tab[i][j]=0;
            else if(j<wt[i-1]) tab[i][j]=tab[i-1][j];
            else tab[i][j] = max(val[i-1] + tab[i-1][j-wt[i-1]],  tab[i-1][j]);
        }
    }
    return tab[n][w];
}
 
int main() {
	int n,w;
	cin>>w>>n;
	
	int wt[n],val[n];
    for(int i=0;i<n;i++){
    	cin>>wt[i]>>val[i];
	}
    cout<<knap(n,w,wt,val)<<endl;
	
	return 0;
}