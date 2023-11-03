#include <stdio.h>
#include <stdlib.h>
#include "adressip.h"

int getDigit(AdressIP ip, int i) {
        return ip[i];
}

char* toString(AdressIP ip) {
    char* result = malloc(16 * sizeof(char)); // Allouer de la mémoire pour le résultat
    
    sprintf(result, "%d.%d.%d.%d", ip[0], ip[1], ip[2], ip[3]); // Utilisons la fonction sprintf pour formater la chaîne de caractères
    
    return result;
    free(result);
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

    int seTrouve = 0;
    if (x >= y && x <= z) {
        
        seTrouve = 1;
    }

    return seTrouve;
    
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
        return -1;  
}

char* classeChar(AdressIP ip) {

    char* error = "Votre adresse Ip n'est repertorié dans aucune classe!";
    
    switch (classe(ip)) {
    case 0:
        return "Classe A";
        break;
    case 1:
        return "Classe B";
        break;
    case 2:
        return "Classe C";
        break;
    case 3:
        return "Classe D";
        break;
    case 4:
        return "Classe E";
        break;
    default:
        return error;
        break;
    }
}
