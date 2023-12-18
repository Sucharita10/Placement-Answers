1. (d) 21
2.(d) None 
3.
4.(b) Prints : Jan is the first month
5.
#include <stdio.h>
int main()
{
    int a, b;
    float quotient;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    quotient = (float)a / b;
    printf("The quotient is: %f\n", quotient);
    return 0;
}
6.
// C program to draw circles
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm; // declare graphics driver and mode variables
    initgraph(&gd, &gm, ""); // initialize graphics mode and driver
    setcolor(WHITE); // set the color of the circles to white
    circle(100, 100, 50); // draw a circle with center at (100, 100) and radius 50
    circle(200, 200, 75); // draw a circle with center at (200, 200) and radius 75
    circle(300, 300, 100); // draw a circle with center at (300, 300) and radius 100
    getch(); // wait for a key press
    closegraph(); // close the graphics mode
    return 0; // return 0 to indicate successful termination
}
