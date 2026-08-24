class RandomizedSet {
public:

    vector<int> nums;

    unordered_map<int, int> mp;

    RandomizedSet() {
        
    }

    bool insert(int val) {

        // Value already exists
        if (mp.find(val) != mp.end()) {
            return false;
        }

        // Add value to vector
        nums.push_back(val);

        // Store value and its index
        mp[val] = nums.size() - 1;

        return true;
    }

    bool remove(int val) {

        // Value does not exist
        if (mp.find(val) == mp.end()) {
            return false;
        }

        // Get index of the value to remove
        int index = mp[val];

        // Get last element
        int lastElement = nums.back();

        // Move last element to the position
        // of the element being removed
        nums[index] = lastElement;

        // Update the index of lastElement
        mp[lastElement] = index;

        // Remove the last element
        nums.pop_back();

        // Remove val from hashmap
        mp.erase(val);

        return true;
    }

    int getRandom() {

        int randomIndex = rand() % nums.size();

        return nums[randomIndex];
    }
};