// Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
// cannot use additional data structures?

// Using hash map
bool isUnique1(const std::string& str)
{
    unordered_map<char, int> count_char_mp;
    for(auto c : str)
    {
        if (count_char_mp[c] > 0) return false;
        else count_char_mp[c]++;
    }

    return true;
}

// Sort string
bool isUnique2(const std::string& str)
{
    sort(str.begin(), str.end());

    for(int i = 1; i < str.length(); i++){
        if (str[i] == str[i - 1]) return false;
    }

    return true;
}