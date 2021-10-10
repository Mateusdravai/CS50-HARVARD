#include <cs50.h>
#include <stdio.h>




int main(void)
{

 //Variables
 int initialPopulation;
 int growthPopGoal; //That's the point the initial pop need's to reach.
 int finalPop;
 int years;

 //Collect the initial population in the first loop and the population to reach in the second one.
 do
 {
  initialPopulation = get_int("What's the initial population? ");
  finalPop = initialPopulation;
 }
 while(initialPopulation < 9);

 do
 {
  growthPopGoal = get_int("What's the final population? ");
 }
 while(growthPopGoal < initialPopulation);

//A loop that calculates the population growth through the years till the former reach the goal.
for(years = 0; finalPop < growthPopGoal; years++ )
{
 finalPop = finalPop +((finalPop / 3) - (finalPop / 4));
}

printf("Initial Pop: %i\n", initialPopulation);
printf("Pop to be reached: %i\n", growthPopGoal);
printf("Final Pop: %i\n", finalPop);
printf("Years tooked: %i\n", years);
}
