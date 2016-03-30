int is_prime_number(int n){

  int x = 2;

  if(n <= 1) {
    return 0;
  }

  while (x <= n/2){
    if(n % x == 0){
      return 0;
    } else {
      x++;
    }
  }
    return 1;
}
