#include <stdio.h>
int main()
{
    int n, a, sum=0;

    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL)
    {
        fprintf(outputFile,"NOT FOUND\n");
        return 0;
    }
    fscanf(inputFile,"%d", &n);

    for(int i=0; i<n; i++)
    {
        fscanf(inputFile,"%d", &a);
        sum+=a;
    }
    fprintf(outputFile,"%d\n", sum);

    /* while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
            break;
        fputc(ch, outputFile);
    } */

    return 0;
}