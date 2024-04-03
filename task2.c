#include <stdio.h>
#include <ctype.h>



int vowel_no(const char *str, char vowel) {
    int count = 0;

    while (*str != '\0') {
        if (tolower(vowel) == tolower(*str) && strchr("aeiou", tolower(*str)) != NULL) {
            count++;
        }

        str++;
        
        
    }

    return count;
}



int main() {
	
    char sent[100], vowel[] = {'a', 'e', 'i', 'o', 'u'};
    int i, j, count;

    printf("Enter a sentence: ");
    fgets(sent, sizeof(sent), stdin);


    for (i = 0; i < 5; i++) {
        count = vowel_no(sent, vowel[i]);


        if (count > 0) {
            printf("Number of %c in the sentence: %d\n", vowel[i], count);
        }
    }



    return 0;
}
