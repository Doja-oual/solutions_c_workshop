#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float s = 0, m;
    printf("veuillez saisir la taille du tableau");
    scanf("%d", &n);

    float *T = calloc(n, sizeof(float));
    if (T == NULL)
    {
        printf("la memoire n'est pas allouée.\n");
        exit(0);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("entre l'element t[%d] :", i + 1);
            scanf("%f", (T + i));
        }

        for (i = 0; i < n; i++)
        {
            s = s + *(T + i);
        }
        m = s / n;
        printf("la moyenne des elements du tableau :%.2f\n", m);
    }
    free(T);
    return 0;
}