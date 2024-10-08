#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str, str1;

int dy[] = {-1, -1, 0},
    dx[] = {-1, 0, -1};

string getPanlindrome(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    int a[n + 1][m + 1];
    string res = "";

    if(s1 == s2) return s1;

    for(int i = 0; i <=n;i++) a[i][0] = 0;
    for(int j = 0; j <=m;j++) a[0][j] = 0;

    for(int i = 1;i<=n;i++)
        for(int j = 1; j<=m;j++){
            if(s1[i - 1] == s2[j - 1]) a[i][j] = a[i - 1][j - 1] + 1;
            else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
        }
    
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=m;j++) cout<<a[i][j]<<" ";
    //     cout<<el;
    // }

    int i = n, j = m;
    while(i > 0){
        int maxx = -1;

        for(int x = 0; x < 3; x++)
            maxx = max(maxx, a[i + dy[x]][j + dx[x]]); 

        for(int x = 0; x < 3; x++){
            int i1 = i + dy[x];
            int j1 = j + dx[x];

            if(a[i1][j1] == maxx && s1[i1 - 1] == s2[j1 - 1]){
                res += s1[i1 - 1];
                break;
            }
        }
        i--;
        j--;
    }
    if(res.length() == 0 && a[n][m] > 0) res += s1[n - 1];
    return res;
}

int main(){
    freopen(".\\txt\\XAU-CON-CHUNG-DOI-XUNG-DAI-NHAT.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str>>str1;

    str = getPanlindrome(str, str1);
    string rstr(str.rbegin(), str.rend());

    cout<<getPanlindrome(str, rstr)<<el;

    return 0;
}