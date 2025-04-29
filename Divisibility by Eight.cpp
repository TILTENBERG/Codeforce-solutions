#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    unordered_map<int, set<int>> mp;
    for (int i = 0; i < n;++i){
        mp[s[i] - '0'].insert(i);
        if(s[i] == '0'){
            cout << "YES" << endl;
            cout << s[i] << endl;
            return 0;
        }
        if(s[i] == '8'){
            cout << "YES" << endl;
            cout << s[i] << endl;
            return 0;
        }
    }
    int ans=0;
    int target;
    for (int i = 0; i < n - 2;++i){
        ans = 0;
        ans=ans*10+(s[i] - '0');
        target = 2 * (s[i] - '0');
        target = 8 - target % 8;
         if(mp.find(target) != mp.end()){
                auto it = mp[target].lower_bound(i + 1);
                if (it != mp[target].end()){
                    ans=ans*10+target;
                    cout << "YES" << endl;
                    cout << ans << endl;
                    return 0;
                }  
            }



        for (int j = i + 1; j < n - 1;++j){
            ans = 0;
            ans=ans*10+(s[i] - '0');
            ans=ans*10+(s[j] - '0');
            target=4*(s[i] - '0')+2*(s[j] - '0');
            target = 8 - target % 8;
            if(mp.find(target) != mp.end()){
                auto it = mp[target].lower_bound(j + 1);
                if (it != mp[target].end()){
                    ans=ans*10+target;
                    cout << "YES" << endl;
                    cout << ans << endl;
                    return 0;
                }  
            }
            
        }
    }
    cout<<"NO" << endl;
    return 0;
}
