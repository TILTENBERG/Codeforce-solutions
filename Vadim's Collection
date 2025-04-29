#include<bits/stdc++.h>
using namespace std;
#define BOOST                        \
   ios_base::sync_with_stdio(false); \
   cin.tie(0);                       \
   cout.tie(0);
void solve(){
	
}
int main(){
	BOOST;
	int t;
	cin>>t;
	while(t--){
		vector<int> vct(10);
		string num;
		cin>>num;
		string ans="9";
		vct[9]=-1;
		for(int i=0;i<10;++i){
			vct[num[i]-'0']++;
		}
		
		for(int i=2;i<=10;++i){
			int j=10-i;
			while(!vct[j++]);
			j--;
			ans.append(to_string(j));
			vct[j]--;
		}
		cout<<ans<<endl;
		
		
		
		
	}
	return 0;
	
}
