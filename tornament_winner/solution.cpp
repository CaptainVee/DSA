#include <vector>
#include <map>
using namespace std;

string tournamentWinner(
  vector<vector<string>> competitions, vector<int> results
) {
  string best_team {""};
  map<string, int> hash {};
  string winner {};
  
  for(int i {0}; i < results.size(); i++){
    if(results[i] == 0){
      winner = competitions[i][1];  

    }else{
      winner = competitions[i][0];
    }

    hash[winner]+=3;
    if (hash[winner] > hash[best_team]){
        best_team = winner;
      }
  }
  return best_team;
}







// more code solution

// #include <vector>
// #include <map>
// using namespace std;

// string tournamentWinner(
//   vector<vector<string>> competitions, vector<int> results
// ) {
//   string best_team {""};
//   map<string, int> hash {};
  
//   for(int i {0}; i < results.size(); i++){
//     if(results[i] == 0){
//       string winner = competitions[i][1];
//         auto search = hash.find(winner);
//         if (search == hash.end()) {
//             hash[winner] = 3;
//             if (hash[winner] > hash[best_team]){
//               best_team = winner;
//             }
        
//             } 
//         else {
//                 hash[winner] = hash[winner] + 3 ;
//               if (hash[winner] > hash[best_team]){
//               best_team = winner;
//             }
//               }
//     }else{
//         string winner = competitions[i][0];
//         auto search = hash.find(winner);
//         if (search == hash.end()) {
//             hash[winner] = 3;
//               if (hash[winner] > hash[best_team]){
//               best_team = winner;
//             }
//               } 
//         else {
//               hash[winner] = hash[winner] + 3;
//               if (hash[winner] > hash[best_team]){
//               best_team = winner;
//             }
//               }
//     }
//   }
//   return best_team;
// }
