/* This function takes user input and runs a function based on the operand
   that is typed in. For example, if 9 + 10 is the input, then it passes 9
   and 10 through the op_add function.*/

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char c))(int, int){
  int i = 0;

  /* This array holds the operators */
  char oper[5] = { '+', '-', '/', '*', '%'};

  int (*functn[5])(int, int);

  /* This array holds pointers to the functions that
     perform the calculations */
  functn[0] = op_add;
  functn[1] = op_sub;
  functn[2] = op_div;
  functn[3] = op_mul;
  functn[4] = op_mod;

  /*The arrays have been arranged to correspond
    with each other*/

  while(i < oper[i]){
    if(c == oper[i]){
      return functn[i];
    }
    i++;
  }
  return 0;
}
