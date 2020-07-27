
#include <string>
#include <vector>

#include "../include/string_utility.h"

std::string string_utility::getCharsUntil(std::string sourceStr, char delimiter, int startIndex)
{
    std::string resultStr;
    for (int charIndex = startIndex; charIndex < sourceStr.length(); charIndex++) {
        if (sourceStr[charIndex] == delimiter) {
            break;
        }
        resultStr += sourceStr[charIndex];
    }

    return resultStr;
}

std::string string_utility::getCharsAfter(std::string sourceString, char delimiter, int startIndex)
{
    std::string resultString;

    bool startAdding = false;

    for (int charIndex = startIndex; charIndex < sourceString.length(); charIndex++) {
        char c = sourceString[charIndex];
        if (c == delimiter) {
            startAdding = true;

            continue;
        }

        if (startAdding) {
            resultString += c;
        }
    }

    return resultString;
}

std::vector<std::string> string_utility::explode(std::string sourceStr, char delimiter)
{
    std::vector<std::string> explodedResult;
    std::string currentStr;
    for (int charIndex = 0; charIndex < sourceStr.length(); charIndex++) {
        if (sourceStr[charIndex] == delimiter) {
            explodedResult.push_back(currentStr);
            currentStr = "";

            continue;
        }
        currentStr += sourceStr[charIndex];
    }
    if (!currentStr.empty()) {
        explodedResult.push_back(currentStr);
    }

    return explodedResult;
}

