#include <stdio.h>
#include <locale.h>
double aToMa(double a){ //используем double потому что он точнее чем float
    const int m = 1000;
    return m * a;
}
int main(){
    setlocale(LC_ALL, "");
    double val;
    printf("Введите значение: ");
    while ( scanf("%lf", &val) == 1){
        printf("%.2lf\n", aToMa(val));
        printf("Введите значение: ");
    }
    /*scanf возвращает 1 когда получает на вводе корректное значение, 
    поэтому благодаря этой проверке при вводе неподходящих значений цикл завершается*/
    return 0;
}