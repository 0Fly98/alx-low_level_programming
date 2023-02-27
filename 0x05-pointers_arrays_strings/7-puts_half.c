#include <stdio.h>
#include <string.h>
#include "main.h"
#include <unistd.h>

void puts_half(char *str) {
    int len = strlen(str);
    int start = len % 2 == 0 ? len / 2 : (len + 1) / 2;
    for (int i = start; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

