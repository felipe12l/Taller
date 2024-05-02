#include <stdio.h>
#include <string.h>

int main() {
    int op;
    printf("Hello, World!\n"
           "1.buscar subcadena\n"
           "2.rellenar con caracteres\n"
           "3.subcadena\n");
    scanf("%d", &op);
    
    switch (op) {

        
        case 1:
            fflush(stdin);
            //strings
            char straw[]="";
            //substring
            char sub[]="";
            printf("ingrese la cadena\n");
            // fgets(straw,sizeof(straw),stdin);
            scanf("%s",&straw);
            printf("aqui vamos");
            fflush(stdin);
            printf("ingrese la subcadena");
            scanf("%s",&sub);
            fflush(stdin);
            int pos=0;
            printf("ingrese la poscicion de inicio en caso en que no desee ninguna presione <enter>");
            scanf("%d",&pos);
            // fgets(sub,sizeof(sub),stdin);
            findTheString(straw,sub,pos);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        default:

            break;
    }
    return 0;
}
//n 1 method
int findTheString(char str[],char sub[],int init){
    for (size_t i = i; i < sizeof(str); i++)
    {}
    
}