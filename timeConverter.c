#include <stdio.h>
#include <cs50.h>
// I don't know Why It's not working
int main (void) 
{
    printf ("Time Converter!\n");
    printf ("Selecet What do you want to convert:\n");
    printf ("1. Days to Hours\n");
    printf ("2. Hours to Minutes\n");
    printf ("3. Minutes to Secends\n"); //It's stopping here
    char select = get_char("(type the number of your choice):");
        if (select == 1)
            {
                printf ("Days to Hours Converter!\n");
                int days = get_int("Type number of days: ");

                    if (days > 0)
                        {
                            int d = (days * 24);
                            printf ("%d days is equal %d hours!\n", days, d);
                        }
                    else if (days < 0 || days == 0 )
                        {
                            printf ("Pleas type a reale number!\n");
                        }
                
            }
        else if (select == 2)
            {
                
                printf ("Hours to Minutes Converter!\n");
                int hours = get_int("Type number of hours: ");

                    if (hours > 0)
                        {
                            int d = (hours * 60);
                            printf ("%d hours is equal %d Minutes!\n", hours, d);
                        }
                    else if (hours < 0 || hours == 0 )
                        {
                            printf ("Pleas type a real number!\n");
                        }
            }
        else if (select == 3)
            {

                printf ("Minutes to Secends Converter!\n");
                int minutes = get_int("Type Minutes: ");

                    if (minutes > 0)
                        {
                            int x = (minutes * 60);
                            printf ("%d minutes is equal %d secaonds!\n", minutes, x);
                        }
                    else if (minutes < 0 || minutes == 0 )
                        {
                            printf ("Pleas type real number!\n");
                        }
            }

        
        
}