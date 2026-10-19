#include <stdio.h>
#include <locale.h>
int numOfComb(int num, int size) {
    int res = 1;
    int size0 = size;
    while (size > 0){
        res *= num;
        res /= (size0 - size +1);
        num--; 
        size--;
    }
    return res;
}
int main(){
    setlocale(LC_ALL, "");
    int n, s;
    printf("Введите количество элементов и размер комбинации: ");
    scanf("%d %d", &n, &s);
    printf("%d\n", numOfComb(n, s));
    return 0;
}
// *= используется для накопления произведения потому что это более короткий способ записи выражения
// x *= y; и x = x * y; равносильны