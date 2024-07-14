#include <bits/stdc++.h>
using namespace std;

int n,maxlen=0;
int check[1000][1000];
string str;

void xuli(){
    memset(check, false, sizeof(check));

    for(int len = 1; len <= n; len++){
        for(int i=1; i+len-1<=n; i++){
            int j = i+len-1;

            if(i == j){
                check[i][j] = true;
            }

            if(len==2 && str[i] == str[j]){
                check[i][j] = true;
            }
            else{
                if(check[i+1][j-1] == true && str[i] == str[j]){
                    check[i][j] = true;
                }
            }

            if(check[i][j]){
                maxlen = len;
            }
        }
    }
}

int main(){
    cin>>n;
    cin>>str;

    str = 'x'+ str;
    xuli();

    cout<<maxlen<<endl;
}