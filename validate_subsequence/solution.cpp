using namespace std;
#include <vector>

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
  int arrayptr {0};
  int sequenceptr {0};
  
  while(arrayptr < array.size() && sequenceptr < sequence.size()){
    if (array[arrayptr] == sequence[sequenceptr]){
      
      sequenceptr++;
    }
    
    arrayptr++;
  }
  
  return sequenceptr == sequence.size();
}