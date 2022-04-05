#include <dos.h>
#include <stdlib.h>
void nightSky(){
    int i, x, y;
    while (!kbhit()) {
      /* color 500 random pixels on screen */
   for(i=0; i<=500; i++) {
       x=rand()%getmaxx();
          y=rand()%getmaxy();
          putpixel(x,y,15);
      }
      delay(500);

      /* clears screen */
      cleardevice();
    }
}
