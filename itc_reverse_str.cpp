#include "str_easy.h"

string itc_reverse_str(string str){
    int i = 1, a = itc_len(str);
    string che = "";
    while(i <= a){
        che = che + str[a-i];
        i++;
    }
    return che;
}
