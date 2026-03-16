#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;
    printf("Digite 4 valores reais: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    double mh = 4 / ((1/a) + (1/b) + (1/c) + (1/d));
    double mq = sqrt((pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2)) / 4);
    
    printf("Media Harmonica: %.2f\nMedia Quadratica: %.2f\n", mh, mq);
    return 0;
}