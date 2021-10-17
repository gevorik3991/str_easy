#include "str_easy.h"

string itc_slice_str(string str, int start, int end){
    long long i = 0, c, a = itc_len(str);
    c = end - start;
    string che = "";
    if(start >= a){
        che = che + str;
        return che;
    }
    if(start <= end){
        while(i <= c){
            che = che + str[start];
            i++;
            start++;
        }
        return che;
    }
    if(end > itc_len(str)){
        while(i <= a){
            che = che + str[start];
            i++;
            start++;
        }
        return che;
    }
}
