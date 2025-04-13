#include <stdio.h>

#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN+1];
    int vida;
    double ataque;
    double defensa;

}monstruo_t;

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
        printf("Jefe: %s    ", jefes[i].name);
        printf("Vida: %d    ", jefes[i].vida);
        printf("Ataque: %f    ", jefes[i].ataque);
        printf("Defensa: %f\n", jefes[i].defensa);
    };
    return 0;
}


