#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CODE.INP"),
        out(".\\txt\\CODE.OUT");

string str,temp="",result="";
int i=0;

int returnNum(string sub){
    if(sub == "a"){
        return 1;
    }
    else if(sub == "b"){
        return 2;
    }
    else if(sub == "cc"){
        return 3;
    }
    else if(sub == "bbc"){
        return 4;
    }
    else if(sub == "cbc"){
        return 5;
    }
    else if(sub == "abc"){
        return 6;
    }
    else if(sub == "bac"){
        return 7;
    }
    else if(sub == "aac"){
        return 8;
    }
    else if(sub == "cac"){
        return 9;
    }
    else{
        return 0;
    }
}

void sliceStr(){
    if(returnNum(temp)!=0){
        result+=to_string(returnNum(temp));
        temp="";
    }
    else{
        if(i!=str.length()-1){
            i++;
            temp=str[i-1]+temp;
            sliceStr();
        }
        else{
            result="0";
        }
    }
}


int main(){
    fi>>str;
    fi.close();

    while(i<str.length()){
        temp+=str[i];
        sliceStr();
        i++;
    }
    
    out<<result;

    out.close();
}