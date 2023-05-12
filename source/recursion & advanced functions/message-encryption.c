#include <stdlib.h>
#include "encrypt.h"

int main()
{
    char msg[80];
    while(fgets(msg, 80)) {
        encrypt(msg);
        printf("%s", msg);
    }
}