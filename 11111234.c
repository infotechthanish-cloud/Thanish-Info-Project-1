
int main(void) {
    int a, b, c;
    printf("Enter three integers separated by spaces: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }
    int sum = a + b + c;
    printf("Sum: %d\n", sum);
    return 0;
}

