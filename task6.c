#include <stdio.h>
#include <string.h>


struct Mov {
	
    char title[100];
    char genre[100];
    char language[100];
};

int main() {
	
    int n;

    
    printf("Enter the number of movies: ");
    scanf("%d", &n);

    
    struct Mov movies[n];

    
    for (int i = 0; i < n; i++) {
    	
        printf("\nEnter details of movie %d:\n", i+1);
        printf("Title: ");
        scanf("%s", movies[i].title);
        printf("Genre: ");
        scanf("%s", movies[i].genre);
        printf("Language: ");
        scanf("%s", movies[i].language);
    }

   
    printf("\nDetails of all movies:\n");	
    for (int i = 0; i < n; i++) {
    	
        printf("\nMovie %d:\n", i+1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}
