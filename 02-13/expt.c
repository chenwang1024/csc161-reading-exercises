#include <stdio.h>

/* x to the power of y */


float expt(double x, int y)
{
float result = 1;
if (y >= 0){
for (int i = 0; i < y; i++){
  result *= x;
}}
else  {
for (int i = y; i < 0; i ++){
result*= 1/x;
}

}
return result;
}


int main (){

printf("%lf\n",expt(2,3));
printf("%lf\n",expt(0.25,-2));
printf("%lf\n",expt(10.0,0));

return 0;
}

