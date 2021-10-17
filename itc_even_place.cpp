#include "str_easy.h"

string itc_even_place(string str)
{
    int a = itc_len(str), i = 1;
    string b = "";
    while (i < a){
        b = b + str[i];
        i += 2;
    }
    return b;
}
