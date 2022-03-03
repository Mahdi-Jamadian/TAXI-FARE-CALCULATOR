#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int main(void) {
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    printf("TAXI FARE CALCULATOR \n");
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    float beginning,ending,traveled,fare;
    fare = 1.50; /* Fixed taxi fare per kilometer */
    printf("Enter beginning odometer reading=> :   ");
    scanf("%f", &beginning); /* The first kilometer of the taxi */
    printf("Enter ending odometer reading=> : ");
    scanf("%f", &ending); /* The last kilometer of the taxi */
    traveled = ending - beginning; /* Calculate the distance traveled in a taxi. */
    printf("\n \n --------------------------------------\n");
    printf("You traveled a distance of %2.f KM , At %.2f $ per KM , your fare : %.2f $ . ",traveled,fare,traveled*fare);/* Print output for the user. */
    return 0;
}
