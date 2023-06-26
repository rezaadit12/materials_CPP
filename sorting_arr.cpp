#include<iostream>
using namespace std;

int main(){
    int input, rumah;
    cout<<"input digit: ";
    cin>>input;

    int arr[input];

    for(int d = 0; d < input; d++){
         cout<<"masukan nilainy: ";
        cin>>arr[d];
    }

    for(int a = 1; a < input; a++){
        for(int b = 0; b < input-a; b++){
            if(arr[b] > arr[b+1]){
                rumah = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = rumah;
            }
        }
        for(int g = 0; g < input; g++){
            cout<<arr[g];
        } cout<<endl;
    }
    for(int c = 0; c < input; c++){
        cout<<"|=============== "<<arr[c]<<" ================|"<<endl;
    }
}