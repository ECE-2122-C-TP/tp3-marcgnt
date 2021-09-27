#include "mesfonctions.h"
#include<stdio.h>



/*

 int main() {
    direAgeSuivant(21);
    return 0;
}
*/

/*
void plusGrandEntier () {
    int a = 0, b= 0;
    printf("saisir entier a:\n");
    scanf( "%d",&a);
    printf("saisir entier b:\n");
    scanf( "%d",&b);
    if (a<b) {
        printf("entier plus grand est : b");
    }
    else if (b==a) {
            printf("les entiers sont égaux");
    }
    else {
        printf("les entiers le plus grand est a");
    }

}

int main() {
    plusGrandEntier();
    return 0;
}
*/
/* ex2
int main () {

    int l = 0, L = 0, P = 0, A = 0;
    printf("saisir longueur/ \n");
    scanf( "%d", &l);
    printf("saisir largeur/ \n");
    scanf( "%d", &L);
    P = (l+L)*2 ;
    printf("le périmètres est %d \n", P );
    A = (l*L);
    printf("l'air est %d\n",A);
    return 0 ;


}
*/

/* ex3
int main (){

    int a = 0 ;
    const b = 3;
    printf("entrer un entier: \n");
    scanf("%d",&a);
    if ((a % b) == 0 ) {
        printf("l'entier %d est multiple de %d\n", a,b);
    }
    if (a >= 10) {
        printf("l'entier %d est supérieur à 10\n", a);
    }
    return 0;
}
*/

/* ex4
int main (){
    int a = 0, e = 0;
    printf("entrer 1 si étudiant de moins de 27 ans, entrer 0 sinon:\n");
    scanf( "%d", &e);
    printf("âge ? \n");
    scanf( "%d", &a);
    if (a <= 12) {
        printf("prix = 4€\n");
    }
    if (  ( a>12 , a<=17) ||  e==1  ) {
        printf("prix = 6€\n");
    }
    if (a>=65){
    printf("prix =6€\n");
    }
    else {
        printf("prix = 9€\n");
    }
    return 0;
}
*/

/*ex5
int main (){

    int a = 0;
    printf("choisir boisson 1,2,3,10,11 :\n");
    scanf("%d",&a);
    if (a==1) {
        printf("coca cherry\n");
    }
    if (a==2) {
        printf("ice tea\n");
    }
    if (a==3) {
        printf("oasis\n");
    }
    if (a==10) {
        printf("café court\n");
    }
    if (a==11) {
        printf("café long\n");
    }
    else{
        printf("erreur");
    }
    return 0;
}
*/

/*ex6
int main(){

    float a=0 , b=0 , c=0, m=0 ;
    printf("saisir une note : \n");
    scanf("%f", &a);
    while(a<0 || a>20){
        printf("entrer note entre 0 et 20");
        scanf( "%f",&a);
    }
    printf("saisir une note : \n");
    scanf("%f", &b);
    while(b<0 || b>20){
        printf("entrer note entre 0 et 20");
        scanf( "%f",&b);
    }
    printf("saisir une note : \n");
    scanf("%f", &c);
    while(c<0 || c>20){
        printf("entrer note entre 0 et 20");
        scanf( "%f",&c);
    }

    m = (a+b+c)/3;
    printf("moyenne = %f",m);
    return 0;


}
*/

/*ex7
int main (){
    int nbClasseOuverte = 0 , nbEleves = 0 ,nbTotalEleves = 0, i=1 ;
    printf("nombres classe crééer ? \n");
    scanf( "%d", &nbClasseOuverte);
    while(i<=nbClasseOuverte) {

        printf("nombres élèves classe %d ? \n",i);
        scanf("%d", &nbEleves);
        nbTotalEleves = nbTotalEleves + nbEleves;
        i=i+1;
    }
    printf("il y a %d élèves",nbTotalEleves);
    return 0;
}
*/

/*ex8
int main(){
    int n=0;
    printf("saisir en entier n :\n");
    scanf( "%d", &n);
    while( !(n % 2 == 0 && n % 7 == 0) ){
        printf("saisir un autre entier:\n");
        scanf("%d", &n);
    }
    printf("multiple de 7 et de 2 : %d",n);
    return 0;

}
 */

/*ex9
int main (){
    int nbCubes = 0, i=0;
    printf("saisir nb de cubes:\n");
    scanf("%d",&nbCubes);
    while (nombreAuCarre(i)<=nbCubes){
        i=i+1;
    }
    printf("nb d'étages possible = %d\n",i-1);
    return 0;
}
 */

/*ex10
int main (){
    float n=0,i=0,s=0,m=0;

    while(n>=0) {
        printf("saisir entier n (entier négatif pour arrêter):\n");
        scanf( "%f", &n);
        m=(s/i);
        i = i + 1;
        s = s + n;
    }
    printf("moyenne des entiers saisis est:\n%f",m);

    return 0;

}
 */