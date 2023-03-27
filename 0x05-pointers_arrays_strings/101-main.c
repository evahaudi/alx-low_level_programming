#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 25
#define VALID_CHARACTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

int main(void)
{
  char password[PASSWORD_LENGTH + 1];
  srand(time(NULL));
  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = VALID_CHARACTERS[rand() % (sizeof(VALID_CHARACTERS) - 1)];
  }
  password[PASSWORD_LENGTH] = '\0';
  printf("%s", password);
  return 0;
}
