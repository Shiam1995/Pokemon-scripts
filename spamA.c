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
