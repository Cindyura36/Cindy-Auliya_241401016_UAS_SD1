#include<iostream>
using namespace std;

int main()
{
    int n[200] = {1,...,200};
    int cari, posisi;
    float posisi1;
    int N = 200; flag = 0; low = 0; high = N - 1;
 
    cout << "Jumlah kursi":
    cin >> N;

    do
    {
        posisi1 = (cari - n [low]) / (n[high] - n[low]) * (high - low) + low;
        posisi = floor(posisi1);
        if(n[posisi] == cari)
        {
            flag = 1;
            break;
        }
        if(n[posisi] > cari)
            high = posisi -1;
        else if(data[posisi] < cari)
            low = posisi + 1;
    }
    while(cari > n[low] && cari <= n[high]);
    if(flag == 1)
        
        cout << "Mencari kursi No : " << cari;
        cout << "Status Kursi : " << cari << "Tersedia";;

        else if{
            cout << "Tidak Tersedia" << endl;
        }

        cout << "Opsi : Kursi terdekat yang tersedia adalah No. " << posisi << endl; 


    }