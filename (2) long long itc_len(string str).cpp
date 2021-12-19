#include "str_easy.h"

long long itc_len(string str){
    int a = 0;
    while (str[a] != '\0'){
        a += 1;
    }
    return a;
}
