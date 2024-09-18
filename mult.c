#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int is_number(const char *str) { 
    char *endptr; 
    errno = 0; 
    double val = strtod(str, &endptr); 
    if (errno == ERANGE || (endptr == str)) { 
        return 0;
    } 
    return 1;
} 

int main(int argc, char *argv[]){

  if(is_number(argv[1]) == 0){
    printf("%s is not a valid number\n", argv[1]);
    return 1;
  }
  else if(is_number(argv[2]) == 0){
    printf("%s is not a valid number\n", argv[2]);
    return 1;
  }
  else{
  double product = atof(argv[1]) * atof(argv[2]); 
  printf("%.4f\n", product);
  }

  return 0;
}
