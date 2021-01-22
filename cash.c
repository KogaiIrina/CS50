#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    float change;
    int counter;
    
    do
    {
        change = get_float("How much change is owed?\n");
    }
    while (change < 0);
    
    int cents = round(change * 100);
    printf("Your chanse is: %i\n", cents);
    
    float forQuaters = (float) cents / (float) quarters;
    counter = forQuaters;
    int difference1 =  cents - (counter * quarters);
   

    float forDimes = (float) difference1 / (float) dimes;
    int newCounter = (int) forDimes;
    counter += newCounter;

    int difference2 = difference1 - (newCounter * dimes);
    float forNickels = (float) difference2 / (float) nickels;
    int newCounter2 = (int) forNickels;
    counter += newCounter2;
    
    int difference3 = difference2 - (newCounter2 * nickels);
    float forPennies = (float) difference3 / (float) pennies;
    counter += (int) forPennies;
   
    printf(" %i\n", counter);
}