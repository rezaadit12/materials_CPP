#include<iostream>
using namespace std;

int main(){
    int input, kolom;
    
    cout<<"berapa data yang ke 1: ";
    cin>>input;
    cout<<"berapa data yang ke 2: ";
    cin>>kolom;
    int arr[input][kolom];

    int angka, pengurangan;
    cout<<"data tersedia : "<<endl;
    cout<<"- pengurangan = 1"<<endl<<"- perkalian = 2"<<endl<<"- penjumlahan = 3"<<endl<<"- pembagian = 4"<<endl;
    cout<<endl;
    cout<<"masukan data yang dipilih: ";
    cin>>angka;
    
    if(angka == 1){
        cout<<"ini pengurangan";
        cout<<endl;
        for(int a = 0; a < input; a++){
            for(int b = 0; b < kolom; b++){
                cout<<"masukan angka yang ingin di kurangkan ke- "<<a<<" : ";
                cin>>arr[a][b];
            }
        }
        for(int c = 0; c <input; c++){
            for(int d = 0; d < kolom; d++){
                pengurangan = arr[c][d] - pengurangan;
            }
        }
        cout<<"hasil pengurangannya yaitu: "<<pengurangan;
      
       
        
    }
    else if(angka == 2){
        cout<<"ini perkalian";
    }
    else if(angka == 3){
        cout<<"ini penjumlahan";
    }
    else if(angka == 4){
        cout<<"ini pembagian";
    }
    
    else {
        cout<<"angka anda tidak valild!";
    }
    

  




    
    
}