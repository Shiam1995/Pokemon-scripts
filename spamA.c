/* Basically a way to spam a single button, I am using visual boy advance so the "z" corresponds to my the "a" on a controller 
I am using xdotool , I didnt read the documentation so there may be better ways to get the job done , but it works well enough */

#include <stdio.h>
#include <xdo.h>

int main() {
    xdo_t * x = xdo_new(NULL);


    int presses = 0;
    printf("how many times do you want to spam a \n");
    scanf("%i", &presses);
    int i = 0;

    if ( presses >= 2000 )
    {
        presses = 2000;
    }

    printf("Total presses for you is %i\n", presses);


    for (i = 0; i < presses; i++) {
    xdo_enter_text_window(x, CURRENTWINDOW, "z", 500000);
    }


    xdo_free(x);

    return 0;
}
