/*

The mass of a single molecule of water is about 3.0e-23 grams.A quart of water is 
about 950 grams.Write a programe that requests an amount of water,in quarts,and
displays the number of water molecules in that amount.

1\ a single molecule of water = 3.0e-23 grams

2\ a quart of water = 950 grams

3\ input (amount of water in quarts)

4\ output(the number of molecules in that amount)

*/

#include<stdio.h>
int main(void)
{
    double amount_of_water_in_quart;
    double molecules_in_that_amount;
    double grams_in_the_amount_of_water;

    const double grams_in_a_single_molecule = 3.0e-23;
    const double grams_in_a_quart_of_water = 950;

    printf("I request an amount of water in quarts:");
    scanf("%lf",&amount_of_water_in_quart);

    grams_in_the_amount_of_water = amount_of_water_in_quart * grams_in_a_quart_of_water;
    molecules_in_that_amount = grams_in_the_amount_of_water/grams_in_a_single_molecule;
    
    printf("The number of molecules in that amount is %.2e", molecules_in_that_amount);

    return 0;

}
