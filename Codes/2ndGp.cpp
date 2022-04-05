#include<iostream>
#include<graphics.h>

int main(){
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");
    /*line(150, 100, 250, 100);
    line(250, 100, 250, 200);
    line(250, 200, 150, 200);
    line(150, 200, 150, 100);*/

    rectangle(150, 150, 450, 450);

    getch();
    closegraph();

    return 0;
}
