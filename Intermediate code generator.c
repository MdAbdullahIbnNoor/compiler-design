
#include<stdio.h>
#include<conio.h>
#include<string.h>
char op[100],arg1[100],arg2[100],res[100];
void main()
{
    FILE *fp1,*fp2;
    fp1=fopen("5input.txt","r");
    fp2=fopen("5output.txt","w");
    char line[100];
    while(!feof(fp1))
    {
        fscanf(fp1,"%s%s%s%s",res,arg1,op,arg2);
        if(strcmp(op,"+")==0)
        {
            fprintf(fp2, "\n MOV R0 %s ",arg1 );
            fprintf(fp2, "\n ADD R0 %s ",arg2 );
            fprintf(fp2, "\n MOV %s R0", res);

        }
        if(strcmp(op,"*")==0)
        {
            fprintf(fp2, "\nMOV R0 %s ",arg1 );
            fprintf(fp2, "\nMUL R0 %s ",arg2 );
            fprintf(fp2, "\nMOV %s R0 ", res);

        }
        if(strcmp(op,"-")==0)
        {
            fprintf(fp2, "\nMOV R0 %s ",arg1 );
            fprintf(fp2, "\nSUB R0 %s ",arg2 );
            fprintf(fp2, "\nMOV %s R0 ", res);

        }
        if(strcmp(op,"/")==0)
        {
            fprintf(fp2, "\nMOV R0 %s ",arg1 );
            fprintf(fp2, "\nDIV R0 %s ",arg2 );
            fprintf(fp2, "\nMOV %s R0 ", res);

        }
        if(strcmp(op,"=")==0)
        {
            fprintf(fp2, "\nMOV R0.%s ",arg1 );

            fprintf(fp2, "\nMOV %s R0 ", res);

        }
    }
    fclose(fp1);
    fclose(fp2);
}
