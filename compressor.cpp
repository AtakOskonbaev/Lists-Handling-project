#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    vector<string> values;
    string value;

    while (fin >> value)
        values.push_back(value);

    fin.close();

    ofstream fout("compressed.txt");
    for (int i = 0; i < values.size(); i++)
    {
        value = values[i];
        for (int j = 0; j < value.length(); j++)
        {
            int counter = 1;
            while (value[j] == value[j + 1])
            {
                value.erase(j, 1);
                counter++;
            }
            if (counter > 9)
            {
                value.insert(j, to_string(counter));
                j++;
            }
            else if (counter > 1)
                value.insert(j, to_string(counter));
            else
            {
                value.insert(j, "1");
            }
                j++;
        }
        fout << value << " ";
    }
    fout.close();
}