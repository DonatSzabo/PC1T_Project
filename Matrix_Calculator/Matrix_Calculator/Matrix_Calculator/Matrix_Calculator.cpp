
/*
Maticová kalkulačka
Szabó Donát, Oliver Synak
*/


#include <stdio.h>
#define MAX 5

int matrices[2][MAX][MAX];  
int rows[MAX], cols[MAX];

void ReadMatrix(int i) {


    int r, s;
    printf("Zadaj pocet riadkov a stĺpcov pre maticu %d: ", i + 1);
    scanf_s("%d %d", &r, &s);



    if (r > MAX || s > MAX) {
        printf("Maximalna velkost matice je %d x %d \n", MAX, MAX);
        return;
    }

    rows[i] = r;
    cols[i] = s;

    printf("Zadaj prvky matice %d (%dx%d):\n", i + 1, r, s);
    for (int riadok = 0; riadok < r; riadok++) {
        for (int stlpec = 0; stlpec < s; stlpec++) {
            scanf_s("%d", &matrices[i][riadok][stlpec]);
        }
    }

}
/*
void addMatrix(int matrices[2][MAX][MAX],
    int rows[MAX], int cols[MAX]) {

    if (rows[0] = rows[1] && cols[0] = cols[1])
    {
        return 1;
    }
    else {
        printf("Matice nemaju stejne velkost! \n");
        return 0;
    }




}
*/
void subMatrix() {


}

void PrintMatrix(int i, int matrices[2][MAX][MAX],
    int rows[MAX], int cols[MAX]) {
    // Výpis všetkých matíc
    printf("\nMatica %d (%dx%d):\n", i + 1, rows[i], cols[i]);
    for (int r = 0; r < rows[i]; r++) {
        for (int s = 0; s < cols[i]; s++) {
            printf("%d ", matrices[i][r][s]);
        }
        printf("\n");
    }

}
int main() {
    printf("------------------------------Matrix calculator------------------------------\n");


    for (int i = 0; i < 2; i++) {
        ReadMatrix(i);
    }

    for (int i = 0; i < 2; i++) {
        PrintMatrix(i, matrices, rows, cols);
    }
    printf("Ake operacie chcete pouzivat: \n 1: + \n 2: - \n 3: * \n 4: /");
    int op = 4;
    scanf("%d", op);
    switch (op) {
    case 1:
        void addMatrix();
        break;
    case 2:
        void subMatrix();
        break;

    }

}





















