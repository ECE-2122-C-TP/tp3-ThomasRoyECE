#include <stdio.h>
// Exercice 1//
/*
int main() {
    int a=0,b=0;
    printf("Insérer un entier a:", a);
    scanf("%d",&a);
    printf("Insérer un entier b:", b);
    scanf("%d",&b);
    if(a<=b){
        printf("Le plus grand entier est %d\n",b);
        return 0;
    }
    printf("Le plus grand entier est %d\n",a);
    return 0;
}
*/
//Exercice 2
/*
int main() {
    int longueur=0,largeur=0,perimetre=0,aire=0;
    printf("Insérer la longueur:", longueur);
    scanf("%d",&longueur);
    printf("Insérer la largeur:", largeur);
    scanf("%d",&largeur);
    perimetre =(2*longueur)+(2*largeur);
    aire=longueur*largeur;
    printf("Le périmètre vaut %d et l'aire vaut %d",perimetre,aire);
    return 0;
}
*/
//Exercice 3
/*
int main() {
    int a = 0;
    const int b = 3;
    printf("Insérer un entier:", a);
    scanf("%d", &a);
    if (a % b == 0) {
        printf("L'entier saisi est un multiple de 3.");
    } else {
        printf("L'entier saisi n'est pas un multiple de 3.");
    }
    if (a >= 10) {
        printf("L'entier saisi est supérieur ou égal à 10.");
    } else {
        printf("L'entier saisi n'est pas supérieur ou égal à 10.");
    }
    return (0);
}
*/
//Exercice 4
/*
int main() {
    int age = 0, etudiant=0;
    printf("Insérer l'âge de l'individu:", age);
    scanf("%d", &age);
    printf("Insérer 1 si l'induvidu est étudiant, 0 sinon:", etudiant);
    scanf("%d", &etudiant);
    if (age < 12) {
        printf("Le billet est un billet enfant et coûte 4 euros.");
        return (0);
    }
    if ((age <= 27 && etudiant==1)||(age>=12 && age<=17)) {
        printf("Le billet est un billet jeune et coûte 6 euros.");
        return (0);
    }
    if (age>=65){
        printf("Le billet est un billet sénior et coûte 6 euros.");
        return (0);
    }
    else
        printf("Le billet est un billet plein tarif et coûte 9 euros.");
        return (0);
}
*/
//Exercice 5
/*
int main() {
    int numeroBoission;
    printf("Insérer le numéro de la boisson:", numeroBoission);
    scanf("%d", &numeroBoission);
    if (numeroBoission == 1 ||numeroBoission == 2 || numeroBoission == 3) {
        printf("La boisson choisie est la boisson froide %d\n", numeroBoission);
        return (0);
    }
    if (numeroBoission == 10 ||numeroBoission == 11) {
        printf("La boisson choisie est la boisson chaude %d\n", numeroBoission);
        return (0);
    }
    else
        printf("Le numero que vous venez de composer n'est pas attribué.");
    return (0);
}
*/
//Exercice 6
/*
int main(){
    int note1,note2,note3,moyenne;
    printf("Insérer la première note:");
    scanf("%d", &note1);
    while (note1  < 0 || note1> 20)
    {
        printf("La note saisie n'est pas valide, recommencez.\n");
        scanf("%d", &note1);
    }
    printf("Insérer la deuxième note:");
    scanf("%d", &note2);
    while (note2 < 0 || note2 > 20)
    {
        printf("La note saisie n'est pas valide, recommencez.\n");
        scanf("%d", &note2);
    }
    printf("Insérer la dernière note:");
    scanf("%d", &note3);
    while (note3 < 0 || note3 > 20)
    {
        printf("La note saisie n'est pas valide, recommencez.\n");
        scanf("%d", &note3);
    }
    moyenne= (note1+note2+note3)/3;
    printf("La moyenne des 3 notes vaut %d\n", moyenne);
    return (0);
}
*/
//Exercice7
/*
int main() {
    int nombreClasse=0,nombreEleve=0,eleveClasse=0;
    printf("Insérer le nombre de classe :", nombreClasse);
    scanf("%d", &nombreClasse);
    while (nombreClasse > 0 ){
        printf("Saisir le nombre d'élèves dans la classe",eleveClasse);
        scanf("%d", &eleveClasse);
        nombreClasse = nombreClasse-1;
        nombreEleve = nombreEleve + eleveClasse;
    }
    printf("Il y a un total de %d\n élèves ", nombreEleve );
    return (0);
}
*/
//Exercice8
/*
int main() {
    int multipleDeuxSept=0;
    printf("Insérer un entier.\n");
    scanf("%d", &multipleDeuxSept);
    while (!(multipleDeuxSept % 2 == 0 && multipleDeuxSept % 7 ==0))
    {
        printf("L'entier saisi n'est pas ni un multiple de 2 ET de 7.\n");
        scanf("%d", &multipleDeuxSept);
    }
    printf("%d est un multiple de 2 et de 7", multipleDeuxSept );
    return (0);
}
*/
//Exercice9
/*
int main() {
    int nombrePierre=0,nombreEtage=0,pierreUtilise=0,pierreParEtage=1;
    printf("Insérer le nombre de pierre.\n");
    scanf("%d", &nombrePierre);
    while (nombrePierre>=pierreParEtage)
    {
        pierreUtilise=pierreUtilise+pierreParEtage;
        nombreEtage=nombreEtage+1;
        nombrePierre=nombrePierre-pierreParEtage;
        pierreParEtage = (nombreEtage+1) * (nombreEtage+1);
    }
    printf("Avec ce nombre de pierre, nous pouvons construire %d étage", nombreEtage );
    return (0);
}
*/
//Exercice10
/*
int main() {
    int entierPositif = 0, increment = 0;
    float moyenne = 0;
    while (entierPositif >= 0) {
        printf("Saissez un entier positif (négatif pour stopper).\n");
        scanf("%d", &entierPositif);
        if (entierPositif >= 0)
        {
            increment = increment + 1;
            moyenne = moyenne + entierPositif;
        }
    }
    moyenne = moyenne / increment;
    printf("La moyenne des entiers saisis est %f", moyenne);
    return (0);
}
*/
