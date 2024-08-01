#include <bits/stdc++.h>
using namespace std;

// do đề ngược ngạo nên em xin phép để +4 và -4:)

void encode(){
    string in,out;
    cout<<"Nhap ten file de ma hoa: ";
    cin>>in;
    cout<<"Nhap ten file chua noi dung ma hoa: ";
    cin>>out;

    fstream fi(".\\txt\\"+in+".txt"),
            output(".\\txt\\"+out+".txt");

    char ch;
    while(!fi.eof()){
        fi>>ch;
        output<<char(int(ch)+4);
    }
    fi.close();
}

void decrypt(){
    string in,out;
    cout<<"Nhap ten file can giai ma: ";
    cin>>in;
    cout<<"Nhap ten file chua noi dung giai ma: ";
    cin>>out;

    fstream fi(".\\txt\\"+in+".txt"),
            output(".\\txt\\"+out+".txt");

    while(!fi.eof()){
        char ch;
        fi>>ch;
        output<<char(int(ch)-4);
    }
    fi.close();
}

void print(){
    string name;
    cout<<"Nhap ten file can hien noi dung: ";
    cin>>name;
    fstream fi(".\\txt\\"+name+".txt");

    while(!fi.eof()){
        char ch;
        fi>>ch;
        cout<<ch;
    }
    fi.close();
}

int main(){
    int choice;
    cout<<"MENU (tu tao file)"<<endl;
    cout<<"1. Ma hoa 1 file"<<endl;
    cout<<"2. Giai ma 1 file"<<endl;
    cout<<"3. Xem noi dung"<<endl;
    cout<<"Ban chon tu 1-3: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        encode();
        break;
    case 2:
        decrypt();
        break;
    case 3:
        print();
    default:
        break;
    }
}