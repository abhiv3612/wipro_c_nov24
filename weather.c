#include <stdio.h>

int main() {
    char raining = 'r', sunny = 's', cloudy = 'c';
    char weather1, weather2;

    printf("Enter the first weather condition (r for raining, s for sunny, c for cloudy): ");
    scanf(" %c", &weather1);

    printf("Enter the second weather condition (r for raining, s for sunny, c for cloudy): ");
    scanf(" %c", &weather2);

    if ((weather1 == sunny && weather2 == sunny) || (weather1 == sunny && weather2 == raining))
        printf("You can go out!\n");
    else
        printf("It's not safe to go out. Please stay indoors.\n");

}
