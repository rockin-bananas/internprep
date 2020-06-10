#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Solution(vector<int> odds){
    /*
    int answer;
    for(int i = 0; (unsigned)i < odds.size(); i+=2){
        if(odds[i] != odds[i-1] && odds[i] != odds[i+1]){
            answer = odds[i];
        }
    }
    return answer;
    */
   int answer;
    for(int i = 0; (unsigned)i < odds.size(); i++){
        int res = count(odds.begin(), odds.end(), odds[i]);
        if(res != 2){
            answer = odds[i];
            break;
        }

    }
    return answer;
}
int main(){
    vector<int> odds = {1, 1, 3, 5, 3, 9, 9, 7 ,5 ,7, 11, 13, 11};
    cout<<Solution(odds);

}