/* maximum number of bit planes to encode */
static uint
_T2(precision, Scalar, 1)(int maxexp, uint maxprec, int minexp)
{
  return MIN(maxprec, MAX(0, maxexp - minexp + 4));
}