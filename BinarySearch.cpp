#include <iostream>
using namespace std;

int arr[20]; //Deklarasi variable global dengan panjang 20
int n; //Deklarasi variable global n untuk menyimpan elemn pada arry
int x; //Sebagai variable yang dicari

void input(){
    int d;
    while (true){
        cout << "Masukan banyaknya elemn pada arry = ";
        cin >> n;
        if (n <= 20){
            break;
        }
    else{
        cout << "\nArray maksimal 20 elemen. \n";
    }
    }
    cout << endl;
    cout << "====================" <<endl;
    cout << "Masukan elemen array" <<endl;
    cout << "====================" <<endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> arr[i];
    }
}

int main(){
    
}