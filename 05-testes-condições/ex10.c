#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DESCONTO_FUNCIONARIO 0.1
#define DESCONTO_VIP 0.05

int main(){
    // valores antes e depois do desconto (se houver)
    float valorAntes, valorDepois;
    char codigo;
    
    scanf("%f %c", &valorAntes, &codigo);
    
    // USANDO OPERADOR TERNÁRIO 1
    // valorDepois = valorAntes - valorAntes * ((codigo == 'f' || codigo == 'F') ? DESCONTO_FUNCIONARIO : ((codigo == 'v' || codigo == 'V') ? DESCONTO_VIP : 0));
        
    // USANDO SWITCH-CASE 1
    // switch(codigo){
    //     case 'f':
    //     case 'F':
    //         valorDepois = valorAntes * (1 - DESCONTO_FUNCIONARIO);
    //         break;
    //     case 'v':
    //     case 'V':
    //         valorDepois = valorAntes * (1 - DESCONTO_VIP);
    //         break;
    //     case 'c':
    //     case 'C':
    //         valorDepois = valorAntes;
    //         break;
    //     default:
    //         return 1;
    // }
     
    // tolower(c) --> transforma o char c em minúsculo
    // toupper(c) --> transforma o char c em maiúsculo
    // char codigoMin = tolower(codigo);
    
    // USANDO OPERADOR TERNÁRIO 2
    // valorDepois = valorAntes - valorAntes * ((tolower(codigo) == 'f') ? DESCONTO_FUNCIONARIO : ((tolower(codigo) == 'v') ? DESCONTO_VIP : 0));
    
    // USANDO SWITCH-CASE 2
    switch(tolower(codigo)){
        case 'f':
            valorDepois = valorAntes * (1 - DESCONTO_FUNCIONARIO);
            break;
        case 'v':
            valorDepois = valorAntes * (1 - DESCONTO_VIP);
            break;
        case 'c':
            valorDepois = valorAntes;
            break;
        default:
            return 1;
    }

    printf("%f\n", valorDepois);

    return 0;
}