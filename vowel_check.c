#include <stdio.h>
#include <ctype.h>
int main() {
char alphabet;

printf("Enter a character :");
scanf(" %c", &alphabet);

alphabet = tolower(alphabet);
   if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||
       alphabet == 'o' || alphabet == 'u')
       printf("Word is Vowel");
    else
        printf("Word is Consonent");
    
    return 0;
}
//     char alphabet;
//     char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//     char isvowel = 0;

//     printf("Enter a Character : ");
//     scanf("%c", &alphabet);

//     for (int i = 0; i < 10; i++) {
//        if (alphabet == vowels[i])  {
//        isvowel = 1;
//        break;

//     }
// }

//     if (isvowel)
//        printf("Word is Vowel");
//     else
//        printf("Word is Consonent");
    
//     return 0;   
// }