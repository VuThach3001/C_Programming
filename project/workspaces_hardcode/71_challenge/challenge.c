/*
- In this requirement, you are to create a C program that uses a two-dimensional array in a weather program.
- This program will find the total rainfall for each year, the average yearly rainfall, and the average 
rainfall for each month.
- Input will be a 2D array with hard-coded values for rainfall amounts for the past 5 years
    - The array should have 5 rows and 12 columns
    - Rainfall amounts can be floating point numbers

### EXAMPLE OUTPUT ###
YEAR RAINFALL(inches)
2010 32.4
2011 37.9
2012 49.8
2013 44.0
2014 32.9

The yearly average is 39.4 inches

MONTHLY AVERAGES:

Jan | Feb | Mar | Apr | May | Jun | Jul | Aug | Sep | Oct | Nov | Dec
7.3 | 7.3 | 4.9 | 3.0 | 2.3 | 0.6 | 1.2 | 0.3 | 0.5 | 1.7 | 3.6 | 6.7

### HINTS ###
- Initialize your 2D array with hard-coded rainfall amounts
- Remember, to iterate through a 2D array you will need a nested loop
- The key to this solution will be to visualize a 2D array and understand how to 
iterate through one via a nested loop.
- As you are iterating, you can keep a running total (outer loop iterate by year, inner loop iterate by month)
to get the total rainfall for all years
- To get the average monthly rainfalls, iterate though 2D array by having the outer loop go through each month
and inner loop go through each year
*/

#include <stdio.h>

int main()
{
    // float rainfallDat[5][12] = {
    //     {123.12, 256.14, 305.16, 478.18, 5102.20, 6784.25, 723.35, 812.40, 9114.12, 1012.14, 1123.13, 1256.78},
    //     {1234.21, 2567.41, 2334.61, 9471.81, 5436.22, 6124.31, 3756.12, 1568.53, 9356.23, 1012.25, 2111.30, 1672.88},
    //     {1466.234, 2345.657, 1243.65, 5674.85, 1657.787, 1246.154, 6787.323, 1248.78, 1249.12, 1350.56, 1241.24, 1242.90},
    //     {1235.123, 2567.566, 1243.56, 1424.78, 5135.12, 623.65, 789.789, 846.34, 967.56, 105.23, 1123.43, 124.714},
    //     {1789.234, 223.56, 3124.78, 4456.34, 5245.78, 6356.34, 7123.90, 813.532, 912.431, 1024.344, 1121.235, 4512.78}
    // };
    float rainfallDat[5][12] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
        
    };

    float avgRainFall[5] = {0, 0, 0, 0, 0};
    float avgRainFallMonthly[12] = {0};
    float yearlyAvg = 0.0;
    float yearlyAvgAmount = 0.0;
    // Calculate the avery rainfall following each year
    for(int i = 0; i < 5; i++){
        // Reset the store data to calculate the total rainfall of each year
        float totalRainFallEachYear = 0.0;
        for(int j = 0; j < 12; j++)
            totalRainFallEachYear += rainfallDat[i][j]; // Calculate the total rainfall amount of each year
        // Calculate the avg number
        avgRainFall[i] = totalRainFallEachYear;
        yearlyAvgAmount += totalRainFallEachYear;
    }
    yearlyAvg = yearlyAvgAmount / 5.0;
    // Calculate the average rainfall following each month
    for(int i = 0; i < 12; i++){
        // Reset the store data to calculate the total rainfall of each year
        float totalRainFallEachMonth = 0;
        for(int j = 0; j < 5; j++)
            totalRainFallEachMonth += rainfallDat[j][i]; // Calculate the total rainfall amount of each month
        // Calculate the avg number
        avgRainFallMonthly[i] = totalRainFallEachMonth / 5.0;
    }
    // Show the title first
    printf("YEAR\tRAINFALL (inches)\n");
    for(int t = 0; t < 5; t++)
        printf("201%d\t%.2f\n", t, avgRainFall[t]);
    printf("The yearly average is %.2f inches\n", yearlyAvg);
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    for(int t = 0; t < 12; t++)
        printf("%.2f\t", avgRainFallMonthly[t]);
    printf("\n");
    return 0;
}