/**

 * print_remaining_days - takes a date and prints how many days are

 * left in the year, taking leap years into account

 * @month: month in number format

 * @day: day of month

 * @year: year

 * Return: void

 */

#include <stdio.h>

#include "holberton.h"

void print_remaining_days(int month, int day, int year)
  
{
  
  int i;
  
  int past;
  

  
  past = 0;
  
  for (i = 1; i <= month; i++)
    
    {
      
      if (i == 2)
	
	{
	  
	  if (year % 4 == 0)
	    
	    {
	      
	      past += 29;
	      
	      continue;
	      
	    }
	  
	  else
	    
	    {
	      
	      past += 28;
	      
	      continue;
	      
	    }
	  
	}
      
      else if (i < 8 && i % 2 == 1)
	
	{
	  
	  past += 31;
	  
	  continue;
	  
	}
      
      else if (i < 7)
	
	{
	  
	  past += 30;
	  
	  continue;
	  
	}
      
      else if (i % 2 == 0)
	
	{
	  
	  past += 31;
	  
	  continue;
	  
	}
      
      else
	
	past += 30;
      
    }
  
  if ((day > past) || (month < 1) || (month > 12) || (day < 1) || (day > 366))
    
    {
      
      printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
      
    }
  
  else
    
    {
      
      if (year % 4 == 0)
	
	{
	  
	  day++;
	  
	  printf("Day of the year: %d\n", day);
	  
	  printf("Remaining days: %d\n", 366 - day);
	  
	}
      
      else
	
	{
	  
	  printf("Day of the year: %d\n", day);
	  
	  printf("Remaining days: %d\n", 365 - day);
	  
	}
      
    }
  
}
