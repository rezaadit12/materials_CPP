#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"masukan banyaknya: ";
    cin>>input;
    int jumlah[input];

    for (int a = 0; a < input; a++){
        cout<<"angka anda yang ke-"<<a<<" : ";
        cin>>jumlah[a];
    }

    for (int b = 0; b < input; b++){
        cout<<"maka angka anda adalah "<<jumlah[b]<<endl;
    }
}