#include "str_easy.h"

bool itc_equal_reverse(string str)
{
    string a ;
    a = itc_reverse_str(str);
    if (a == str){
        return 1;
    }
    else{
        return 0;
    }
}
