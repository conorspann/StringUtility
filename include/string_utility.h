
#ifndef STRING_UTILITY_H
#define STRING_UTILITY_H

#include <vector>
#include <string>

namespace string_utility
{
    std::string getCharsUntil(std::string sourceStr, char delimiter, int startIndex=0);
    std::string getCharsAfter(std::string sourceString, char delimiter, int startIndex=0);
    std::vector<std::string> explode(std::string sourceStr, char delimiter);
    std::string implode(std::vector<std::string> sourceVec, char delimiter);
}

#endif // STRING_UTILITY_H
