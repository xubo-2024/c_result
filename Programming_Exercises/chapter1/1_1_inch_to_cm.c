/* You have just been employed by MacroMuscle, Inc.(Software for Hard Bodies).
The company is entering the Europen market and wants a program that converts 
inches to centimeters(i inch = 2.54 cm).The company wants the programe set up so
that it prompts the user to enter an inch value . Your assignment is to define the
progrom objectives and to design the program(steps 1 and 2 of the programming process)
*/

#include <stdio.h>

int main(void) 
{
    float inches, centimeters;

    // Prompt the user to enter an inch value
    printf("Enter the length in inches: ");
    scanf("%f", &inches);

    // Convert inches to centimeters (1 inch = 2.54 cm)
    centimeters = inches * 2.54;

    // Display the result
    printf("%.2f inches is equal to %.2f centimeters.\n", inches, centimeters);

    return 0;
}