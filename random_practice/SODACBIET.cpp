#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, sum = 0;

bool du_uoc(ll num){
    // PHAN TICH RA THUA SO NGTO
    int cnt = 0;

    if(num % 2 == 0){
        cnt++;

        while(num%2 == 0){
            num/=2;
        }
    }

    for(ll i = 3; i <= sqrt(num); i+=2){
        if(num % i == 0){
            cnt++;

            while(num % i == 0){
                num/=i;
            }
        }
    }

    // NEU CHINH NO LA SO NGTO +1
    if(num > 1){
        cnt++;
    }

    if(cnt > 2){
        return true;
    }

    return false;
}

bool doixung(ll num){
    string str = to_string(num);

    for(int i = 0; i< str.length() / 2; i++){
        if(str[i] != str[str.length() - i -1]){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>a>>b;

    int l = (a > 66) ? a : 66;

    for(int i = l; i <= b ; i++){
        if(doixung(i)){
            if(du_uoc(i)){
                sum += i;
            }
        }
    }

    cout<<sum<<endl;
}