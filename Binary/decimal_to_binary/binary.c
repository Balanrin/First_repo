#include <stdio.h>
#include <math.h>

int main (void) {

    int nb_decimal;
    printf("Entrez un nb entier\n");
    scanf("%d", &nb_decimal);

    //traitement du cas des nombres nuls ou negatifs
    if (nb_decimal==0) {
        printf("valeur nulle, egale a 0  quelle que soit la base");
        return 0;
    }
    int positive = 0;
    if (nb_decimal<0){
        nb_decimal = nb_decimal*-1;
    }

    //determiner la puissance de 2 et la longueur du tableau
    int puissance = 1;
    int racine = -1;
    while (nb_decimal >= puissance) {
        puissance *=2;
        racine++;
    }
    printf("tableau de %d elts, val max %d\n", racine+1, puissance-1);
    int tableau [racine+1][3];

    // bloc des variables avant iteration
    int i;
    int j = racine;
    int total = 0;
    int reste = nb_decimal;
    int insert;

    // remplissage du tableau et informations sur le processus
    for ( i=0; i <= racine; i++, j--) {
        int nb_eventuel = pow(2,j);
        tableau [i][1] = j;
        tableau [i][2] = nb_eventuel;
        printf("indice %d", i);
        printf(", digit 2e%d (%d)\n",tableau [i][1], tableau [i][2]);
        insert = reste/nb_eventuel;
        if (insert == 1) {
            reste = reste-nb_eventuel;
            total = total + nb_eventuel;
        }
        tableau[i][0]=insert;
        printf(" nb binaire = %d, total en cours= %d\n", tableau[i][0], total);
    }

    //affichage final du nombre binaire
    printf("\nbinaire : ");
    if (positive==1) {
            printf("- ");
        }
    int k;
    for (k=0; k<=racine; k++){
        printf("%d ", tableau[k][0]);
    }

    return 0;
}
