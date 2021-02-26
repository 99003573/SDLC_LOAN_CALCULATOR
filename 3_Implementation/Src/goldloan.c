#include <stdio.h>
int main()
{
    float loanval, emi, grams, basevalue, val, intrest;
    int carat;
    printf("enter the gold weight in gms");
    scanf("%f", &grams);
    printf("enter the carat value 18 | 20 | 21 | 22 | 24");
    scanf("%d", &carat);
    printf("enter the intrest value");
    scanf("%f", &intrest);
    printf("enter the basevalue");
    scanf("%f", &basevalue);
    if (carat >= 18 && carat <= 24)
    {
        val = (carat/24)*basevalue;
        
        basevalue = val - basevalue;
        loanval = grams * basevalue;
        printf("%f",val);
    }
    
    return 0;
}
