#include <iostream>
#include <algorithm> // for std::max
#include <string>

using namespace std;

//Function to calculate snow depth after a given number of days
int calculate_snow_depth(int current, int snowfall_rate, int melt_rate, int days) {
    int depth = current + days * (snowfall_rate - melt_rate);
    return max(depth, 0);
}

int main() {
    //initial snow depths
    int breck_initial = 28;
    int vail_initial = 33;
    int copper_initial = 55;
    
    //snowfall and melt rates
    int breck_snow = 15, breck_melt = 4;
    int vail_snow = 11, vail_melt = 7;
    int copper_snow = 3, copper_melt = 2;
    
    int days;
    cout << "How many days in the future would you like a prediction for?";
    cin >> days;
    
    // calculate snow depths
    int breck_depth = calculate_snow_depth(breck_initial, breck_snow, breck_melt, days);
    int vail_depth = calculate_snow_depth(vail_initial, vail_snow, vail_melt, days);
    int copper_depth = calculate_snow_depth(copper_initial, copper_snow, copper_melt, days);

    // output results
    cout << "Breckenridge will have " << breck_depth << " inches, Vail will have " << vail_depth << " inches, and Copper Mountain will have " << copper_depth << " inches." << endl;
    return 0;
}
