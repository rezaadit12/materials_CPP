#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,7,8,9};
    int lenght = sizeof(arr)/sizeof(*arr);
    int cari, jumlah;

    cout<<"data yang tersedia: "<<endl;
    for(int a = 0; a < lenght; a++){
        cout<<"index ke-"<<a<<" : "<<arr[a]<<endl;

    }
    cout<<"data yang dicari: ";
    cin>>cari;
    for(int b = 0; b < lenght; b++){
        if(cari == arr[b]){
            jumlah++;
        }
    }
    if(jumlah == 0){
        cout<<"nilai tidak tersedia!";
    } else{
        cout<<"data ditemukan di "<<endl;
        for(int c = 0; c < lenght; c++){
           if(cari == arr[c]){
            cout<<"index ke-"<<c<<endl;
           }
        }
    }
}