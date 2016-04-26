#include "my_functions.h"

void positive_or_not(int n){
  if(n == 0){                   /* If the number is 0 */
    print_char('Z');
  }
  else if(n > 0){               /* If the number is +ve */
    print_char('P');
  }
  else {
    print_char('N');            /* If the number is -ve*/
  }
}
