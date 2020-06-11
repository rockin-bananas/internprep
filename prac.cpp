#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> *myset)
{
    int answer = 0;

    for (int i = 0; i < myset->size(); i++)
    {
        answer = answer ^ (*myset)[i];
    }

    return answer;
}

int main()
{
    vector<int> test = {1, 1, 3, 5, 3, 9, 9, 5, 7, 7, 11, 13, 11};

    cout << solution(&test);
}