
string compress(string original)
{
    string compressed = "";
    int char_count = 0;
    for(int i = 0; i < original.length(); i++)
    {
        char_count++;
        if(i + 1 >= original.length() || original[i] != original[i + 1])
        {
            compressed += original[i] + char_count;
            char_count = 0;
        }
    }

    return compressed.length() < original.length() ? compressed : original 
}