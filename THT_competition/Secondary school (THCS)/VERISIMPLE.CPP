#include <bits/stdc++.h>
using namespace std;

int main(){
    // a) Đưa ra độ dài của s? Đưa ra kí tự đầu tiên, ký tự cuối cùng của s? 
    // b) Nhập số n, đưa ra kí tự thứ n của s? 
    // c) Đếm trong xâu s có bao nhiêu ký tự “a” 
    // d) Thay toàn bộ ký tự "a" bởi ký tự "A3"

    string str;

    cin>>str;

    cout<<"Length: "<<str.length()<<endl;
    cout<<"First char: "<<str[0]<<"     Last char: "<<str[str.length()-1]<<endl;
    
    int n;
    cin>>n;

    cout<<"N index char: "<<str[n-1]<<endl;

    int cnt=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == 'a'){
            cnt++;
            str.erase(i,1);
            str.insert(i, "A3");
        }
    }

    cout<<"A char num: "<<cnt<<endl;
    cout<<"Change a to A3: "<<str<<endl;

}