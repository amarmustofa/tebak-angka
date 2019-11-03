#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include <stdlib.h>


using namespace std;

std::string kataterserah;
std::string scrambleWord;
std::string tebakan;

void mixUp(string)
{
    random_shuffle (scrambleWord.begin(), scrambleWord.end());


}

int main() {

//    string kata = "semarangku";
//    cout << kata.size() << endl;
//    cout << kata[3] << endl;

    int count =1;
    std::cout <<"Masukkan kata :"<<endl;
    std::cin >> kataterserah;

    scrambleWord = kataterserah;
    mixUp(scrambleWord);


    cout<<"Hasil :  "<< scrambleWord<<endl;

//    cout<<"Masukan kata tebakan :"<<endl;
//    cin>> tebakan;

    int i;
    int nyawa = 3;
   // string tebakan;
    for (i=0; i=nyawa; i++){

        cout << "Masukan tebakan: "; cin >> tebakan;
        if (tebakan != kataterserah){
                if(nyawa>1){
            cout << "tebakan salah" << endl;
            nyawa--;
            cout << "sisa nyawa: " << nyawa << endl;
            }   else{
                cout << "sisa nyawa: " << nyawa-1 << endl;
            cout << "game over" << endl;
            break;
            }
        }


        else if (tebakan == kataterserah){
            cout << "jawaban benar" << endl;
            break;
        }

    }



    return 0;
}
