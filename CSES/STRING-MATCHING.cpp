#include <bits/stdc++.h>
using namespace std;

string str, s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str>>s;
    int n = str.length();
    int m = s.length();
    int lps[m + 1] = {0};

    int i = 1, j = 0;
    while(i < m){
        if(s[i] == s[j]){
            j++;
            lps[i] = j;
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
    int cnt = 0;

    while(n - i >= m - j){
        if(str[i] == s[j]){
            i++;
            j++;
        }
        if(j == m){
            cnt++;
            j = lps[j - 1];
            i += (j == 0 ? 0 : 1);
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

    cout<<cnt<<endl;
    return 0;
}