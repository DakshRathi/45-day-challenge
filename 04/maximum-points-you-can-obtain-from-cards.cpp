class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int score = 0;
        for (int i = 0; i < k; i++ ) score += cardPoints[i];
        int curr = score;

        for (int i = k - 1; i >= 0; i--)
        {
            curr = curr - cardPoints[i] + cardPoints[cardPoints.size() - k + i];
            score = max(curr, score);
        }

        return score;
    }
};