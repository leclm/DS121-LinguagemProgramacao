int main() {
    int n1, n2, n3;
    int aux;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2) {
        aux = n1;
        n1  = n2; 
        n2  = aux;
    }

    if (n2 <= n3) {
        printf("%d\n%d\n%d\n", n1, n2, n3);
    } else {
        if (n1 <= n3) {
        printf("%d\n%d\n%d\n", n1, n3, n2);
        } else {
            printf("%d\n%d\n%d\n", n3, n1, n2);
        }
    }
    return 0;
}