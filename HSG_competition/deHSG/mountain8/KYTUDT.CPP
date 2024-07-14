#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\KYTUDT.INP"),
        out(".\\txt\\KYTUDT.OUT");

int n;
int cnt[1000],
    firstpos[1000];
string str;

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    fi>>n;
    fi>>str;

    int maxx=0,i=0;
    int ans;

    string temp = str;
    temp.erase(remove(str.begin(),str.end(),str[0]));

    // TH dac biet
    if(str.length() == n &&  str[0] != str[1] || str.length() == n && temp.length() > 0 ){
        out<<-1<<endl;
    }
    else if(temp.length()==0){      //truong hop xau chi 1 loai ki tu aaaaaaaaaaaaaa...
        out<<n<<endl;
    }
    else if(str.length()<n){
        out<<-1<<endl;
    }
    // TH binh thuong
    else{
        while(maxx<n){
                cnt[int(str[i])]++;
                cnt[int(str[n-i])]++;

                if(cnt[int(str[i])] == 1){
                    firstpos[int(str[i])]=i;
                }
                maxx=max(maxx,cnt[int(str[i])]);

                if(maxx==n){
                    ans=firstpos[int(str[i])] + 1;
                }

                i++;
        }

        // output
        if(maxx == n){
            out<<ans<<endl;
        }
        else{
            out<<-1<<endl;
        }
    }
}