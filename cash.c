#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    int changeDue;
    do
    {
        changeDue = round(get_float("Enter change due: ") * 100);
    }while (changeDue < 0);

    int coins[4] = {25, 10, 5, 1};
    int coinsNeeded = 0;

    for (int i = 0; i <= 3; i++){
        while(changeDue >= coins[i]){
            changeDue -= coins[i];
            coinsNeeded++;
        }
    }
    printf("\n%i", coinsNeeded);
}