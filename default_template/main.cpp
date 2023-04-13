
#include <iostream>
#include <raylib.h>
using namespace std;
int main()
{  //this is to open a window and initwindow( the horizontal pixel , the vertical pixel , the name of the window)
    InitWindow(1280,720,"your epic code");

  
    
// this while loop is to keep the window open and to  render stuff
while(!WindowShouldClose())
{    BeginDrawing();
    
    //drawtext(text,x aixs,y axis,fontsize , color)
     DrawText("look at me i am a REAL TEXT HELLO WORLD :D",400,300,20,PINK);


    
    //this to make a background ClearBackground(color)
     ClearBackground(YELLOW);

    //this is to render fps drawfps(x axis,y axis)
    DrawFPS(10,10);
    

    EndDrawing();

}
   
  

}