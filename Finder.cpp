#include "Finder.h"

    using namespace std;

    std::vector<int> Finder::findSubstrings(string s1, string s2) {

        // initialise array of results to -1 and set index to 0
        std::vector<int> results(s2.size(), -1);

        // intialise found to 0 to begin
        size_t found = 0;


        for(size_t i = 1; i <= s2.size(); i++) {

            // find index of the first occurrence of the specified string or character, starting at previous found each time
            found = s1.find(s2.substr(0, i), found);

            // if found is not outside of the string, then found is in the string
            if (found != string::npos) {

                // put index of occurence in string
                results[i-1] = found;

            } else {

                // if one substring is not found, the next substrings will not be found
                break;
            }
        }
        return results;
    }

   