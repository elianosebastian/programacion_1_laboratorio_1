#include <stdio.h>
#include <stdlib.h>


int pedirOpcionMenu(char texto[]);


int main()
{
    int opcion;
    char seguir = 's';

    do
    {
     opcion = pedirOpcionMenu("1.Alta\n 2.Baja\n 3.Modificacion\n 4.Informes\n 5.Salir\n Elija una opcion:");

     switch(opcion)
      {
        case 1:
           printf("Estoy dando de alta\n");
        break;

        case 2:
            printf("Estoy dando de baja\n");
        break;

        case 3:
            printf("Estoy modificando\n");
        break;

        case 4:
            printf("Estoy informando\n");
        break;

        case 5:
           seguir='n';
        break;


        default:
            printf("Opcion Incorrecta\n");
        break;
      }

    system("pause");
    system("cls");

    }while(seguir=='s');

return 0;
}

int pedirOpcionMenu(char texto[])
{
     int opcion;
     printf("%s",texto);
     scanf("%d",&opcion);
     return opcion;
}
