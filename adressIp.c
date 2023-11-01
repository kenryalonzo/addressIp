#include <stdio.h>
#include <stdlib.h>
#include "adressip.h"

int getDigit(AdressIP ip, int i) {
        return ip[i];
}

#include <stdio.h>
#include <stdlib.h>

char* toString(AdressIP ip) {
    char* result = malloc(16 * sizeof(char)); // Allouer de la mémoire pour le résultat
    
    sprintf(result, "%d.%d.%d.%d", ip[0], ip[1], ip[2], ip[3]); // Utilisons la fonction sprintf pour formater la chaîne de caractères
    
    return result;
}

int conform(AdressIP ip) {
    int verif = 1;
    for (int i = 0; i < 4; i++) {
        if (ip[i] < 0 || ip[i] > 255) {
            verif = 0;
            break; // Ajoutez une instruction break pour sortir de la boucle si une valeur est non conforme
        }
    }
    return verif;
}

int inRange(int x, int y, int z) {

    int seTrouve = 1;
    if (x >= y && x <= z) {
        
        seTrouve = 0;
    }
    
}

int classe(AdressIP ip) {

    if (inRange(ip[0], 0, 127)) 
        return 0;
    else if (inRange(ip[0], 128, 191)) 
        return 1;
    else if (inRange(ip[0], 192, 223)) 
        return 2;
    else if (inRange(ip[0], 224, 239))
        return 3;
    else if (inRange(ip[0], 240, 247))
        return 4;
    else
        return 5;  
}

char* classeChar(AdressIP ip) {

    if (classe(ip) == 0)
        return "Classe A";
    else if (classe(ip) == 1)
        return "Classe B";
    else if (classe(ip) == 2)
        return "Classe C";
    else if (classe(ip) == 3)
        return "Classe D";
    else if (classe(ip) == 4)
        return "Classe E";
    else
        printf("Votre entrer ne se trouve dans aucune classe!");
    
}
