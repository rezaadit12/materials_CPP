#include <iostream>
using namespace std;

int main(){
    int total = 0, cash, input,rata;
    cout <<"==============================="<<endl;
    cout<<"Muhamad Reza Aditya"<<endl;
    cout <<"==============================="<<endl;
    cout<<"masukan item:  ";
    cin>>input;
    int angka[input];

    cout<<"==============================="<<endl;
    for (int a = 0; a < input; a++){
        cout << "harga item yang ke-"<<a<<": ";
        cin>>angka[a];
    }
    cout<<"==============================="<<endl;

    for (int b = 0; b < input; b++){
        cout <<"jadi hasilnya yang ke- "<<b<<": "<<angka[b]<<endl;
    }
    cout<<"==============================="<<endl;

    for(int c = 0; c < input; c++){
        total += angka[c];
    }

    rata = total/input;

    cout<<"total: "<<total<<endl;
    cout<<"rata-ratanya: "<<rata<<endl;
    cout<<"==============================="<<endl;
    cout<<"Jumlah uang yang diberikan: ";
    cin>>cash;
    cout<<"==============================="<<endl;
    cout<<"nominal dibayar: "<<cash<<endl;
    cout<<"Uang kembalian: "<<cash - total;


   
    
}