long factorial (long n) {
  long i = 1;
  long result = 1;
  for (i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

