/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{ 
  float distance , amount , additionalAmount ;

  printf("Enter distance travelled : ");
  scanf("%f" , &distance);

  if(distance < 30.00)
    amount = distance * 50.00;
  
  else if (distance > 30.00)
  {
    amount = 30.00 * 50.00;
    distance = distance - 30.00;
    additionalAmount =  distance  * 40.00;
    amount = amount + additionalAmount;
  }

  printf("Amount to pay : Rs %.2f" ,  amount);
    
  return 0;
}