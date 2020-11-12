float fast_pow(float x, unsigned int n)
{
   float count = 1;
   if (!n)
      return 1;
   while (n)
   {
      if (n % 2 == 0)
      {
         n /= 2;
         x *= x;
      }
      else
      {
         n--;
         count *= x;
      }
   }
   return count;
}