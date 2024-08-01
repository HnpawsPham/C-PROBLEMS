#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\bai3.inp"),
        out(".\\txt\\bai3.out");

int n,k;
int a[10000000],
    b[10000000],
    pos[1000000];

int main(){
    fi>>n>>k;

    if(k<n){
        n+=1;

        a[0] = 0;
        b[0] = 0;
        a[n] = 0;
        b[n] = 0;

        for(int i=1; i<n; i++){
            fi>>a[i];
            a[i]*=-1;
            b[i] = a[i];
            pos[a[i]] = i;
            pos[a[i]*-1] = i;
        }

        sort(b+1, b+n);

        for(int i=1; i<=k; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;


        for(int i=1; i<=k; i++){
            if(pos[b[i]]==1){
                a[pos[b[i]]+1]*=-1;
                a[pos[b[i]]]*=-1;
            }
            else{
                if(a[pos[b[i+1]]]*-1 > a[pos[b[i]]]*-1){
                    a[pos[b[i+1]]]*=-1;
                }
                else{
                    a[pos[b[i]]]*=-1;
                }
            }
        }

        int sum=0;

        for(int i=1; i<n; i++){
            sum+=a[i];
            cout<<a[i]<<" ";
        }

        out<<sum<<endl;
    }
    else{
        int sum = 0;
        for(int i=0; i<n; i++){
            fi>>a[i];
            sum+=a[i];
        }

        out<<sum<<endl;
    }

    

    fi.close();
    out.close();
}