#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    const int c = 1000;
    int energy;
    printf("Введите значение > 0, для выхода из цикла введите значение <= 0 или EOF: ");
    while(scanf("%d",&energy) != EOF){ 
    if( energy <= 0 ) {
        printf("Ввод окончен");
        break;
    }
    printf("%d кДж = %d мДж и %d кДж\n", energy, energy/c, energy%c);
    printf("Введите значение: ");   
}
    return 0;
}
/*дробная часть отбрасывается из-за того,
 что в типе int нет битов, хранящих значение дробной части*/