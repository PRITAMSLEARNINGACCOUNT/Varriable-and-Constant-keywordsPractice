#include <stdio.h>
int main()
{
    int principal, rate, years;
    float principal_f1, rate_f1, years_f1;
    printf("GIVE THE PRINCIPAL AMOUNT\n");
    scanf("%d", &principal);
    printf("GIVE THE RATE\n");
    scanf("%d", &rate);
    printf("GIVE THE YEAR'S(TIME)\n");
    scanf("%d", &years);
    printf("NOW PRINT THE TOTAL INTEREST%d\n", (principal * rate * years) / 100);
    printf("SO PER YEAR INTEREST IS %d\n", (principal * rate * years) / 100 / years);
    printf("NOW PRINT THE SUM TOTAL OF PRINCIPAL AMOUNT WITH THE INTEREST %d\n", (principal * rate * years) / 100 + principal);
    printf("NOW IT'S TIME TO DO THE SAME WITH FLOATING POINT NUMBER\n");
    printf("GIVE THE PRINCIPAL AMOUNT IN FLOATING POINT NUMBER\n");
    scanf("%f", &principal_f1);
    printf("NOW GIVE THE RATE OF INTEREST\n");
    scanf("%f", &rate_f1);
    printf("NOW GIVE THE TIME(YEAR'S)(HOW MANY TIME YOU WANT TO GIVE YOUR MONEY TO US\n");
    scanf("%f", &years_f1);
    printf("SO THE INTEREST IS %f\n",(principal_f1 * rate_f1 * years_f1) / 100);
    printf("PER YEAR INTEREST IN FLOATING POINT NUMBER IS %f\n", (principal_f1 * rate_f1 * years_f1)  / 100 / years_f1);
    printf("NOW THE SUM TOTAL OF PRINCIPAL AND TOTAL INTEREST AMOUNT IS %f\n", (principal_f1 * rate_f1 * years_f1)  / 100 + principal_f1);
}