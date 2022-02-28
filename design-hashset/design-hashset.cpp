class MyHashSet {
public:
    vector<int>vec;
    int siz;
    MyHashSet() {
        siz=1e6+1;
        vec.resize(siz);
        fill(vec.begin(),vec.end(),0);
        
    }
    
    void add(int key) {
        vec[key]=1;
    }
    
    void remove(int key) {
        vec[key]=0;
    }
    
    bool contains(int key) {
        return vec[key];
    }
};