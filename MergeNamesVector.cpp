// Implement the unique_names method. When passed two vectors of names, it will return a vector 
// containing the names that appear in either or both vectors. The returned vector should have no duplicates.
// For example, calling MergeNamesunique_names(vector<string>{"Ava", "Emma", "Olivia"}, 
// vector<string>{"Olivia", "Sophia", "Emma"}) should return a vector containing Ava, Emma, Olivia, and Sophia in any order.
// https://www.testDome.com/questions/cpp/merge-names/21511

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class MergeNames
{
public:
    static vector<string> unique_names(const vector<string>& names1, const vector<string>& names2)
    {
		//throw logic_error("Waiting to be implemented");
        vector<string> vector_unique;
		vector_unique.insert(vector_unique.end(), names1.begin(), names1.end());
		vector_unique.insert(vector_unique.end(), names2.begin(), names2.end());
		sort(vector_unique.begin(), vector_unique.end());
		auto last = unique(vector_unique.begin(), vector_unique.end());
		vector_unique.erase(last, vector_unique.end());
        return vector_unique;
    }
};

#ifndef RunTests
int main()
{
    vector<string> names1 = {"Ava", "Emma", "Olivia"};
    vector<string> names2 = {"Olivia", "Sophia", "Emma"};
    
    vector<string> result = MergeNames::unique_names(names1, names2);
    for(auto element : result)
    {
        cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif