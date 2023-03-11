# CPaisley
Usage example:

    #include <stdio.h>
    #include "CPaisley.h"
  
    int main(int argc, char **argv) {
    if(argc > 1) {
      //Print a single styled line with a white foreground, a black background, and in bold (the first 1), and with a single new line thereafter (second 1).
      cp_print_single_styled_line(argv[1], CP_WHITE_FG, CP_BLACK_BG, 1, 1);
      
      //Set color indefinitely
      cp_set_foreground_color(CP_WHITE_FG);
      cp_set_background_color(CP_CYAN_BG);
      
      printf("Hello!\n");
      printf("Second line!\n");
      cp_reset();
      
      //Clear the terminal
      cp_clear();
      
      return 0;
     }
    }
