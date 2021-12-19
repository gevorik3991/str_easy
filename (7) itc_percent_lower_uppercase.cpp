#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
    double a = 0;
    double b = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] <= 'z' && str[i] >= 'a')
            a++;
        else if (str[i] <= 'Z' && str[i] >= 'A')
            b++;
    }
    return a / b;
}
