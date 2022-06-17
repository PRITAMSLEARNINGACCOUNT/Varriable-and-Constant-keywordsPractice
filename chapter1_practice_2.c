#include <stdio.h>
int main()
{
    int r, h, r_2;
    float pi=22.0/7.0,r_f,h_f,r_2_f;
    printf("GIVE THE VALUE OF RADIUS\n");
    scanf("%d", &r);
    printf("SO NOW THE AREA OF A CIRCLE IS %f\n", pi*r*r);
    printf("NOW GIVE THE RADIUS OF A CYLINDER\n");
    scanf("%d",&r_2);
    printf("NOW GIVE THE VALUE OF HEIGHT");
    scanf("%d",&h);
    printf("NOW THE VOLUME OF THE CYLINDER IS %f",pi*r_2*r_2*h);
    printf("NOW IT'S TIME TO DO THE SAME IN FLOATING POINT NUMBER\n");
    printf("GIVE A VALUE OF RADIUS IN FLOATING POINT NUMBER\n");
    scanf("%f",&r_f);
    printf("SO NOW THE AREA OF A CIRCLE IS %f\n", pi*r_f*r_f);
    printf("NOW GIVE A VALUE OF A CYLINDER(RADIUS) FLOAT\n");
    scanf("%f", &r_2_f);
    printf("NOW GIVE A VALUE OF A CYLINDER HEIGHT FLOAT\n");
    scanf("%f", &h_f);
    printf("NOW THE VOLUME OF A CYLINDER IN FOATING POINT NUMBER IS %f",pi*r_2_f*r_2_f*h_f);
    return 0;
}
