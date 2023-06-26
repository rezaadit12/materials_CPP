#include<iostream>
using namespace std;

int main(){

    int nilai;
    cout<<"masukan nilainya: ";
    cin>>nilai;

    float jmlh[nilai], bagan, tanduk;

    for(int a = 0; a < nilai; a++){
        cout<<"harga-harganya: ";
        cin>>jmlh[a];
        bagan += jmlh[a];
    }
    cout<<"total: "<<bagan<<endl;
    
    tanduk = bagan/nilai;
    cout<<"rata ratanya: "<<tanduk;
}