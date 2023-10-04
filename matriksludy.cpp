/*Ludy Haryanto
2310511019
UTS Praktikum Pemrograman
Jayanta S.Kom. M.Si.
Kamis, 05 Oktobwr 2023*/

#include<iostream>
using namespace std;
int main(){

    float A[3][3];
    float B[3][3];

    //kode untuk memasukkan nilai ke matriks A
    for (int d = 0; d < 3; d++){
        for (int c = 0; c < 3; c++){
        cout<<"Masukkan nilai matriks A : ";
        cin>>A[d][c];
        }
    }
    cout<<endl;

    //kode untuk menampilkan matriks A
    cout<<"========|matriks A|========"<<endl;
    for (int d = 0; d < 3; d++){
        for (int c= 0; c < 3; c++){
            cout<<"| "<<A[d][c]<<" |";
        } cout<<endl;
    }
    cout<<endl;
    cout<<"==========================="<<endl;

    //kode untuk memasukkan nilai ke matriks B
    for (int f = 0; f < 3; f++){
        for (int g = 0; g < 3; g++){
            cout<<"Masukkan nilai matriks B :";
            cin>>B[f][g];
        }
    }
    cout<<endl;

    //kode untuk menampilkan matriks B
    cout<<"========|matriks B|========"<<endl;
    for (int f = 0; f < 3; f++){
        for (int g = 0; g < 3; g++){
            cout<<"| "<<B[f][g]<<" |";
        } cout<<endl;
    }
    cout<<endl;

    //kode untuk menampilkan matriks c yang merupakan hasil matriks a + matriks b
    cout<<"========|Matriks C|========"<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"| "<<A[i][j] + B[i][j]<<" |";
        } cout<<endl;
    }
}
