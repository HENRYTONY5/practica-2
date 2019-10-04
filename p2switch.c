# include  <stdio.h>
int  main () {
    int x;
    char rep;
   float t = 0 , y, z;
   do{
    printf ( " Digite opcion: \n 1 = Suma \n 2 = Resta \n 3 = Multiplicacion \n 4 = Division \n " );
    scanf ( "%d" , & x);

     printf ( " dato 1: \n " );
    scanf ( "%f" , & y);

     printf ( " dato 2: \n " );
    scanf ( "%f" , & z);

  /*   if (x == 1) t = y + z;
    más si (x == 2) t = yz;
    si (x == 3) t = y * z;
    de lo contrario si (x == 4) t = y / z; */

    switch (x) {
       case  1 : t = y + z;
       printf ( " r:% f " , t);
            break;
        case  2 : t = y-z;
        printf ( " r:% f " , t);
            break;
        case  3 : t = y * z;
        printf ( " r:% f " , t);
            break;
        case  4 :
            while(z==0){

                printf("la cantidad 2 debe ser diferente de 0. \nIntente de nuevo \n");
                printf ( " dato 2: \n " );
                scanf ( "%f" , & z);
            }
            t = y / z;
            printf ( " r:% f " , t);
            break;


      default: printf("opc invalida \n");


    }

printf("Desea hacer otra operacion? S N \n");
rep = getch();
}

  while((rep=='S') || (rep=='s')  );
    return 0 ;

    }
