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

void bubbleSortArray(){
    int pass =1; //step 1
    do {
        for (int j=0;j<=n-1-pass;j++){ //step 2
            if (arr[j] > arr[j+1]){ //setep 3
            int temp; //mendeklarasiakn varible semtara temporay
            temp = arr[j];
            arr [j] = arr[j+1];
            arr [j+1] = temp;
            }
        }
        pass = pass + 1; //step 4
    }while (pass<=n-1); //step 5
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        cout << arr[j];
        if (j<n-1) {
            cout << " --> ";
        }
    }
}

void binarySearch(){
    char ulang;
    do{
    cout << "\n=======================\n";
    cout << "Pencarian Binary Search\n";
    cout << "=======================\n";
    cin >> x; //step 1

    int low = 0; //step 2
    int high = n - 1; //step 3
do{
    int mid = (low + high) / 2; // step 4

    if (arr[mid] == x){ //step 5
        cout << "\n [✅] Elemen " << x << " ditemukan pada indeks " << mid << endl;//step 5.a
        return; //step 5.b
    }

    if (x < arr[mid]){ // step 6 :  If desired element < arr[mid]
        high = mid - 1; // step 6.a : Set upperbound = mid – 1
    }

    if (x > arr[mid]){ // step 7 :  If desired element > arr[mid]:
        low = mid + 1; // step 7.a : Set lowerbound = mid + 1
    }
}while (low <= high); // step 8 : If lowerbound <= upperbound, Go to step 4

if (low > high){ // step 9 : Display “Not Found”
    cout << "\n[❎] Elemen " << x << " tidak ditemukan dalam array. \n" ;
}
cout << "Ingin mencari lagi ?? (y/n) : ";
cin >> ulang;
}while (ulang == 'y'  || ulang == 'Y'); 
}

int main(){
    
}