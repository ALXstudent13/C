#include <stdio.h>
#include <cs50.h>

int main () 
{
    printf ("Minutes to Seconads Converter!\n");
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
