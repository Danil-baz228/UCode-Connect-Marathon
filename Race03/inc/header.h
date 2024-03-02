#ifndef HEADER_H
#define HEADER_H

#include <ncurses.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define DELAY1 200000
#define DELAY2 800000

void mx_splash_screen(void);
int mx_strlen(const char*);
int mx_strcmp(const char *s1, const char *s2);
void mx_init_color(void);
void mx_rain(void);
void mx_print_line(int i, char *line);

#endif
