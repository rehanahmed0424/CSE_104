#include <stdio.h>

void getInput()
{
    printf("Enter The Radius : "); //displays what input to put

}
float getPi() // value of pi
{
    return 3.1416;
}
float getArea(float r) // returns area
{
    return getPi()*r*r;

}

float getVolume(float r) // returns volume
{
    return (4/3)*getArea(r)*r;
}


int main()
{
    getInput();
    float r;
    scanf("%f", &r);
    printf("\n");
    float area = getArea(r); //calling area
    printf("The Area is %f\n\n", area); // prints area

    float volume = getVolume(r); // calling area
    printf("The Volume is %f\n", volume); // prints area


    return 0;
}


