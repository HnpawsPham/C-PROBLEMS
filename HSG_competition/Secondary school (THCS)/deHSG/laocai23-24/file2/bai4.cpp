#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\bai4.inp"),
        out(".\\txt\\bai4.out");

string str;
int n;
int cnt[100000],
    pos[100000];

int main(){
    fi>>n;

    while(n--){
        fi>>str;
        int maxx = 0;
        memset(cnt, false, sizeof(cnt));
        memset(pos, false ,sizeof(pos));

        for(int i=0; i<str.length();i++){
            pos[int(str[i])] = i;
            cnt[int(str[i])]++;

            maxx = max(maxx, int(str[i]));
        }

        bool isExist = false;

        for(int i=0; i<=maxx; i++){
            if(cnt[i] == 1){
                isExist = true;

                out<<pos[i]+1<<endl;
                break;
            }
        }

        if(!isExist){
            out<<-1<<endl;
        }
    }
   

    fi.close();
    out.close();
}