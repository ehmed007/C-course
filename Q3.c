#include <stdio.h>

int main()
{
    FILE* file = fopen("fys.txt", "r");
    FILE* file2 = fopen("output.txt", "w");
    if(!file)
    {
        printf("\n Unable to open : fys.txt");
        return -1;
    }

    char line[1000];
    char line2[1000];
    int count = 0;
    int i,j,k;

    printf("Following Is the Required Output\n");
    printf("------------------------------------------------------------------\n\n");
    while (fgets(line, sizeof(line), file))
    {

        for (i = 0; line[i] != '\0'; ++i);

        //printf("Line Length is %d", i);

        if(i > 10)
        {
            for (j = 0; j < (i/2); ++j)
                line2[j] = line[j];

            line2[j++] = '\n';

            for (k = (i/2); k <= i; ++k)
            {
                line2[j] = line[k];
                j++;
            }

            fputs(line2,file2);
            printf("%s", line2);
        }
        else
        {
            printf("%s", line);
            fputs(line,file2);
        }


    }
    fclose(file);
    printf("\n\n------------------------------------------------------------------");
    printf("\nSuccessfully Converted File!\nOutput is also stored in output.txt file\n\n");
    return 0;
}
