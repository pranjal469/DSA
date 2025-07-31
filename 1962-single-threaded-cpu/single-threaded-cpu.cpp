class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        vector<array<int,3>> sortedTasks;

        // Step 1: Add index to tasks and store in array format
        for(int i = 0; i < n; i++) {
            sortedTasks.push_back({tasks[i][0], tasks[i][1], i});  // {start_time, processing_time, original_index}
        }

        // Step 2: Sort tasks based on enqueue/start time
        sort(sortedTasks.begin(), sortedTasks.end());

        // Min-heap to select task with smallest processing time (and smallest index if tie)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        
        vector<int> result;
        long long time = 0; // current CPU time
        int i = 0;

        // Step 3: Process all tasks
        while (i < n || !pq.empty()) {
            // Push all tasks whose enqueueTime <= current time into the heap
            while (i < n && sortedTasks[i][0] <= time) {
                pq.push({sortedTasks[i][1], sortedTasks[i][2]}); // {processing_time, index}
                i++;
            }

            if (!pq.empty()) {
                auto [proc_time, idx] = pq.top();
                pq.pop();
                time += proc_time;
                result.push_back(idx);
            } else {
                // If no tasks are available now, jump time to next task’s enqueue time
                time = sortedTasks[i][0];
            }
        }

        return result;
    }
};
