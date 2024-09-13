#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

string str;
char a[] = {'a', 'e', 'i', 'o', 'u', 'w', 'y'};

bool check(char x){
    return binary_search(a, a + 7, x);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    string res = "";
    bool ok = false;

    for(int i = 0; i <str.length(); i++){
        res += str[i];

        if(check(str[i])) continue;

        if(ok) {
            res[i] = toupper(res[i]);
            ok = false;
        }
        
        if(!isupper(res[i - 1])) res[i] = toupper(res[i]);
        else ok = true;
    }
    std::cout<<res<<el;

    return 0;
}