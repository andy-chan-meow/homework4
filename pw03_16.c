#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int N;
    printf("Введите количество элементов последовательности: ");
    scanf("%d", &N);
    int n = 1;
    int c = 0;
    while( N > c ){
        printf("%d ", n);
        n += 7;
        c++;
    }
    printf("\n");
    return 0;
    //постфиксный - значение сначала применяется, а потом изменяется
    //префиксный - значение сначала изменяется, а потом применяется
}
