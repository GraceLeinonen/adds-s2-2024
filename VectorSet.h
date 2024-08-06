#include <vector>

template <class T>
class VectorSet: public Set<T> {
    private:
    vector<T> members;

    public:
    bool isMember(T value) {
        for (auto current_value: this->members) {
            if (current_value == value)
            return true;
        }
        return false;
    }

    void add (T value) {
        if (!isMember(value)) {
            this->members.push_back(value);
        }
    }

    void remove(T value) {
        for (int i = 0; i < this->members.size(); i++) {
            if (this->members.at(i) == value) {
                this->members.erase(this->members.begin());
            }
        }
    }

    size_t size() {
        return this->members.size();

    }
};