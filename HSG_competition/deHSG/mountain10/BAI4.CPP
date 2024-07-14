#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI4.INP"),
        out(".\\txt\\BAI4.OUT");

string s1,s2,tich="";
string saved[1000000];

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    fi>>s1;
    fi>>s2;

    if(s1.length() < s2.length()){
        string t = s1;
        s1 = s2;
        s2 = t;
    }

    int du=0, cnt=0, maxlen=0;
    string space = "";

    // nhân lấy từng hàng tích
    for(int i=s2.length()-1; i>=0; i--){
        string res="";

        for(int j=s1.length()-1; j>=0; j--){
            int t = int(s2[i] - '0') * int(s1[j] - '0') + du;

            if(t%10 != t){
                du=t/10;
                t%=10;
            }
            else{
                du=0;
            }

            res = to_string(t) + res;
        }

        if(du != 0){
            res = to_string(du) + res;
        }

        res = res + space;
        du=0;
        maxlen = max(maxlen, res.length());

        space += '0';
        saved[cnt] = res;
        cnt++;
    }

    // cộng các hàng tích lại
    du=0;
    for(int j=1; j<=maxlen; j++){
        int sum=0;

        for(int i=0; i<cnt; i++){
            string t = saved[i];

            if(t.length() >= j){
                sum+= int(t[t.length() - j] - '0');
            }
        }
        sum+=du;

        if(sum%10 != sum){
            string c = to_string(sum);
            c.erase(c.length() - 1);
            du = stoi(c);
            sum%=10;
        }
        else{
            du=0;
        }

        tich= to_string(sum) + tich;
        cout<<tich<<endl;
    }

    if(du!=0){
        tich = to_string(du) + tich;
    }
    
    out<<tich<<endl;

    fi.close();
    out.close();
}