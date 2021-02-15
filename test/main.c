/* main.c */

#include "trans.c"

int main(int argc, char *argv[]) {
    int array[1000][1000];
    int** val = trans(array);
    return 0;
}