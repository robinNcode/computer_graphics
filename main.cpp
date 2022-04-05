#include <iostream>
#include<graphics.h>
#include "name.h"
#include "emoji.h"
#include "flag.h"
#include "animated_circle.h"
#include "bar_chart.h"
#include "exit_out.h"
//#include "night_sky.h"

using namespace std;

bool stayInProgram = true;

void pattern(string input)
{
    cout<<"-----     "<<input<<endl;
}

void invoke(void (*func)())
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    exit_output();
    func();

    getch();
    closegraph();

}

int main()
{
    int x;
    while(stayInProgram)
    {
        cout<<"Computer Graphics Project"<<endl;
        pattern("1. My Name");
        pattern("2. Flag");
        pattern("3. Emoji");
        pattern("4. Animated Circle");
        pattern("5. Bar Chart");
        pattern("6. Exit");

        pattern("Enter a Number to Get a 2D Graphical Image");
        cin>>x;

        switch(x)
        {
        case 1:
            invoke(&robin);
            break;
        case 2:
            invoke(&flag);
            break;
        case 3:
            invoke(&emoji);
            break;
        case 4:
            invoke(&animated_circle);
            break;
        case 5:
            invoke(&bar_chart);
            break;
        default:
            stayInProgram = false;
            break;
        }

    }

    return 0;
}
