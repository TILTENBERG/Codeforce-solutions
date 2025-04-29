#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int f = 0;
    int p = 0;
    int fnd = 0;
    for (int i = 0; i < n;++i){
        if(s[i]=='A' && s[i+1]=='B'){
            fnd = i;
            p = 1;
            break;
        }
    }
    if(p==1){
        for(int i = fnd+2; i < n; ++i){
            if(s[i]=='B' && s[i+1]=='A'){
                f = 1;
                break;
            }
        }
    }
    if(f==0){
        for (int i = 0; i < n;++i){
            if(s[i]=='B' && s[i+1]=='A'){
                fnd = i;
                p = 2;
                break;
            }
        }
    }
    if(p==2){
        for (int i = fnd + 2; i < n;++i){
            if(s[i]=='A' && s[i+1]=='B'){
                f = 1;
                break;
            }
        }
    }
    if(f==1){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
