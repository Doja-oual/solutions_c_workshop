#include <stdio.h>

int main() {
    int n, i, j, max_count = 0, AG = 0;
    
   
    printf("Entrez le nombre de personnes : ");
    scanf("%d", &n);
    
    int ages[n], count[n];
    
   
    printf("Entrez les âges des personnes :\n");
    for(i = 0; i < n; i++) {
        printf("Âge %d : ", i + 1);
        scanf("%d", &ages[i]);
        count[i] = 0; 
    }
    
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(ages[i] == ages[j]) {
                count[i]++;
            }
        }
    }
    
    
    for(i = 0; i < n; i++) {
        if(count[i] > max_count) {
            max_count = count[i];
            AG = ages[i];
        }
    }
    
    
    printf("L'âge le plus répété est : %d, avec %d occurrences.\n", AG, max_count);
    
    return 0;
}