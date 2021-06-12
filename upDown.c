/* Basically a way to move up 2 times then down 2 times , I am using visual boy advance and i made the "u" and "j" mean up and down on a controller 
I am using xdotool , I didnt read the documentation so there may be better ways to get the job done , but it works well enough */

#include <stdio.h>
#include <xdo.h>

int main() {
    xdo_t * x = xdo_new(NULL);


    int presses = 0;
    printf("how many times do you want to go up and down \n");
    scanf("%i", &presses);
    int i = 0;

    if ( presses >= 2000 )
    {
        presses = 2000;
    }

    printf("Total presses for you is %i\n", presses);


    for (i = 0; i < presses; i++) {
    xdo_enter_text_window(x, CURRENTWINDOW, "u", 500000);
    xdo_enter_text_window(x, CURRENTWINDOW, "u", 500000);
    xdo_enter_text_window(x, CURRENTWINDOW, "j", 500000);
    xdo_enter_text_window(x, CURRENTWINDOW, "j", 500000);
    }


    xdo_free(x);

    return 0;
}
