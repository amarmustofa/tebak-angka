#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;
void randnum();

int main()
{
    int nilai;
    int nl_random;
    srand(time(NULL));


    cout << "Masukan maksimal nilai (10-100): " ;
    cin >> nilai;
    nl_random=rand()%nilai;
    cout << "CHEAT! Nilai random: " << nl_random << endl ;

    if (nilai < 10){
        cout << "\nNilai yang dimasukan kurang dari 10" << endl;
    }
    else if (nilai > 100){
        cout << "\nNilai yang dimasukan lebih dari 100" << endl;
    }


    int i;
    int nyawa = 3;
    int nl_tebakan;
    for (i=0; i=nyawa; i++){

        cout << "Masukan tebakan: "; cin >> nl_tebakan;
        if (nl_tebakan < nl_random){
                if(nyawa>1){
            cout << "tebakan terlalu kecil" << endl;
            nyawa--;
            cout << "sisa nyawa: " << nyawa << endl;
            }   else{
                cout << "sisa nyawa: " << nyawa-1 << endl;
            cout << "game over" << endl;
            break;
            }
        }
        else if (nl_tebakan > nl_random){
             if(nyawa>1){
            cout << "tebakan terlalu besar" << endl;
            nyawa--;
            cout << "sisa nyawa: " << nyawa-1 << endl;
            }   else{

            cout << "game over" << endl;
            break;
            }
        }

        else if (nl_tebakan == nl_random){
            cout << "jawaban benar" << endl;
            break;
        }

    }


    return 0;
}
