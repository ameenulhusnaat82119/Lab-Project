#include<iostream>
using namespace std;

int main()
{
    int consumer;
    string name, address;
    cout << "\nEnter number of consumers: ";
    cin >> consumer;
    cin.ignore();

    for(int i = 1; i <= consumer; i++)
    {
        int vltg, units;
        float Charges;
        string DueDate = "27-Oct-2025";
        string PayBillDate;
        

        float Bill_Amount, Total_Bill, perUnitCost, Amount_Surcharge;
        const float taxRate = 0.05;
        const float Surcharge_per_later = 0.010;

        

        cout<<"\n********** Consumer " << i << " **********\n";
        cin.ignore();
        cout << "\nEnter Consumer Name: ";
        getline(cin, name);
        cout << "Enter Consumer Address: ";
        getline(cin, address);
 

        cout << "Enter the Voltage Category (in volts): ";
        cin >> vltg;

        cout << "Enter the Number of units consumed: ";
        cin >> units;

        
        // Per unit cost
        if(vltg < 100)
            perUnitCost = 1.20;
        else if(vltg <= 300)
            perUnitCost = 2.00;
        else
            perUnitCost = 3.00;

        Bill_Amount = units * perUnitCost;

        // Extra charges
        if(Bill_Amount > 400)
            Charges = Bill_Amount * 0.15;
        else
            Charges = 0;

        cin.ignore();
        cout << "Enter Date of Paying Bill (DD-MMM-YYYY): ";
        getline(cin, PayBillDate);

        // Surcharge
        if(PayBillDate != DueDate)
            Amount_Surcharge = Bill_Amount * Surcharge_per_later;
        else
            Amount_Surcharge = 0;

        // Final total
        Total_Bill = Bill_Amount 
                   + (Bill_Amount * taxRate) 
                   + Charges 
                   + Amount_Surcharge;

        // Bill Print
        cout << "\n******************************************************";
        cout << "\n====Azad Jammu & Kashmir Electricity Department====";
        cout << "\n        Electricity Consumer Bill                  ";
        cout << "\nConsumer No: " << i;
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nDivision: Muzaffarabad";
        cout << "\nDUE DATE: 27 OCT 2025";
        cout << "\n******************************************************";
        cout << "\nVoltage: " << vltg;
        cout << "\nUnits: " << units;
        cout << "\nBill Amount: " << Bill_Amount;
        cout << "\nTax (5%): " << Bill_Amount * taxRate;
        cout << "\nExtra Charges: " << Charges;
        cout << "\nLate Surcharge: " << Amount_Surcharge;
        cout << "\nTOTAL BILL: " << Total_Bill;
        cout << "\n******************************************************\n";
    }

    return 0;
}
