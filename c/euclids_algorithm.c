#include <stdio.h>

int gcd(int a, int b) {
    int c;
    
    while (a > 0) {
        if (a < b) {
            c = a;
            a = b;
            b = c;
        }
        a = a - b;
    }
    return b;
};

int main() {
    int x, y;
    x = 9;
    y = 12;

    printf("%d :: %d :: %d\n", x, y, gcd(x,y));
}

