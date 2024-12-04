#include <stdio.h>

struct poly {
    float coeff;
    int exp;
};

int main() {
    struct poly a[50], b[50], c[50];
    int deg1, deg2, m = 0;

    printf("Enter the degree of poly1: ");
    scanf("%d", &deg1);
    for (int i = 0; i <= deg1; i++) {
        printf("Enter coefficient of x^%d: ", i);
        scanf("%f", &a[i].coeff);
        a[i].exp = i;
    }

    printf("Enter the degree of poly2: ");
    scanf("%d", &deg2);
    for (int i = 0; i <= deg2; i++) {
        printf("Enter coefficient of x^%d: ", i);
        scanf("%f", &b[i].coeff);
        b[i].exp = i;
    }

    int max_deg = (deg1 > deg2) ? deg1 : deg2;

    for (int i = 0; i <= max_deg; i++) {
        c[m].coeff = ((i <= deg1 ? a[i].coeff : 0) + (i <= deg2 ? b[i].coeff : 0));
        c[m].exp = i;
        m++;
    }

    printf("Resultant Polynomial:\n");
    for (int i = 0; i < m; i++) {
        if (i == 0) printf("%.1f", c[i].coeff);
        else printf(" + %.1fx^%d", c[i].coeff, c[i].exp);
    }
    printf("\n");
    return 0;
}
