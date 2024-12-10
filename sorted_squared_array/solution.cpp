#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  int counter = 0;
  while ( counter < array.size()){
    array[counter]*=array[counter];

    counter++;
  }
  sort(array.begin(), array.end());
  return array;
}
