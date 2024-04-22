#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream fin("compressed.txt");
    vector<string> values;
    string value;
    while (fin >> value)
        values.push_back(value);
    fin.close();

    ofstream fout("decompressed.txt");

    for (int i = 0; i < values.size(); i++)
    {
        value = values[i];
        for (int j = 0; j < value.length(); j++)
        {
            string temp = "";
            if (isdigit(value[j]))
            {
                for (int k = 0; k < value[j] - '0'; k++)
                {
                    temp += value[j + 1];
                }
            }
            fout << temp;
        }
        fout << " ";
    }
    fout.close();
}