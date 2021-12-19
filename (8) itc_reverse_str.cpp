#include "str_easy.h"

string itc_reverse_str(string str){
    string a;
    for (int i = itc_len(str) - 1; i >= 0; i--)
        a += str[i];
    return a;
}
