#include <stdio.h>
int main() {
    int totalSeg, h, m, s;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSeg);
    
    h = totalSeg / 3600;
    m = (totalSeg % 3600) / 60;
    s = totalSeg % 60;
    
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}