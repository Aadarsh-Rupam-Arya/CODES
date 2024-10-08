#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
    if (n == 1) {
        return a;
    }
    else if (n == 2) {
        return b;
    }
    else if (n == 3) {
        return c;
    }
    else {
        return find_nth_term(n-1, b, c, a+b+c);
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int nth_term = find_nth_term(n, a, b, c);

    printf("The %dth term of the series is: %d", n, nth_term);

    return 0;
}