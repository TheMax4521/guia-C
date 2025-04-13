#include <stdio.h>
#include <string.h>

#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN+1];
    int vida;
    double ataque;
    double defensa;

}monstruo_t;

monstruo_t evolucion(monstruo_t jefe);

monstruo_t jefes[5] = {
    [0] = {"King Slime", 2000, 40, 10},
    [1] = {"Eye of Cthulhu", 2800, 15, 12},
    [2] = {"Brain of Cthulhu", 1250, 30, 14},
    [3] = {"Skeletron", 4400, 32, 10},
    [4] = {"Empress of Light", 70000, 100, 40},
};

int main(){
    for (int i = 0; i < 5; i++)
    {
        printf("Jefe: %-20s | Vida: %-6d | Ataque: %-5.1f | Defensa: %-5.1f\n", jefes[i].name,
        jefes[i].vida, jefes[i].ataque, jefes[i].defensa);
    };
    printf("\n\n");
    printf("Monstruos evolucionados:\n\n");

    for (int i = 0; i < 5; i++)
    {
        monstruo_t jefe_evolucionado = evolucion(jefes[i]);

        printf("Jefe: %-20s | Vida: %-6d | Ataque: %-5.1f | Defensa: %-5.1f\n", jefe_evolucionado.name,
        jefe_evolucionado.vida, jefe_evolucionado.ataque, jefe_evolucionado.defensa);
    }
    
}

monstruo_t evolucion(monstruo_t jefe){
 
    if (strcmp(jefe.name, "Empress of Light") == 0)
    {
        jefe.ataque += 200;
        jefe.defensa += 100;
    }else{
        jefe.ataque += 10;
        jefe.defensa += 10;
    }
    
    return jefe;
}
