#include <stdio.h>
int main() {

  char str[150];
  int vowels=0;
  int consonant=0;
  int digit=0;
  int space=0;




  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // use fgets to get blank space in start of str


  for (int i = 0; str[i] != '\0'; ++i) {



    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {


      ++vowels;
    }


    else if ((str[i] >= 'a' && str[i] <= 'z')) {
      ++consonant;
    }


    else if (str[i] >= '0' && str[i] <= '9') {
      ++digit;
    }


    else if (str[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels:%d", vowels);
  printf("\nConsonants:%d", consonant);
  printf("\nDigits:%d", digit);
  printf("\nWhite spaces:%d", space);


  return 0;
}