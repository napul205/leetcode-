class ParkingSystem {
public:
    int low=0,high=0,mid=0; 
    ParkingSystem(int big, int medium, int small) {
        low=small;
        mid=medium;
        high=big;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(high>=1)
            {
                high--;
            return true;
            }
            else
            return false;

        }
        if(carType==2)
        {
            if(mid>=1)
            {mid--;
            return true;
            }
            else
            return false;
        }

        if(carType==3)
        {
            if(low>=1)
            { low--;
            return true;
            }
            else
            return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */