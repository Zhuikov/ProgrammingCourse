#include <stdio.h>
void km_to_miles(float km){

    float mile, kilometers, m;
    puts("Мили   Километры");

    mile = 0.622;
    kilometers = 1;
    m = 1;

    while (kilometers <= km) {

      if (mile > m) {
          printf("%4.2f %4.2f\n", m, m * 1.609);
          m = m + 1;
      }
      printf("%4.2f %4.2f\n", mile, kilometers);
      kilometers = kilometers + 1;
      mile = kilometers / 1.609;

    }
}
