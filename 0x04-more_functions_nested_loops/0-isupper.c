#include "main.h"


int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1; // It is uppercase
    }
    else {
        return 0; // It is not uppercase
    }
}

