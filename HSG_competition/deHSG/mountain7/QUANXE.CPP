#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\QUANXE.INP"),
        out(".\\txt\\QUANXE.OUT");

int n;
int a[9999][9999];

void rotate90(){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j] == 1){
                a[i][j] = 0; 
                a[j][n-i+1] = 2;
                cnt++;
            } 
        }
    }

    if(cnt < n){
        a[n][n-(n-1)+1] = 2;
    }
}

void print(){
    for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][j] == 2){
                    out<<i<<" "<<j<<endl;
                }
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fi>>n;
    memset(a, 0, sizeof(a)/sizeof(int));  // gan tat ca cac phan tu trong ma tran =0

    if(n==1){
        int x,y;
        fi>>x>>y;

        out<<x<<" "<<y<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            int x,y;
            fi>>x>>y;
            a[x][y]=1;
        }

        print();
        rotate90();
        cout<<endl;
        print();
    }
    

    fi.close();
    out.close();
}