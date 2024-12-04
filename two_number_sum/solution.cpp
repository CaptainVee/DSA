#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  for (int i = 0; i < array.size(); i++){
    int first_number {array[i]};
    for (int j = i +1; j < array.size(); j++){
        if (first_number + array[j] == targetSum){
          return {first_number, array[j]};
        }
    }
  }
  return {};
}
