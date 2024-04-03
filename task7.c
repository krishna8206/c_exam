#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputf, *outputf;
    char sentence[100];

    
    inputf = fopen("input.txt", "r");
    if (inputf == NULL) {
        printf("Error: Could not open input file\n");
        exit(1);
    }

    
    outputf = fopen("output.txt", "w");
    
    
    if (outputf == NULL) {
        printf("Error: Could not open output file\n");
        fclose(inputf);
        exit(1);
    }

    
    fgets(sentence, sizeof(sentence), inputf);

  
    fprintf(outputf, "%s", sentence);

    
    
    fclose(inputf);
    fclose(outputf);

    printf("Successfully read sentence from input.txt and wrote it to output.txt\n");

    return 0;
}
