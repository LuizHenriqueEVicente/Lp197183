#include <stdio.h>

int elementos(int n, int m) {
    int r = 0; 
    for (int i = 2; i <= n; i++) {
        r = (r + m) % i;
    }
    return r + 1;
}

int main() {
    int NC;
    if (scanf("%d", &NC));

    for (int case_num = 1; case_num <= NC; case_num++) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int sobrevivente = elementos(n, m);
        
    
        printf("Case %d: %d\n", case_num, sobrevivente);
    }

    return 0;
}
