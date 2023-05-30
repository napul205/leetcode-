class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        //vector<int> v;
    }
    
    void add(int key) {
        for( auto i:v)
        {
            if(i==key)
                return;
        }
        
        v.push_back(key);
    }
    
    void remove(int key) {
        for( int i=0;i<v.size();i++)
        {
            if(v[i]==key)
            {
                if(v.size()==1)
                {
                    v.pop_back();
                }
                else{
                    if(i==v.size()-1)
                        v.pop_back();
                    else
                for( int j=i;j<v.size()-1;j++)
                {
                    v[i]=v[i+1];
                }
                }
            }
        }
    }
    
    bool contains(int key) {
        for( auto i:v)
        {
            if(i==key)
                return true;
        }
        
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */