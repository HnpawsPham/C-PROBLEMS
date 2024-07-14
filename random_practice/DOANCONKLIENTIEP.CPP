#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DOANCONKLIENTIEP.INP");

int n,s;
vector<int> a;
bool check[1000000];

int main(){
    fi>>n>>s;

    for(int i=0; i<n; i++){
        int t;
        fi>>t;
        a.push_back(t);
    }


    check[0]=true;
    
    for(int i=0; i<n; i++){
        for(int j=s; j>=a[i]; j--){
            if(check[j-a[i]] == true){
                check[j]=true;
            }
        }
    }

    if(check[s] == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}