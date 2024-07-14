class Solution {
public:
    string countOfAtoms(string formula) {
        int i = 0;
        map<string, int> c = parse(formula, i);
        string ans;
        for (pair<string, int> p : c) {
            ans += p.first;
            if (p.second > 1)
                ans += to_string(p.second);
        }
        return ans;
    }

private:
    map<string, int> parse(string& formula, int& i) {
        map<string, int> c;
        while (i != formula.size() && formula[i] != ')') {
            if (formula[i] == '(') {
                i++;
                for (auto& p : parse(formula, i)) { c[p.first] += p.second; }
            } else {
                int t = i++;
                while (i != formula.size() && islower(formula[i])) { i++; }
                string name = formula.substr(t, i - t);
                t = i;
                while (i != formula.size() && isdigit(formula[i])) { i++; }
                int count = t == i ? 1 : stoi(formula.substr(t, i - t));
                c[name] += count;
            }
        }
        int t = ++i;
        while (i <= formula.size() && isdigit(formula[i])) { i++; }
        if (t < i) {
           int multiplicity = stoi(formula.substr(t, i - t));
           for (auto& p : c) { p.second *= multiplicity; }
        }
        return c;
    }
};