#include "str_easy.h"

void itc_first_end_three(string str)
{
    int a = itc_len(str);
    if (a <= 5){
        while (a > 0){
            cout << str[0];
            a--;
        }
    }
    else{
        int b = itc_len(str);
        cout << str[0] << str[1] << str[2] << str[b-3] << str[b-2] << str[b-1];
    }
}
