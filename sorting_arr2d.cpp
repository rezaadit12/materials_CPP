#include<iostream>
using namespace std;

int main(){
    int input, data, rumah;
    cout<<"masukan baris: ";
    cin>>input;
    cout<<"masukan kolom: ";
    cin>>data;
    int arr[input][data];

    for(int a = 0; a < input; a++){
        for(int b = 0; b < data; b++){
            cout<<"masukan angkanya: ";
            cin>>arr[a][b];
        }
    }
    for(int c = 0; c < input; c++){
        for(int d = 0; d < input-c; d++){
            if(arr[c][d] > arr[c+1][d+1]){
                rumah = arr[c][d];
                arr[c][d] = arr[c+1][d+1];
                arr[c+1][d+1] = rumah;
            }
        }
    }

    for(int e = 0; e < input; e++){
        for(int f = 0; f < input; f++){
            cout<<arr[e][f];
        }
        cout<<endl; 
    }
 
}