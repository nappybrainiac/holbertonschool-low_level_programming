/*This function accepts the operand entered
  and uses it to select a function from 
  op_functions.c to run, that corresponds with
  the operand.*/

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char c))(int, int){
  int i;

  /*An array to hold the operators*/
  char ops[5] = { '+', '-', '/', '*', '%'};

  int (*funz[5])(int, int);

  /*Array that holds pointers to functions*/
  funz[0] = op_add;
  funz[1] = op_sub;
  funz[2] = op_div;
  funz[3] = op_mul;
  funz[4] = op_mod;

  /*The arrays have been arranged to correspond 
    with each other*/
  for(i = 0; i < ops[i]; i++){
    if(c == ops[i]){
	return funz[i];
    }
  }
  return 0;
}

