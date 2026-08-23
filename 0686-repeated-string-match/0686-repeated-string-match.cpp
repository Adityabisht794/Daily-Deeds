class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string temp = a;

        // Repeat until a is at least as long as b
        while (a.length() < b.length()) {
            a += temp;
            count++;
        }

        // Check normally
        if (a.find(b) != string::npos) {
            return count;
        }

        // Check one extra repetition for overlap
        a += temp;
        count++;

        if (a.find(b) != string::npos) {
            return count;
        }

        return -1;
    }
};