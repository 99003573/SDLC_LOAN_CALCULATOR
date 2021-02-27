#include <stdio.h>
#include <stdlib.h>

#include "Goldloan.h"
#include "Carloan.h"

void Goldloan();
void Carloan();
int main()
{
	 char name[20];
	 
	 printf("enter name:");
	 scanf("%s", name);
	int pass=1;	  
        while(pass)
        {   
	   int count =0;
           int length = strlen(name);
           for(int i=0;i<length;i++)
        {
            if((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122))
        {
        	continue;
		}
		else
		{
			count++;
			
		}
        }
             if(count!=0)
        {
            printf("Invalid Name Please enter a valid one : ");
            scanf("%s",name);
        }
         else
        {
            pass=0;
        }
    } 
	 int age;
	printf("Enter age:\n");
	scanf("%d",&age);
	   
	   int count=1;
	   while(count)
	   {
	   	if(age<18)
	   	{
	   		printf("Not eligible: ");
	   		scanf("%d",&age);
		}
		else
		{
			count=0;
		}
	   }
	   int value;
	   printf("1. Gold Loan\n");
	   printf("2.Car Loan\n");
	   printf("choose : \n");
	   scanf("%d",&value);
	   switch(value){
            case 1:
            Goldloan();
            break;
            case 2:
            Carloan();
            break;
            
            default:
            	printf("Invalid");
            
        }
	   
	   
	    return 0;
}
