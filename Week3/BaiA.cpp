#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int m, n;
        scanf("%d %d", &m, &n);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
        
        printf("\n");
    }
    
    return 0;
}
