#include<stdio.h>
void Goldloan()
{
	            int grams,years;
    	            printf("Enter weight in grams \n");
    	            scanf("%d",&grams);
    		    printf("Enter time in years \n");
    		    scanf("%d",&years);
        	    int  months;
        	    double need;
        	    int months1=years*12;
        	    double amount = grams*2300;
        	  
        	    
        	    
        	    
        	    printf("Sanctioned loan amount is %lf \n",amount);
        	    printf("Amount you need ");
        	    scanf("%lf",&need);
        	    
        	     double inte = 0.009*need;
        	     while(need>amount)
        	     {
        	         printf("Please enter the amount below the sanctioned amount");
        	         scanf("%lf",&need);
        	     }
        	    double emi = (need/months1)+inte;
        	     
        	    printf("EMI amount per month is %lf \n" ,emi);
        	   
	    }
