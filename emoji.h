void face(){
    setcolor(YELLOW);
    circle(200,200, 80);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(201,201,YELLOW);
}

void leftEye(){
    setcolor(BLACK);
    circle(170,170, 15);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(170,170,BLACK);

}

void rightEye(){
    setcolor(BLACK);
    circle(230,170, 15);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(231,171,BLACK);

}

void teeth(){
    setcolor(WHITE);
    ellipse(200,200,180,0,50,30);
    ellipse(200,200,180,0,50,50);
    setfillstyle(SLASH_FILL,WHITE);
    floodfill(202,235,WHITE);

}

void emoji()
{
    face();
    leftEye();
    rightEye();
    teeth();
}

