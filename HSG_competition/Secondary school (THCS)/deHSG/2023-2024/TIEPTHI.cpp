#include <bits/stdc++.h>
#include <cmath>
using namespace std;

fstream fi(".\\txt\\TIEPTHI.txt"),
        out(".\\txt\\TIEPTHI.OUT");

int n,sl=1;
long t[100000],s[100000];

// tính số nhân viên, tìm thời gian sớm nhất
void handle(){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(t[j] <= s[i] && t[j]>t[i]){
                sl++;
            }
        }
    }
}

int main()
{
    fi >> n;
    
    // input
    for (int i = 0; i < n; i++){
        fi>>t[i];
        fi>>s[i];
    }

    handle();
    cout<<sl<<endl;

    // print
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << " "<< s[i] <<endl;
    }
    fi.close();
}