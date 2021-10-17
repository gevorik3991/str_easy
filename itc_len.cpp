#include "str_easy.h"

long long itc_len(string str)
{
    int k=0, i=0;
    while (str[i] != '\0'){
    k++;
    i++;
    }
    return k;
}
