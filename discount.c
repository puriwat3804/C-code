#include <stdio.h>
float x,discount,cash ;
main()
{ printf("Customer Discount\n");
  printf("\nTotal : ");
  scanf("%f",&x);
  discount = (x*68)/100;
  printf("\nYour Discount is %.2f \n",discount);
  cash = x-discount ;
  printf("\nYour pay is %.2f \n",cash);
  printf("\nThank you for your service.");
  getch();  
}
