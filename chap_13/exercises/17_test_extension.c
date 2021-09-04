#include<stdbool.h>

bool test_extension(const char *file_name, const char *extension) {
    const char *p = file_name;

    while(*file_name) {
        if(*file_name == '.') p = file_name;
        file_name++;
    }

    p++;

    while (*p) {
        if(toupper(*p) != toupper(*extension)) return false;
    }

    return true; 
}