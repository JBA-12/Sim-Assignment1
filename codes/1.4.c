#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int  main(void) 
{
 
//Q-1.4
//Uniform random numbers
uniform("uni.dat", 1000000);
Mean of uniform
printf("Mean is %lf\n",mean("uni.dat"));
Variance of uniform
printf("Variance is %lf",variance("uni.dat"));
  
  return 0;
  
}
