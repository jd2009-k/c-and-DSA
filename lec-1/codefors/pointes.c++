#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
   int i = 0;
   while (i <= a * b)
   {
      i++;
      if (i % a == 0 && i % b == 0)
      {
         return i;
      }
   }
   return a * b;
}

int main()
{
   int a, b, c, d = 0, e, j;
   cin >> a >> b >> c;
   int arr[c];
   for (j = 1;; j++)
   {
      if (j % a == 0 || j % b == 0)
      {
         arr[d] = j;
         d++;
      }
      if (d == c)
         break;
   }
   d--;
   if (j % a == 0)
      e = j;
   if (j % b == 0)
      e = j;
   if (j % a == 0 || j % b == 0)
      e = lcm(a, b);
   for (; d >= 0; d -= e)
      cout << arr[d] << " ";
}