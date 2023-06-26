#include <iostream>
using namespace std;

int main(){
    int input;
    int total = 0;
    cout <<"==============================="<<endl;
    cout<<"Muhamad Reza Aditya"<<endl;
    cout <<"==============================="<<endl;
    cout<<"masukan jumlah nilainya:  ";
    cin>>input;
    int angka[input];

    cout<<"==============================="<<endl;
    for (int a = 0; a < input; a++){
        cout << "nilai yang ke-"<<a<<": ";
        cin>>angka[a];
    }
    cout<<"==============================="<<endl;

    for (int b = 0; b < input; b++){
        cout <<"jadi hasilnya yang ke- "<<b<<": "<<angka[b]<<endl;
    }
    cout<<"==============================="<<endl;

    //ini merupakan code sederhana untuk mencari total dari sebuah
    for(int c = 0; c < input; c++){
        total += angka[c];
    }

    cout <<"maka semua jumlahnya yaitu: "<<total;

   
    
}