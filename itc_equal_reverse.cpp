#include "str_easy.h"

bool itc_equal_reverse(string str) {
    bool a = false;
    if (str == itc_reverse_str(str))
        a = true;
    return a;
}
