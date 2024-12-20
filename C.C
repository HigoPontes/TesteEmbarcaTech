#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nomeDaConstante 1
#define constatne "texto"

void teste()
{
    printf("Fim do Codigo");
}
int teuCuNaReta = 1;

int main()
{

    printf("Constates (================================)\n");
    printf("Valor da constante Texto %s\n", constatne);
    printf("O Valor da constante e %d\n", nomeDaConstante);
    printf("IF (================================)\n");

    if (teuCuNaReta != 1)
    {
        printf("Meu Pau sem freio");
    }
    else
    {
        printf("Meu Pau com freio");
    }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define constants with descriptive names
#define MAX_NAME_LENGTH 5
#define MAX_VETOR_LENGTH 3
#define MAX_MATRIZ_ROWS 2
#define MAX_MATRIZ_COLS 2

// Function to print a message
void printMessage(const char* message) {
    printf("%s\n", message);
}

// Function to print a formatted message
void printFormattedMessage(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int main() {
    // Print constants
    printMessage("Constants:");
    printFormattedMessage("Valor da constante Texto: %s\n", "texto");
    printFormattedMessage("O Valor da constante e: %d\n", 1);

    // Conditional statement
    int teuCuNaReta = 1;
    if (teuCuNaReta != 1) {
        printMessage("Meu Pau sem freio");
    } else {
        printMessage("Meu Pau com freio");
    }

    // Switch statement
    int carai = 2;
    switch (carai) {
        case 1:
            printMessage("Carai de asa");
            break;
        case 2:
            printMessage("Asa de Carai");
            break;
        case 3:
            printMessage("Meu caralho voador");
            break;
        default:
            break;
    }

    // While loop
    printMessage("While loop:");
    int i = 1;
    while (i < 10) {
        printMessage("Vai tomar no cu piranha");
        i++;
    }

    // For loop
    printMessage("For loop:");
    printMessage("Vc deu o cu quantas vezes ?");
    for (size_t i = 0; i < 10; i++) {
        printFormattedMessage("%d\n", i);
    }

    // Arrays and matrices
    printMessage("Arrays and matrices:");
    int vetor[MAX_VETOR_LENGTH] = {1, 2, 3};
    float matriz[MAX_MATRIZ_ROWS][MAX_MATRIZ_COLS] = {{1.2, 2.2}, {3.3, 4.4}};

    printMessage("Vetor:");
    for (int i = 0; i < MAX_VETOR_LENGTH; i++) {
        printFormattedMessage("%d ", vetor[i]);
    }
    printMessage("");

    printMessage("Matriz:");
    for (int i = 0; i < MAX_MATRIZ_ROWS; i++) {
        for (int j = 0; j < MAX_MATRIZ_COLS; j++) {
            printFormattedMessage("%f ", matriz[i][j]);
        }
        printMessage("");
    }

    // Input and output
    printMessage("Digita um numero ai meu tutra");
    int num;
    scanf("%d", &num);
    printMessage("Digita teu nome ai zé mané");
    char nome[MAX_NAME_LENGTH];
    scanf("%s", nome);
    printFormattedMessage("Seu nome é: %s\n", nome);

    // Call a function
    printMessage("Fim do Codigo");
}    printf("Switch (================================)\n");

    int carai = 2;

    switch (carai)
    {
    case 1:
        printf("Carai de asa\n");
        break;
    case 2:
        printf("Asa de Carai\n");
        break;
    case 3:
        printf("Meu caralho voador\n");
        break;
    default:
        break;
    }

    printf("\nWhile (================================)\n");

    int i = 1;
    while (i < 10)
    {
        printf("Vai tomar no cu piranha\n");
        i++;
    }

    printf("\nFor (================================)\n");
    printf("Vc deu o cu quantas vezes ?");
    for (size_t i = 0; i < 10; i++)
    {
        printf("\n%d", i);
    }
    printf("\nVetor e Matrizes (================================)\n");
    printf("\nVetor e Matrizes (================================)\n");
    int vetor[3] = {1, 2, 3};
    float matriz[2][2] = {{1.2, 2.2}, {3.3, 4.4}};

    printf("Vetor: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Matriz:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digita um numero ai meu tutra\n");
    int num = scanf("%d", &num);
    printf("Digita teu nome ai zé mané");
    char nome[5];
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    teste();
}