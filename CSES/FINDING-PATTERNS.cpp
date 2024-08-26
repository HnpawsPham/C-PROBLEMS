#include <bits/stdc++.h>
using namespace std;

string str;
int t;

bool kmp(string s){
    int n = str.size();
    int m = s.size();

    int lps[m];
    lps[0] = 0;

    int i = 1, j = 0;
    while(i < m){
        if(s[i] == s[j]){
            j++;
            lps[i]= j;
            i++;
        }
        else{
            if(j == 0){
                lps[i] = 0;
                i++;
            }
            else{
                j = lps[j - 1];
            }
        }
    }

    i = 0, j = 0;
    while(i < n){
        if(str[i] == s[j]){
            i++;
            j++;
        }

        if(j == m){
            return true;
        }
        else if(i < n && str[i] != s[j]){
            if(j == 0){
                i++;
            }
            else{
                j = lps[j - 1];
            }
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str>>t;
    while(t--){
        string s;
        cin>>s;

        cout<<(kmp(s) ? "YES" : "NO")<<endl;
    }

    return 0;
}