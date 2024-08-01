#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\MUAQUA.INP"),
        out(".\\txt\\MUAQUA.OUT");

int m,n,k,maxx,minn;
int a[100000000],chosen[100000000];

// tìm max,min
void check(int num){
    maxx=max(maxx,num);
    minn=min(minn,num);
}

void timQua(){
    for(int i=0; i<n; i++){
        check(a[i]);
        
        for(int j=i+1; j<n ;j++){
            check(a[j]);
        }
    }
}

void timChenhLech(){
    sort(a,a+n);
    out<<maxx-minn<<endl;
}

int main(){
    fi>>m>>n;

    // nhập mảng số quà
    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    // // tìm m món quà có độ chênh nhỏ nhất
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         chosen[i]=max(a[i],a[j])-min(a[i],a[j]);
    //     }

    // }

    // for(int i=0; i<m; i++){
    //     cout<<chosen[i]<<endl;
    // }

    timChenhLech();

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<6%4<<endl;
}