/* To find Maximum Subarray Sum in O(n) time. */

#include<iostream>
#include<vector>
#include<alogrithm>

int main() {
  int n;
  vector<int> a;
  std::cin>>n;
  for ( int i = 0 ; i < n ; ++i ) {
    int x;
    std::cin>>x;
    a.push_back(x);
  }
  int max_so_far = a[0];
  int current_max = a[0];
  for ( int i = 1; i < n ; ++i ) {
    current_max = std::max(a[i] , current_max + a[i]);
    max_so_far = std::max(current_max , max_so_far);
  }
  std::cout<<max_so_far;
  return 0;
}
  
  
  
