#include "game_of_life.h"
#include <ctime>

bool game_of_life::slucajna_vrijednost()
{
    int alive = 0;

    return false;
}

bool game_of_life::celija_zauzeta(int i, int j)
{
    if (i == '-') {

        return true;
    }
    else if (j == '*') {

        return false;
    }
}

game_of_life::game_of_life()
{
}

void game_of_life::sljedeca_generacija()
{
}

void game_of_life::iscrtaj()
{
    srand(time(nullptr));

    int display[STUPACA][REDAKA];

    for (int i = 1; i <= REDAKA; i++) {

        for (int j = 1; j <= STUPACA; j+=3) {

            display[i][j] = rand() % 2;   
        }
    }

    int temp[STUPACA][REDAKA];

    int counter = 0;

    for (int i = 1; i <= REDAKA; i++) {

        for (int j = 1; j <= STUPACA; j++) {

            counter = display[i - 1][j] + display[i][j - 1] + display[i + 1][j] + display[i][j + 1];

            if (counter < 2 || counter > 3 ) {

                temp[i][j] = 0;
            }

            else if (counter == 2) {

                temp[i][j] = display[i][j];
            }

            else if (counter == 3) {

                temp[i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= REDAKA; i++) {

        for (int j = 1; j <= STUPACA; j++) {

            temp[i][j] = display[i][j];
        }
    }

    for (int i = 1; i <= REDAKA; i++) {

        for (int j = 1; j <= STUPACA; j++) {

            if (display[i][j] == 1) {

                cout << "*";
            }
            else {

                cout << "-";
            }
        }
        cout << endl;
    }

}
