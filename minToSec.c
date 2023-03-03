#include <stdio.h>

int main(void) 
{
	int minute;
	do 
	{
	    printf("Minutes to Seconds Converter!\n");
       	    printf("Type Minute: ");
	   scanf("%d",&minute);
	}
	 while(minute < 0);
        
	 int x = minute * 60 ;

	printf("%d minute is equal %d second",minute , x);
}
