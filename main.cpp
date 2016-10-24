#include <iostream>
#include <string>

class solution {
  public:
    int strongPasswordChecker(const std::string & s) {
        if (lengthChecker(s) && caseChecker(s) && repeatingCharsChecker(s))
            return 0;
        else {
            
        }
    }

  private:
    bool lengthChecker(const std::string & s) {
        return s.size() >= 6 && s.size() <= 20;
    }

    bool caseChecker(const std::string & s) {
        bool lowerCase = s.find_first_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos;
        bool upperCase = s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos;
        bool digit = s.find_first_of("0123456789") != std::string::npos;
        return lowerCase && upperCase && digit;
    }

    bool repeatingCharsChecker(const std::string & s) {
        for (size_t i = 1; i < s.size()-1; ++i)
            if (s[i]==s[i-1] && s[i]==s[i+1])
                return false;
        return true;
    }
};
