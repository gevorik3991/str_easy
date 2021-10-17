#include "str_easy.h"

int itc_count_char_in_str(char ch, string str)
{
    int k = 0, a = itc_len(str);
    while (a >= 0){
        if (str[a] == ch){
            k++;
        }
    a--;
    }
    return k;
}
