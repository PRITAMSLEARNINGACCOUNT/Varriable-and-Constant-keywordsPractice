#include <stdio.h>

int main()
{
    int width, length;float width_1,length_2;
    printf("CALCULATING AREA OF A RECTANGLE\n");
    printf("GIVE THE WIDTH HERE\n");
    scanf("%d", &width);
    printf("GIVE THE LENGTH HERE\n");
    scanf("%d", &length);
    printf("THE AREA OF THE RECTANGLE IS %d cm\n",width*length);
    printf("IT'S TIME TO DO THE SAME PROCEDURE IN FLOAT/REAL NUMBER\n");
    printf("SO GIVE THE WIDTH WHICH IS ON FLOAT NUMBER HERE\n");
    scanf("%f", &width_1);
    printf("GIVE THE LENGTH WHICH IS ON FLOAT NUMBER HERE\n");
    scanf("%f", &length_2);
    printf("THE AREA OF THE RECTANGLE WHICH IS ON FLOAT NUMBER IS %f cm",  width_1*length_2);
    return 0;
    }