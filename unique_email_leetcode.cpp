class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> procEmails;
        for (auto email : emails) {
            int atPos = email.find('@');
            for (int i = 0; i < atPos; ++i) {
                if (email[i] == '+') {
                    email.erase(i, atPos - i);
                    break;
                }
            }
            atPos = email.find('@');
            for (int i = 0; i < atPos; ++i)
                if (email[i] == '.') email.erase(i, 1);
            procEmails.insert(email);
        }
        return procEmails.size();
	}
};