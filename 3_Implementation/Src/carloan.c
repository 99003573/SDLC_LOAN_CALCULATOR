#include<stdio.h>

void Carloan()

{
double itr,sanctioned,need,inte;
char name[20];
int years;
printf("ENTER PANCARD NUMBER : ");
scanf("%s",name);
printf("ENTER YOUR IT RETURNS: ");
scanf("%lf",&itr);
if(itr<300000)
{
    printf("SORRY! YOU ARE NOT ELIGIBLE ::  ");
    return;
}
else if(itr>=300000 && itr<=800000)
{
    sanctioned = itr/2;
    printf("YOUR SCANCTIONED AMOUNT IS ::  %lf\n",sanctioned);
    printf("AMOUNT YOU NEED: ");
    scanf("%lf",&need);
    
    
    	     while(need>sanctioned)
    	     {
    	         printf("PLEASE ENTER THE AMOUNT BELOW THE SANCTINED AMOUNT");
    	         scanf("%lf",&need);
    	     }
    	     printf("ENTER YEARS: ");
    	     scanf("%d",&years);
    	     inte = 0.009*need;
    	     double emi = (need/(years*12))+inte;
    	     
    	     printf("EMI AMOUNT PER MONTH IS %lf \n" ,emi);
    	    
    	    
    	   
    
}
else
{
    sanctioned = itr*0.8;
    printf("AMOUNT YOU NEED: \n");
    scanf("%lf",&need);
    while(need>sanctioned)
    {
        printf("PLEASE ENTER THE AMOUNT BELOW THE SANCTINED AMOUNT: \n");
        scanf("%lf",&need);
        
    }
    printf("ENTER YEARS: ");
    scanf("%d",&years);
    inte = 0.007*need;
    double emi = (need/(years*12))+inte;
    	     
    printf("EMI AMOUNT PER MONTH IS %lf \n" ,emi);
    	   
}
}


float emi_calc(int age)
{
    if(age<18)
        return(0.00);
    else
        return(1);
}
