#include<iostream>
using namespace std;

int main(){
    int angka[] = {100,9,8,7,6,5,4,3,2,1,0,45,78,85,63};
    int lenght = sizeof(angka)/sizeof(*angka);
    int penyimpanan;

    for (int a = 0; a < lenght; a ++){
        for (int b = 0; b < lenght-a; b++){
            if(angka[b] > angka[b+1]){
                penyimpanan = angka[b];
                angka[b] = angka[b+1];
                angka[b+1] = penyimpanan;
            }
        }
        for(int d = 0; d < lenght; d++){
            cout<<angka[d]<<" | ";
        }
        cout<<endl;
    }
    cout<<"======================================="<<endl;
    for(int c = 0; c < lenght; c++){
        cout<<"                  "<<angka[c]<<endl;
    }
}