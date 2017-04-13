// Function that converts roman numbers to integers.

#include "RomanNumberConversion.h"

int romanNumberConversion (char *roman) {

    char c, last = '0';
    unsigned int i, lastCount;
    int aux, sum = 0;

    if (strlen(roman) > 30)
        exit(1);

    for (i = 0; i < strlen(roman); i++) {

        c = roman[i];

        aux = charValue(c);

        if(aux == -1)
            exit(2);

        else
            sum += aux;

        if (c != last) {
            last = c;
            lastCount = 1;
        }

        else {

            if (lastCount != 3)
                lastCount++;

            else
                exit(2);

        }

    }

    return sum;

}

int charValue (char c) {

    switch (c) {

        case 'I':
            return 1;

        default:
            return -1;

    }

}