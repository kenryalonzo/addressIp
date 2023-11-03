#include <stdio.h>
#include <stdlib.h>
#include "adressip.h"

int main(int argc, char** argv) {

    AdressIP ip;
    printf("Veuiller entrer une adresse ip valide : \n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &ip[i]);
    }

    printf("Voici votre adresse ip: [%s]\n", toString(ip));
    printf("Voici le digit se trouvant a la position 0 : %d\n", getDigit(ip, 0));
    if (conform(ip)) {
        printf("L'adresse IP est conforme.\n");
        printf("Maintenant voyons de quelle classe est votre adressse ip : %s \n", classeChar(ip));
    } else 
        printf("L'adresse IP n'est pas conforme.\n");
    
    return 0;
}