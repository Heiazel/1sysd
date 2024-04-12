#include <stdio.h>
#include <stdlib.h>

// Fonction pour calculer le périmètre d'un cercle
float P(float r) {
float p;
p = 2 * 3.14159 * r;
return p;
}

// Fonction pour calculer la surface d'un disque
float S(float r) {
float s;
s = 3.14159 * r * r;
return s;
}

int main() {
float rayon, perimetre, surface;

printf("Entrez la valeur du rayon : ");
scanf("%f", &rayon);

perimetre = P(rayon);
surface = S(rayon);

printf("Le périmètre du cercle est : %.2f\n", perimetre);
printf("La surface du disque est : %.2f\n", surface);

return 0;
}
