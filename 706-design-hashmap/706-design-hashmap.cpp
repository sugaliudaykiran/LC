class MyHashMap {
public:
    vector <int> v;     //  Navie Solution :-   By using addition vector to store and the key and value.. pairs..
    int size;
    
    MyHashMap() {
        size = 10e6 +1;
        v.resize(size);
        // fill(v.begin(), v.end(), -1);
    }
    
    void put(int key, int value) {
        v[key] = value+1;   
    }
    
    int get(int key) {
        return v[key]-1;
    }
    
    void remove(int key) {
        v[key] = 0;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */