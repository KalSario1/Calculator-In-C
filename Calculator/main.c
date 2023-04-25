#include "main.h"
#include <stdio.h>


int main()
{
   int results1 = _add(5,6);
   int result2 = _mul(5,6);
   int result3 = _sub(6,5);
   float result4 = _div(6,5);
    printf("%d\n",results1);
    printf("%d\n",result2);
    printf("%d\n",result3);
    printf("%f\n",result4);
    return (0);
}