#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindLocation(int ToFind, vector<int> odds){
    std::vector<int>::iterator it = std::find(odds.begin(), odds.end(), ToFind);
    int index = std::distance(odds.begin(), it);
    return index;
}

int Solution(vector<int> myset){
    int answer;

   /*
    for(int i = 0; (unsigned)i < odds.size(); i++){
        int res = count(odds.begin(), odds.end(), odds[i]);
        if(res != 2){
            answer = odds[i];
            break;
        }

    }
    */
   int i = 2;
    while(i <= myset.size()){
        int res = count(myset.begin(), myset.end(), myset[0]);
        if(res != 2){
            answer = myset[0];
            break;
        }
        else{
            int target = myset[0];
            for(int i = 0; i < 2; i++){
                int where = FindLocation(target, myset);
                myset.erase(myset.begin() + where);
            }   
        }
    }
    return answer; 
    
}
int main(){
    vector<int> odds = {1, 1, 3, 5, 3, 9, 9, 7 , 7, 11, 13, 11};
    cout<<Solution(odds);

}