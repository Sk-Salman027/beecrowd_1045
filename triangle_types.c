#include <stdio.h>
#include <stdbool.h>
int main()
{
    // variable declaration
    double A, B, C, temp;
    // take input
    scanf("%lf %lf %lf", &A, &B, &C);
    // swaping decreasing order
    if (A < B)
    {
        temp = A;
        A = B;
        B = temp;
    }
    if (A < C)
    {
        temp = A;
        A = C;
        C = temp;
    }
    if (B < C)
    {
        temp = B;
        B = C;
        C = temp;
    }
    if ((A >= B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((A * A) == (B * B) + (C * C))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((A * A) > (B * B) + (C * C))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A * A) < (B * B) + (C * C))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}