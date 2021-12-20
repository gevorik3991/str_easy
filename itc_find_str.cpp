#include "str_easy.h"

long long itc_find_str(string str1, string str2)
{
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < itc_len(str1); i++) {
        if (str1[i] == str2[a]) {
            if (a == 0)
                c = i;
            a++;
            b++;
            if (b == itc_len(str2))
                return c;
        }
        else {
            a = 0;
            b = 0;
        }
    }
    return -1;
}
