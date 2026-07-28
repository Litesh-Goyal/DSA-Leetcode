class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> currentCombo;
        
        // 1. Sort the candidates to enable efficient pruning
        std::sort(candidates.begin(), candidates.end());
        
        // 2. Start the recursive backtracking
        backtrack(0, 0, currentCombo, candidates, target, result);
        
        return result;
    }

private:
    void backtrack(int index, int currentSum, std::vector<int>& currentCombo, 
                   const std::vector<int>& candidates, int target, 
                   std::vector<std::vector<int>>& result) {
        
        // Base case: if the target is met, save the unique combination
        if (currentSum == target) {
            result.push_back(currentCombo);
            return;
        }

        // Iterate through candidates starting from the current index to prevent duplicates
        for (int i = index; i < candidates.size(); ++i) {
            // Pruning: if adding the next candidate exceeds target, stop checking further numbers
            if (currentSum + candidates[i] > target) {
                break;
            }

            // 1. Choose: add candidate to the current path
            currentCombo.push_back(candidates[i]);

            // 2. Explore: pass 'i' as the next index since elements can be reused
            backtrack(i, currentSum + candidates[i], currentCombo, candidates, target, result);

            // 3. Unchoose: backtrack by removing the last element
            currentCombo.pop_back();
        }
    }
};
