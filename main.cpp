#include <iostream>
#include<graphics.h>
#include "emoji.h"
#include "flag.h"
#include "animated_circle.h"
#include "exit_out.h"
#include "night_sky.h"
#include "hut.h"
#include "clock.h"

using namespace std;

bool stayInProgram = true;

void pattern(string input)
{
    cout<<"\t\t\t"<<input<<endl;
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
        cout<<"\t\t\t<<<<<<<<<< Computer Graphics Project >>>>>>>>>>>"<<endl;
        cout<<"\t\t\t<<<<<<<<<<       CSE1901016113       >>>>>>>>>>>"<<endl;
        cout<<"\t\t\t************************************************"<<endl;
        pattern("1. Digital Clock");
        pattern("2. Flag");
        pattern("3. Emoji");
        pattern("4. Animated Circle");
        pattern("5. My Hut");
        pattern("6. Exit");

        cout<<"Enter an option :";
        cin>>x;

        switch(x)
        {
        case 1:
            invoke(&digitalClock);
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
            invoke(&myHut);
            break;
        default:
            stayInProgram = false;
            break;
        }

    }

    return 0;
}
