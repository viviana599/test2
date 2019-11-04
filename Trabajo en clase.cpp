#include <stdio.h>
#include <conio.h>

int b500, b200, b100, b50, b20, m10, m5, pesos, m2, m1;

int main()
{
   
   printf("Este progrma te dice cuantos billetes y monedas dar de acuerdo a un saldo");
   printf( "\n   Introduzca el saldo: " );
   scanf( "%d", &pesos );

   if ( pesos > 0 )
   {
      
      if ( pesos >= 500 )
      {
         b500 = pesos / 500;
         pesos %= 500;
      }
      else
         b500 = 0;

      
      if ( pesos >= 200 )
      {
         b200 = pesos / 200;
         pesos %= 200;
      }
      else
         b200 = 0;

      
      if ( pesos >= 100 )
      {
         b100 = pesos / 100;
         pesos %= 100;
      }
      else
         b100 = 0;

      
      if ( pesos >= 50 )
      {
         b50 = pesos / 50;
         pesos %= 50;
      }
      else
         b50 = 0;

      
      if ( pesos >= 20 )
      {
         b20 = pesos / 20;
         pesos %= 20;
      }
      else
         b20 = 0;

      
      if ( pesos >= 10 )
      {
         m10 = pesos / 10;
         pesos %= 10;
      }
      else
         m10 = 0;

      
      if ( pesos >= 5 )
      {
         m5 = pesos / 5;
         pesos %= 5;
      }
      else
         m5 = 0;

      
      if ( pesos >= 2 )
      {
         m2 = pesos / 2;
         pesos %= 2;
      }
      else
         m2 = 0;

      
         m1 = pesos;
         
		printf("\n Se entregaran los siguientes billetes y monedas: ");
      printf( " \n\n\n  %d billete(s) de 500", b500 );
      printf( "\n   %d billete(s) de 200", b200 );
      printf( "\n   %d billete(s) de 100", b100 );
      printf( "\n   %d billete(s) de 50", b50 );
      printf( "\n   %d billete(s) de 20", b20 );
      printf( "\n   %d moneda(s) de 10", m10 );
      printf( "\n   %d moneda(s) de 5", m5 );
      printf( "\n   %d moneda(s) de 2", m2 );
      printf( "\n   %d moneda(s) de 1", m1 );
   }
   else
      printf( "   Error cantidad incorrecta, debe ser mayor que cero." );
      printf("\n\n\n Enter para SALIR");
      getch();


}
