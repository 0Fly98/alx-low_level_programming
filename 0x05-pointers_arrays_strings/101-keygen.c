#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define PASSWORD_LENGTH 4

int main(void)
{
    char password[PASSWORD_LENGTH + 1] = {0};
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    const size_t alphabet_size = sizeof(alphabet) - 1;
    srand(time(NULL));

    do {
        for (int i = 0; i < PASSWORD_LENGTH; i++) {
            int random_index = rand() % alphabet_size;
            password[i] = alphabet[random_index];
        }
        password[PASSWORD_LENGTH] = '\0';
    } while (system("./101-crackme password") != 0 || password[PASSWORD_LENGTH] != '\0');

    printf("Generated password: %s\n", password);

    return 0;
}

