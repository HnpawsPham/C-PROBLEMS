#include <bits/stdc++.h>
using namespace std;


struct List{
    string name[1000];
    int birth[1000];
    float hk1[1000],hk2[1000];
} student;

int index=0;


void create(){
    string name;
    cout<<"Nhan ten file can tao chua sinh vien: ";
    cin>>name;

    ofstream fi(".//txt//"+ name + ".bin");
    cout<<endl;
    
    cout<<"Nhap 0 de ket thuc"<<endl;

    string t;
    while(t != "0"){
        cout<<"Ten: ";
        cin>>t;
        if(t!= "0"){
            student.name[index] = t;
            cout<<"Nam sinh: ";
            cin>>student.birth[index];
            cout<<"Diem hoc ki 1: ";
            cin>>student.hk1[index];
            cout<<"Diem hoc ki 2: ";
            cin>>student.hk2[index];
            index++;
        }
    }

    // print struct to bin file
    for(int i=0; i<index; i++){
        fi<<student.name[i]<<" "<<student.birth[i]<<" "<<student.hk1[i]<<" "<<student.hk2[i]<<endl;
    }

    fi.close();
}

void print(){
    string name;
    cout<<"Nhap ten file chua sinh vien de hien thi: ";
    cin>>name;
    cout<<endl;

    fstream fi(".\\txt\\"+name+".bin");
    // print struct to terminal
    while(!fi.eof()){
        string str;
        getline(fi,str);
        cout<<str<<endl;
    }
    fi.close();
}

void add(){
    string name;
    cout<<"Nhap file de them sinh vien: ";
    cin>>name;

    fstream fi(".\\txt\\"+name+".bin", fstream::app);

    string t;
    cout<<"Nhap ki tu 0 de ket thuc: "<<endl;
    while(t != "0"){
        cout<<"Ten: ";
        cin>>t;
        if(t!="0"){
            student.name[index]=t;
            cout<<"Nam sinh: ";
            cin>>student.birth[index];
            cout<<"Diem hoc ki 1: ";
            cin>>student.hk1[index];
            cout<<"Diem hoc ki 2: ";
            cin>>student.hk2[index];

            fi<<student.name[index]<<" "<<student.birth[index]<<" "<<student.hk1[index]<<" "<<student.hk2[index]<<endl;
            index++;
        }
    }

    fi.close();
}

string split(string str){
    int i=0;
    string res= "";
    while(str[i]!=' '){
        res+=str[i];
        i++;
    }
    return res;
}

void find(){
    string name,sname;
    cout<<"Nhap ten file chua sinh vien can tim: ";
    cin>>name;
    fstream fi(".\\txt\\"+name+".bin");

    cout<<"Nhap masv rong de ket thuc: "<<endl;
    cout<<"Nhap ten sinh vien can tim: ";
    cin>>sname;

    while(!fi.eof()){
        string str;
        getline(fi,str);
        if(split(str) == sname){
            cout<<str<<endl;
            break;
        }
        str="";
    }
}

int main(){
    int choice;
    cout<<"MENU"<<endl;
    cout<<"1. Tao file chua sinh vien"<<endl;
    cout<<"2. Xuat cac sinh vien co trong file"<<endl;
    cout<<"3. Them sinh vien vao file"<<endl;
    cout<<"4. Tim sinh vien"<<endl;
    cout<<"0. Thoat"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Ban chon tu 0-4: ";
    cin>>choice;

    switch (choice)
    {
    case 0:
        break;
    case 1:
        create();
        break;
    case 2:
        print();
        break;
    case 3:
        add();
        break;
    case 4:
        find();
        break;
    default:
        break;
    }
}