/*
WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven) 
*/

int main() {
    int choice, num1, num2;
    float result;
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("The sum is: %f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("The difference is: %f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("The product is: %f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float) num1 / num2;
                printf("The quotient is: %f\n", result);
            } else {
                printf("Error: division by zero\n");
            }
            break;
        default:
            printf("Error: invalid choice\n");
            break;
    }
    return 0;

}
