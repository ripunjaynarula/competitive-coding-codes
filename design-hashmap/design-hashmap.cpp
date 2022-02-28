class MyHashMap {
public:
    int size=1e6+1;
    
    vector<int>v;
    
    MyHashMap() {
        v.resize(size,-1);
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key]=-1;
    }
};