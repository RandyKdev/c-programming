#include <stdio.h>

int main(void) {
    char s[] = "Hsjodi", *p;
    
    for(p = s; *p; p++) 
        --*p; // == --(*p), decrementing the ASCII codes

    puts(s); // Output: Grinch
    
    return 0;
}