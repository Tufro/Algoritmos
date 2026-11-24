#include "stdio.h"
#include "math.h"
#define N 7
#define X 1
#define Y 1

int main() {

    int     n = 1,
            m = 1,
            o = 1;
    double  a = 0.0;

    if (N < 0) {
        return printf("El exponente esta definido en los enteros positivos\n");
    } else if (N == 0) {
        return printf("Es igual a 1\n");
    } else {
        for (int i = 1; i < N; ++i) {
            n += i * n;
        }
    }
    for (int k = 0; k < N + 1; ++k) {
        if (k == 0) {
            m = 1;
        } else {
            for (int j = 1; j < k; ++j) {
                m += j * m;
            }
        }
        if (N == k || N - k == 1) {
            o = 1;
        } else {
            for (int l = 1; l < N - k; ++k) {
                o += l * o;
            }
        }
        a += (n / (m * o)) * pow(X, N - k) * pow(Y, k);
    }
    return printf("(%d + %d)^%d = %lf n = %d  m = %d  o = %d\n", X, Y, N, a, n, m, o);
}
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
def BinomioN(x: float = 0, y: float = 0, n: int = 0):

    nf = 1
    kf = 1
    df = 1
    cuenta = []
    total = 0

    if n < 0 or type(n) != int:
        return
    elif n == 0 or (x == 0 and y == 0):
        return 1
    else:
        for i in range(1, n):
            nf = i * nf + nf

    for k in range(0, n + 1):

        if k == 0:
            kf = 1
        else:
            for jj in range (1, k):
                kf = jj * kf + kf

        if n == k or n - k == 1:
            df = 1
        else:
            for l in range (1, n - k):
                df = l * df + df

        cuenta.append((nf / (kf * df)) * x**(n - k) * y**k)

        kf = 1
        df = 1

        total = cuenta[k] + total

    return total

print(BinomioN(1, 1, 2))*/