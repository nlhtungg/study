#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
    vector<string> article = {"the", "a", "one", "some", "any"};
    vector<string> noun = {"boy", "girl", "dog", "town", "car"};
    vector<string> verb = {"drove", "jumped", "ran", "walked", "skipped"};
    vector<string> preposition= {"to", "from", "over", "under", "on"};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                for(int l=0;l<5;l++){
                    cout << article[i] << " " << noun[j] << " " << verb[k] << " " << preposition[l] << " " << article[j] << " " << noun[k] << endl;
                }
            }
        }
    }
  return 0;
}