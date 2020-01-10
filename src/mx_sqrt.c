int mx_sqrt(int x) {
    if (x > 0) {
      for (unsigned int sum = 1; sum * sum <= (unsigned int)x; sum++)
        if (sum * sum == (unsigned int)x)
          return sum;
    }
    return 0;
}
