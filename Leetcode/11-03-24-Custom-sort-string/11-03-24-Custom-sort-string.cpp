class Solution {
public:
    string customSortString(string order, string s) { // Define a function to custom sort string s based on order
    unordered_map<char, int> order_index; // Create a hashmap to store character positions in order
    for (int i = 0; i < order.length(); ++i) { // Populate the hashmap with character positions
        order_index[order[i]] = i;
    }

    sort(s.begin(), s.end(), [&](char a, char b) { // Sort string s based on custom order
        return order_index[a] < order_index[b]; // Custom comparison function using lambda to compare characters according to order
    });

    return s; // Return the sorted string
}

};
