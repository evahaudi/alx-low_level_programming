#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    int i, ascii;

    srand(time(NULL)); // initialize the random number generator with the current time

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        // generate a random ASCII code for a lowercase letter, uppercase letter, or digit
        do {
            ascii = rand() % 128;
        } while (!(ascii >= 'a' && ascii <= 'z') && !(ascii >= 'A' && ascii <= 'Z') && !(ascii >= '0' && ascii <= '9'));

        password[i] = (char) ascii; // convert the ASCII code to a character and add it to the password
    }

    password[PASSWORD_LENGTH] = '\0'; // add the null terminator

    printf("%s", password); // output the password

    return 0;
}
