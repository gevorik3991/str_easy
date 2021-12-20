#include "str_easy.h"

string itc_slice_str(string str, int start, int end)
{
    if (start > end)
        return str;
    string c;
    if (end >= itc_len(str))
        end = itc_len(str) - 1;
    for (int i = start; i != end+1; i++)
        c += str[i];
    return c;
}
