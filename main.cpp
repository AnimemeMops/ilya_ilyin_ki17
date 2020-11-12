double my_pow(double numb, unsigned int degree)
{
   double result = 1;
   if (degree == 0)
   {
      return 1;
   }
   for (int i = 0; i < degree; i++)
   {
      result *= numb;
   }
   return result;
}