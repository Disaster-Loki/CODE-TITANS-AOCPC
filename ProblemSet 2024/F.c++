// Rotate It
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int  max_bits(int n)
{
  int  counter;

  counter = 0;
  while (n)
  {
    n >>= 1;
    counter++;
  }
  return (counter);
}

void  shift(int *n, int nbits)
{
  int  mask;
  int  aux;

  mask = pow(2, nbits) - 1;
  aux = 1 << (nbits - 1);
  aux &= *n;
  *n <<= 1;
  *n &= mask;
  *n += aux >> (nbits - 1);
}

int  main()
{
  int  n, t;
  int  copy;
  int  max;
  int  nbits;
  stringstream output;

  cin >> t;
  while (t--)
  {
    cin >> n;
    copy = n;
    nbits = max_bits(n);
    max = n;
    shift(&n, nbits);
    while (copy != n)
    {
        if (n > max)
            max = n;
        shift(&n, nbits);
    }
    output << max << endl;
  }
  cout << output.str();
  return (0);
}