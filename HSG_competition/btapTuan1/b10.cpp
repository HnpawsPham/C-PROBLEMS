#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream fi,data;
    data.open("./txtFiles/b10Data.txt");
    fi.open("./txtFiles/b10.txt");
    fi<<"MENU? No, it's Me N U \n a.view all \n b.choose by id only";
    char opt;
    fi>>opt;
    string str,choice,id;
    if (tolower(opt)=='a'){
    while(getline(data,str)){
        fi<<str<<endl;
    }
    }
    else if(tolower(opt)=='b'){
    cout<<"Type student's ID: "<<endl;
    cin>>choice;
    while(getline(data,str)){
        id=str.substr(0,4);
        if (choice==id){
            fi<<str;
        }
    }
    }
    else{
        fi<<"Use your brain, please.";
    }
}