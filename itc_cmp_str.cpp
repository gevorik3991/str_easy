#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    string a, b;
    if (itc_len(str1) < num || num < 0)
        return str1;
    for (int i = 0; i < num; i++)
        a += str1[i];
    for (int i = 0; str2[i] != '\0'; i++)
        a += str2[i];
    for (int i = num; str1[i] != '\0'; i++)
        a += str1[i];
    for (int i = 0; i < itc_len(str1); i++)
        b += a[i];
    return b;
}
