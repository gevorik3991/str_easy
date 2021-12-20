#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    int c;
    while (itc_find_str(str1, str2) != -1) {
        string a, b;
        c = itc_find_str(str1, str2);
        for (int i = 0; i < c; i++)
            a += str1[i];
        for (int i = c + itc_len(str2); str1[i] != '\0' ; i++)
            b += str1[i];

        str1 = a + str3 + b;
    }
    return str1;
}
