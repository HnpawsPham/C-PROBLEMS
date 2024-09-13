#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    char a[n][6];
    int cnt = m;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<6;j++){
            cin>>a[i][j];
            cnt += (a[i][j] == 'X');
        }
    }
    cout<<cnt<<el;
    
    if(cnt % 2 != 0 || cnt > n * 6){
        cout<<"Impossible"<<el;
        return 0;
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<2; j++){
            if(cnt == 0) break;
            if(a[i][j] == 'X' && a[i][5 - j] != 'X' || a[i][j] != 'X' && a[i][5 - j] == 'X'){
                a[i][5 - j] = a[i][j] = 'X';
                cnt--;
            }
            if(a[i][j] == '.' && a[i][5 - j] == '.' && cnt >= 2){
                a[i][j] = a[i][5 - j] = 'X';
                cnt-=2;
            }
        }
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<6;j++){
            cout<<a[i][j];
        }
        cout<<el;
    }

    return 0;
}