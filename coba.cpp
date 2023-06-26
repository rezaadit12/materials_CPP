#include <iostream>
using namespace std;

int main(){

    int baris, kolom, maksim, minim;
    cout<<"======================================="<<endl;
    cout<<"masukan jumlah baris: ";
    cin>>baris;
    cout<<"masukan jumlah kolom: ";
    cin>>kolom;

    float angka[baris][kolom], rata, jumlah;

    for(int a = 0; a < baris; a++){
        for(int b = 0; b < kolom; b++){
            cout<<"masukan angkanya: ";
            cin>>angka[a][b];
        }
    }
    cout<<"======================================="<<endl;
    for(int c = 0; c < baris; c++){
        for(int d = 0; d < kolom; d++){
            cout<<"inputan anda: "<<angka[c][d]<<endl;
            jumlah += angka[c][d];
            rata = jumlah/(baris*kolom);
            


            if(angka[c][d] > maksim) 
                maksim = angka[c][d];

            if(angka[c][d] < minim)
                minim = angka[c][d];
           
        }

    }
    cout<<"======================================="<<endl;
    cout<<"jumlah: "<<jumlah<<endl;
    cout<<"rata: "<<rata<<endl;
    cout<<"masimal: "<<maksim<<endl;
    cout<<"minim: "<<minim<<endl;
    cout<<"======================================="<<endl;
   
}