#include<iostream>
using namespace std;

int main(){
    int jmlh_index, maks, minim, nilai;

    cout<<"masukan jumlah bilangan: ";
    cin>>jmlh_index;

        for(int a = 1; a <= jmlh_index; a++){
            cout<<"masukan bilangan ke-"<<a<<" : ";
            cin>>nilai;

        if(a == 1){
            maks = nilai;
            minim = nilai;
        }

        else{
            if(nilai > maks){
                maks = nilai;
            }
            if(nilai < minim){
                minim = nilai;
            }
        }
    }

    cout<<"nilai maksimumnya: "<<maks<<endl;
    cout<<"nilai minimumnya: "<<minim<<endl;
}