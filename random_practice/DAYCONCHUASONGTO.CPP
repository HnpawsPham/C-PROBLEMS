#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

bool checkngto(int num){
    if(num==2){
        return true;
    }
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cin>>n;

    bool check[n+1];
    memset(check,false,sizeof(check));

    for(int i=1;i<=n; i++){
        int t;
        cin>>t;
        a.push_back(t);

        check[i]=checkngto(a[i]);
    }


    int pos=0;

    for(int len=2;len<=n; len++){
        
        for(int i=pos; i<pos+len-1; i++){
            cout<<a[i]<<" ";

        }

        pos++;
        
        cout<<endl;
    }
}