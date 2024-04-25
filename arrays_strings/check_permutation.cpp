// 1.2 Check Permutation: Given two strings, write a method to decide if one is a permutation of the
// other.

// count the number of chars and check if are equal
bool check_permutation_1(const std::string& str1, const std::string& str2)
{
    unordered_map<char, int> letters;
    if (str1.length() != str2.length()) return false;

    for(auto c: str1) {
        letters[c]++;
    }

    for(auto c : str2)
    {
        letters[c]--;
        if(letters[c] < 0) return false;
    }

    return true;
}

// sort the strings
bool chack_permutation_2(const std::string& str1, const std::string& str2)
{
    sort(str1.begin(), str1.begin());
    sort(str2.begin(), str2.begin());

    return str1 == str2;
}