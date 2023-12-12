
#include<bits/stdc++.h>
using namespace std;


char res[100],arg1[100],op[100],arg2[100],sym[100];
int main()
{
    string res;
    getline(cin,res,'$');

    void *ptr;

    printf("Symbol Table : \n");
    printf("Name\t\tAddress\t\tType\n");

    for(int j=0; j<res.size(); j++)
    {
        char c=res[j];
        if(isalpha(toascii(c)))
        {
            ptr = malloc(c);
            printf("%c\t\t%d\t\t identifier\n",c,ptr);
        }
        else if(c=='+' || c=='-' || c=='*' || c=='/')
        {
            ptr = malloc(c);
            printf("%c\t\t%d\t\t operator\n",c,ptr);
        }
        else if(c=='(' || c==')' || c=='{' || c=='}')
        {
            ptr = malloc(c);
            printf("%c\t\t%d\t\t parentheses\n",c,ptr);
        }
        else if(c==';')
        {
            ptr = malloc(c);
            printf("%c\t\t%d\t\t semicolon\n",c,ptr);
        }

    }


    return 0;
}

/*
ter expression with $ : a+b-c*e;{$
Symbol Table :
Name            Address         Type
a               928208           identifier
+               928320           operator
b               928376           identifier
-               928488           operator
c               928544           identifier
*               926336           operator
e               926392           identifier
;               926504           semicolon
{               926576           parentheses
*/
