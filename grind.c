/* this is a script that will scan and input below 20 (because its a pain when its over 20 to let the controls play out
it will go left and right for a while, by that time it should have found a while pokemon, sometimes the screen will say wild pokemon has
appeared and the controls will still be left and right then it will shift into spamming z which is my attack key, rinse and repeat this works */


#include <stdio.h>
#include <xdo.h>

int main() {
    xdo_t * x = xdo_new(NULL);

    printf("Lets grind\n");


    int i, j, k = 0;
    int grind = 2;
    printf("How many times do you want to grind\n");
    scanf("%i", &grind);

    if (grind >= 20)
    {
      printf("Too high setting grind to 10\n");
      grind = 10;
    }

    printf("Grind = %i\n", grind);

   for ( k = 0; k < grind; k++)
   {
    for (i = 0; i < 5; i++)

    {
    xdo_enter_text_window(x, CURRENTWINDOW, "h", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "h", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "h", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "h", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "h", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "h", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "k", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "k", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "k", 200000);
    xdo_enter_text_window(x, CURRENTWINDOW, "k", 200000);
    }

    for (j = 0; j < 20 ; j++) {
    xdo_enter_text_window(x, CURRENTWINDOW, "z", 500000);
    }
    }




    xdo_free(x);

    return 0;
}
