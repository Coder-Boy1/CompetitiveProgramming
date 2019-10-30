/*
  Idea:
    - If the number is odd print it as is, otherwise print it -1.
  Because odd elements remains the same after the described algorithm but even elemenets are decreased by 1.
*/

#include <bits/stdc++.h>

using namespace std;

int const N = 1001;
int n, a[N];

int main() {
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin >> a[i];
  
  for(int i = 0; i < n; ++i)
    printf("%s%d", i == 0 ? "" : " ", a[i] - (a[i] % 2 == 0));
  /*
  This is same as above but easier to understand
  for(int i=0;i<n;i++)
  {
    if(a[i]%2)
      cout<<a[i];
    else
      cout<<a[i]-1;
    cout<<" ";
   }

*/
  puts("");
  
  return 0;
}
