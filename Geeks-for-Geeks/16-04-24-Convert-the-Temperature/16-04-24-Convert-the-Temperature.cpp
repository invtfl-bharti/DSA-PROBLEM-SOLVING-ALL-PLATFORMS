class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // creating a double variable for calculating k
         double k= celsius+ 273.15;
        //  creating a double var for calculating f
       double f= celsius* 1.80 + 32.00;
    //    return the values
       return {k,f}; 
    }
};
