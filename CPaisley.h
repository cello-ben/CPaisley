//Copyright 2023 Benjamin R. Fryxell
//Description: A simple library for making color printing a little bit easier.


#include <stdio.h>

#define CP_BLACK_FG "\033[30m"
#define CP_RED_FG "\033[31m"
#define CP_GREEN_FG "\033[32m"
#define CP_YELLOW_FG "\033[33m"
#define CP_BLUE_FG "\033[34m"
#define CP_MAGENTA_FG "\033[35m"
#define CP_CYAN_FG "\033[36m"
#define CP_WHITE_FG "\033[37m"
#define CP_DEFAULT_FG "\033[39m"

#define CP_BLACK_BG "\033[40m"
#define CP_RED_BG "\033[41m"
#define CP_GREEN_BG "\033[42m"
#define CP_YELLOW_BG "\033[43m"
#define CP_BLUE_BG "\033[44m"
#define CP_MAGENTA_BG "\033[45m"
#define CP_CYAN_BG "\033[46m"
#define CP_WHITE_BG "\033[47m"
#define CP_DEFAULT_BG "\033[49m"

#define CP_BOLD "\033[1m"

#define CP_RESET "\033[0m"
#define CP_CLEAR "\e[1;1H\e[2J"

static inline void cp_print_single_styled_line(char *text, char *fg_color, char *bg_color, int bold, int trailing_newlines) {
    if(bold > 0) printf("%s", CP_BOLD);
    printf("%s%s%s%s", fg_color, bg_color, text, CP_RESET);
    for(int i = 0; i < trailing_newlines; i++) printf("\n");
}

//Two needed?

static inline void cp_set_foreground_color(char *fg_color) {
    printf("%s", fg_color);
}

static inline void cp_set_backround_color(char *bg_color) {
    printf("%s", bg_color);
}

static inline void cp_set_bold() {
    printf("%s", CP_BOLD);
}

static inline void cp_clear() {
    printf("%s", CP_CLEAR);
}

static inline void cp_reset() {
    printf("%s", CP_RESET);
}
