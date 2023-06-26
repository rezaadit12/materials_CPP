// sertai jumlah, rata rata, dan juga nilai min max menggunakan array 1 dimensi
#include <iostream>
using namespace std;

int main(){
    int input;
    int awal[input], rata, total, min, max;
    cout<<"========================================="<<endl;
    cout<<"masukan jumlah inputan: ";
    cin>>input;
    cout<<"========================================="<<endl;
    for(int a = 1; a <= input; a++){
        cout<<"masukan angka ke-"<<a<<" : ";
        cin>>awal[a];
    }
    cout<<"========================================="<<endl;
    for(int b = 1; b <= input; b++){
        cout<<"angka yang dimasukan ke-"<<b<<" : "<<awal[b]<<endl;
    }

    for(int c = 1; c <= input; c++){
        total += awal[c];
        rata = total/input;

        if(c == 1){
            max = awal[c];
            min = awal[c];
        }

        else{
            if(awal[c] > max){
                max = awal[c];
            }

            if(awal[c] < min){
                min = awal[c];
            }
        }
    }
    cout<<"========================================="<<endl;
    cout<<"totalnya adalah : "<<total<<endl;
    cout<<"rata ratanya    : "<<rata<<endl;
    cout<<"nilai maksimal  : "<<max<<endl;
    cout<<"nilai minimal   : "<<min<<endl;
}