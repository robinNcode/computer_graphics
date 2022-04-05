void bamboo()
{
    setcolor(YELLOW);
    rectangle(90, 50, 100, 400);
    setfillstyle(4,WHITE);
    floodfill(91,51,YELLOW);
}

void flagRactangle()
{
    setcolor(GREEN);
    rectangle(100, 50, 300, 170);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(101,51,GREEN);
}

void flagCircle()
{
    setcolor(RED);
    circle(190, 110, 40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(190,110,RED);
}


void flag()
{
    bamboo();
    flagRactangle();
    flagCircle();
}
