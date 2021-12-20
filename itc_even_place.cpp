#include "str_easy.h"

string itc_even_place(string str) {
    string a;
    if (itc_len(str) < 2)
        return "-1";
    for (int i = 1; i <= itc_len(str); i++){
        if (i % 2 == 0)
            a += str[i - 1];
    }
    return a;
}
