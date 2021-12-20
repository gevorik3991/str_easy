#include "str_easy.h"

int itc_max_char_on_end(string str) {
    int a = 0, b = 0, c = 0;
    while (str[c] != '\0'){
        if (str[c] >= '0' && str[c] <= '9')
        b++;
        else {
            if (b > a)
               a = b;
            b = 0;
        }
        c++;
    }
    if (b > a)
        a = b;
    return a;
}
