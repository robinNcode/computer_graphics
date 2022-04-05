void animated_circle()
{
    int x,y,i;
    x=getmaxx()/2;
    y=getmaxy()/2;

    while (!kbhit())
    {
        setcolor(rand());
        for (int i=0; i<50; i++)
            circle(x,y,i );
        setcolor(rand());
        for (int j=70; j<120; j++)
            circle(x,y,j);
        setcolor(rand());
        for (int k=140; k<190; k++)
            circle(x,y,k);
        setcolor(rand());
        for (int l=210; l<230; l++)
            circle(x,y,l);
        delay(200);
    }
}
