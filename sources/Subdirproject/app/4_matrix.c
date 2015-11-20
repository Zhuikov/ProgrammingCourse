#include"matrix.h"
#include <stdlib.h>
#include <stdio.h>

int calc_column(int line, int col, int **arr){

    int u, ans;

    ans = 0;
    for(u = 0; u <= line; ++u){
        ans = ans + arr[u][col];
    }

    return ans;
}

void matrix(){

    FILE *file_in, *file_out;
    int m, n, i, j, pre_ans;
    int ** arr;

    file_in = fopen("input.txt", "r");

    fscanf(file_in, "%d %d", &m, &n);
    arr = malloc(m * sizeof(int *));
    for (i = 0; i < m; i++){
        arr[i] = malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            fscanf(file_in, "%d", &arr[i][j]);
        }
    }

    fclose(file_in);

    file_out = fopen("output.txt", "w");

    for (i = 0; i < m; ++i){
        pre_ans = calc_column(i, 0, arr);
        fprintf(file_out, "%d ", pre_ans);
        for (j = 1; j < n; ++j){
            fprintf(file_out, "%d ", pre_ans + calc_column(i, j, arr));
            pre_ans = pre_ans + calc_column(i, j, arr);
        }
        fprintf(file_out, "\n");
    }

    fclose(file_out);

    for (i = 0; i < m; ++i){
        free(arr[i]);
    }
    free(arr);
}
