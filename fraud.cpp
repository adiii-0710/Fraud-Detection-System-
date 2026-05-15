#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int>& arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            return true;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return false;
}

double calculateAverage(vector<int>& arr)
{
    int sum = 0;

    for(int amount : arr)
    {
        sum += amount;
    }

    return (double)sum / arr.size();
}

int detectRisk(vector<int>& arr, int newTransaction)
{
    int riskScore = 0;

    // 1: Very High Transaction
    if(newTransaction > 5000)
    {
        riskScore += 50;
    }

    //2: Compare with average transaction
    double avg = calculateAverage(arr);

    if(newTransaction > avg * 3)
    {
        riskScore += 30;
    }

    // 3: Similar suspicious transactions
    int count = 0;

    for(int amount : arr)
    {
        if(amount > 3000)
        {
            count++;
        }
    }

    if(count >= 3)
    {
        riskScore += 20;
    }

    return riskScore;
}

int main()
{
    // Historical transaction data
    vector<int> transactions = {100, 250, 400, 600, 800, 1200, 1500, 3500, 4200};

    // Sort transactions
    sort(transactions.begin(), transactions.end());

    cout << "===== FRAUD DETECTION SYSTEM =====\n\n";

    cout << "Historical Transactions:\n";

    for(int amount : transactions)
    {
        cout << amount << " ";
    }

    cout << "\n\n";

    int newTransaction;

    cout << "Enter New Transaction Amount: ";
    cin >> newTransaction;

    // Threshold checking using Binary Search
    bool found = binarySearch(transactions, newTransaction);

    if(found)
    {
        cout << "\nTransaction already exists in records.\n";
    }
    else
    {
        cout << "\nNew unique transaction detected.\n";
    }

    // Detect Risk
    int riskScore = detectRisk(transactions, newTransaction);

    cout << "\nRisk Score: " << riskScore << "/100\n";

    // Fraud Alert
    if(riskScore >= 70)
    {
        cout << "ALERT: HIGH RISK FRAUD TRANSACTION!\n";
    }
    else if(riskScore >= 40)
    {
        cout << "ALERT: MEDIUM RISK TRANSACTION!\n";
    }
    else
    {
        cout << "Transaction is SAFE.\n";
    }

    return 0;
}