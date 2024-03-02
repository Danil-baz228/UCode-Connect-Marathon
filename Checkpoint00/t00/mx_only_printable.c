#include <unistd.h> 

void mx_only_printable(void) { 
    char c = '~'; 
 
    while (c >= 32) { 
        write(1, &c, 1); 
        c--; 
    } 
    write(1, "\n", 1); 
} 
