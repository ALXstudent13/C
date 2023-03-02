#include <stdio.h>
#include <cs50.h>

int main () {
    string first = get_string("Type the name of the first one: ");
    int firstAge = get_int("Type His Age: ");
    string second = get_string("Type the name of the second one: ");
    int secondAge = get_int("Type His Age: ");
        if (firstAge > secondAge) {
            printf ("%s is Bigger than %s!\n",first, second);
        }
        else if (firstAge < secondAge) {
            printf ("%s is Bigger than %s!\n",second, first);
        }
        else {
            printf ("They have the same age!\n");
        }
}