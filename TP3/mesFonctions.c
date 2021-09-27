//
// Created by mgent on 20/09/2021.
//

#include <stdio.h>
#include "mesFonctions.h"
void direAge (int age) {
    printf("Vous avez %d ans.\n", age);
}
void direAgeSuivant (int age) {
    direAge(age+1); // réutilisation astucieuse d'une autre procédure
}
int nombreAuCarre(int nb) {
    return nb * nb;
}
