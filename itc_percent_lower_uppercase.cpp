#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
    double A = 0, a = 0;
    int i = 0, q = itc_len(str);
    while (q >= 0){
        if ((str[i] > 64) && (str[i] < 91)){
            A++;
        }
        else if ((str[i] > 96) && (str[i] < 123)){
            a++;
        }
        i++;
        q--;
    }
    return (A/a*100);
}
