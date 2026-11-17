#include <stdio.h>

void cube(float* px)
{
    *px = (*px) * (*px) * (*px);
}

int main(void)
{
    float x = 2.0;
    printf("До:    %.2\n", x);
    cube(&x);
    printf("После: %.2\n", x);

    float y = 3.0;
    cube(&y);
    printf("3^3 = %.2\n", y);

    return 0;
}
