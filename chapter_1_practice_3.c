#include <stdio.h>
int main()
{

    int a;
    float b;
    printf("GIVE THE CELCIOUS");
    scanf("%d", &a);
    printf("NOW THE FARENHITE IS %f", a * (9.0 / 5) + 32);
    printf("GIVE A FLOAT CELCIOUS");
    scanf("%f", &b);
    printf("SO THE FARENHITE IS %f", b * 9 / 5 + 32);
}