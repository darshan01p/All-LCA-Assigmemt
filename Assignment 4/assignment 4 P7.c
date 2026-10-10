#include <stdio.h>

int take_positive_integer_user_input(char message[]) {
    int input_integer;

    do {
        printf("\n%s", message);
        scanf("%d", &input_integer);
    } while (input_integer <= 0);

    return input_integer;
}

void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    printf("\nMatrix:\n");

    for (int i = 0; i < rows; i++) {
        printf("|");

        for (int j = 0; j < columns; j++) {
            printf(" %4d |", matrix[i][j]);
        }

        printf("\n");
    }
}

int main() {
    int rows, columns, i_th_element, j_th_element;

    rows = take_positive_integer_user_input(
        "Enter the number of rows in the matrix (non-zero): ");

    columns = take_positive_integer_user_input(
        "Enter the number of columns in the matrix (non-zero): ");

    int matrix1[rows][columns], matrix2[rows][columns];

    printf("Enter the first matrix\n");

    for (i_th_element = 0; i_th_element < rows; i_th_element++) {
        for (j_th_element = 0; j_th_element < columns; j_th_element++) {
            printf("Enter element (%d, %d): ",
                   i_th_element + 1, j_th_element + 1);

            scanf("%d", &matrix1[i_th_element][j_th_element]);
        }
    }

    printf("Enter the second matrix\n");

    for (i_th_element = 0; i_th_element < rows; i_th_element++) {
        for (j_th_element = 0; j_th_element < columns; j_th_element++) {
            printf("Enter element (%d, %d): ",
                   i_th_element + 1, j_th_element + 1);

            scanf("%d", &matrix2[i_th_element][j_th_element]);
        }
    }

    int matrix_sum[rows][columns];

    for (i_th_element = 0; i_th_element < rows; i_th_element++) {
        for (j_th_element = 0; j_th_element < columns; j_th_element++) {
            matrix_sum[i_th_element][j_th_element] =
                matrix1[i_th_element][j_th_element] +
                matrix2[i_th_element][j_th_element];
        }
    }

    print_matrix(rows, columns, matrix_sum);

    return 0;
}