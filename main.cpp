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
   if(result<0 && degree%2==0)
      return result*-1;
   else
   return result;
}