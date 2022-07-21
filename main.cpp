#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <string>

using namespace std;

struct THE_STOCK
{
    int num;
    int ID[1000];
    string name[1000];
    //int nameLength;

    string category[6] = {"Electronics", "Clothing", "Footwear", "Books", "Appliances", "Apps"};
    double price[1000];
    bool two_day_shipping[1000];
    int numclicked[1000];

};

int main()
{
    int Num_OF_Files = 1;
    nextfile:
    srand(time(NULL));

    THE_STOCK items;

    ///for most popular item
    int BiggestID;
    string BiggestName;
    string BiggestCate;
    double biggest_price;
    bool biggesst_2D;
    int Biggest_clicked = 0;
    int binClick = 0;

    ///for number of clicks page
    int bin0 = 0;
    int bin1 = 0;
    int bin2 = 0;
    int bin3 = 0;
    int bin4 = 0;
    int bin5 = 0;
    int bin6 = 0;
    int bin7 = 0;
    int bin8 = 0;
    int bin9 = 0;

    string chosen[1000];





    if (Num_OF_Files <= 3)
    {
        cout << left << setw(5) << "ID" << left << setw(17) << "Name" << left << setw(12) << "Price"
             << left << setw(15) << "Category" << left << setw(10) << "2D Ship"
             << left << setw(20) << "Number of Clicks" << endl;

             for (int i = 0; i < 1000; i++)
             {
                items.ID[i] = i;
                {
                    char letters[26] = {'q', 'w','e', 'r','t', 'y','u', 'i','o', 'p',
                                        'a', 's','d', 'f','g', 'h','j', 'k','l', 'z',
                                        'x','c', 'v','b', 'n','m'};

                    int letterMin = 5;
                    int letterMax = 10;
                    int randomLengthLetter = letterMin + rand()% (letterMax - letterMin);
                    string createdName = "";

                        int selected = rand()%6;
                        chosen[i] = items.category[selected];

                    for(int letter=0; letter < randomLengthLetter; letter++)
                    {
                        createdName = createdName + letters[rand()% 26];
                        items.name[i] = createdName;
                    }


                    if (chosen[i] == "Electronics")
                    {
                        items.price[i] = (rand()%35 + 1500);
                        items.two_day_shipping[i] = rand() % 2;
                        items.numclicked[i] = rand() % 10000 + 1;


                        ///TRIED MAKING A FUNCTION AND CODE BREAKS
                        switch (items.numclicked[i])
                        {
                            case 0 ... 1000:
                                bin0++;
                                break;
                            case 1001 ... 2000:
                                bin1++;
                                break;
                            case 2001 ... 3000:
                                bin2++;
                                break;
                            case 3001 ... 4000:
                                bin3++;
                                break;
                            case 4001 ... 5000:
                                bin4++;
                                break;
                            case 5001 ... 6000:
                                bin5++;
                                break;
                            case 6001 ... 7000:
                                bin6++;
                                break;
                            case 7001 ... 8000:
                                bin7++;
                                break;
                            case 8001 ... 9000:
                                bin8++;
                                break;
                            case 9001 ... 10000:
                                bin9++;
                                break;
                        }
                        if(Biggest_clicked < items.numclicked[i])
                        {
                            Biggest_clicked = items.numclicked[i];
                            biggesst_2D = items.two_day_shipping[i];
                            BiggestCate = chosen[i];
                            BiggestID = items.ID[i];
                            BiggestName = items.name[i];
                            biggest_price = items.price[i];
                        }

                    }

                    else if (chosen[i] == "Clothing")
                    {
                        items.price[i] = (rand()%45 +550);
                        items.two_day_shipping[i] = rand() % 2;
                        items.numclicked[i] = rand() % 10000 + 1;

                        switch (items.numclicked[i])
                        {
                            case 0 ... 1000:
                                bin0++;
                                break;
                            case 1001 ... 2000:
                                bin1++;
                                break;
                            case 2001 ... 3000:
                                bin2++;
                                break;
                            case 3001 ... 4000:
                                bin3++;
                                break;
                            case 4001 ... 5000:
                                bin4++;
                                break;
                            case 5001 ... 6000:
                                bin5++;
                                break;
                            case 6001 ... 7000:
                                bin6++;
                                break;
                            case 7001 ... 8000:
                                bin7++;
                                break;
                            case 8001 ... 9000:
                                bin8++;
                                break;
                            case 9001 ... 10000:
                                bin9++;
                                break;
                        }

                        if(Biggest_clicked < items.numclicked[i])
                        {
                            Biggest_clicked = items.numclicked[i];
                            biggesst_2D = items.two_day_shipping[i];
                            BiggestCate = chosen[i];
                            BiggestID = items.ID[i];
                            BiggestName = items.name[i];
                            biggest_price = items.price[i];
                        }

                    }

                    else if (chosen[i] == "Footwear")
                    {
                        items.price[i] = (rand()%99 + 399);
                        items.two_day_shipping[i] = rand() % 2;
                        items.numclicked[i] = rand() % 10000 + 1;



                        switch (items.numclicked[i])
                        {
                            case 0 ... 1000:
                                bin0++;
                                break;
                            case 1001 ... 2000:
                                bin1++;
                                break;
                            case 2001 ... 3000:
                                bin2++;
                                break;
                            case 3001 ... 4000:
                                bin3++;
                                break;
                            case 4001 ... 5000:
                                bin4++;
                                break;
                            case 5001 ... 6000:
                                bin5++;
                                break;
                            case 6001 ... 7000:
                                bin6++;
                                break;
                            case 7001 ... 8000:
                                bin7++;
                                break;
                            case 8001 ... 9000:
                                bin8++;
                                break;
                            case 9001 ... 10000:
                                bin9++;
                                break;
                        }

                        if(Biggest_clicked < items.numclicked[i])
                        {
                            Biggest_clicked = items.numclicked[i];
                            biggesst_2D = items.two_day_shipping[i];
                            BiggestCate = chosen[i];
                            BiggestID = items.ID[i];
                            BiggestName = items.name[i];
                            biggest_price = items.price[i];
                        }


                    }

                    else if (chosen[i] == "Books")
                    {
                        items.price[i] = (rand()%7 + 45);
                        items.two_day_shipping[i] = rand() % 2;
                        items.numclicked[i] = rand() % 10000 + 1;


                        switch (items.numclicked[i])
                        {
                            case 0 ... 1000:
                                bin0++;
                                break;
                            case 1001 ... 2000:
                                bin1++;
                                break;
                            case 2001 ... 3000:
                                bin2++;
                                break;
                            case 3001 ... 4000:
                                bin3++;
                                break;
                            case 4001 ... 5000:
                                bin4++;
                                break;
                            case 5001 ... 6000:
                                bin5++;
                                break;
                            case 6001 ... 7000:
                                bin6++;
                                break;
                            case 7001 ... 8000:
                                bin7++;
                                break;
                            case 8001 ... 9000:
                                bin8++;
                                break;
                            case 9001 ... 10000:
                                bin9++;
                                break;
                        }

                        if(Biggest_clicked < items.numclicked[i])
                        {
                            Biggest_clicked = items.numclicked[i];
                            biggesst_2D = items.two_day_shipping[i];
                            BiggestCate = chosen[i];
                            BiggestID = items.ID[i];
                            BiggestName = items.name[i];
                            biggest_price = items.price[i];
                        }

                    }

                    else if (chosen[i] == "Appliances")
                    {
                        items.price[i] = (rand()%150 + 600);
                        items.two_day_shipping[i] = rand() % 2;
                        items.numclicked[i] = rand() % 10000 + 1;



                        switch (items.numclicked[i])
                        {
                            case 0 ... 1000:
                                bin0++;
                                break;
                            case 1001 ... 2000:
                                bin1++;
                                break;
                            case 2001 ... 3000:
                                bin2++;
                                break;
                            case 3001 ... 4000:
                                bin3++;
                                break;
                            case 4001 ... 5000:
                                bin4++;
                                break;
                            case 5001 ... 6000:
                                bin5++;
                                break;
                            case 6001 ... 7000:
                                bin6++;
                                break;
                            case 7001 ... 8000:
                                bin7++;
                                break;
                            case 8001 ... 9000:
                                bin8++;
                                break;
                            case 9001 ... 10000:
                                bin9++;
                                break;
                        }

                        if(Biggest_clicked < items.numclicked[i])
                        {
                            Biggest_clicked = items.numclicked[i];
                            biggesst_2D = items.two_day_shipping[i];
                            BiggestCate = chosen[i];
                            BiggestID = items.ID[i];
                            BiggestName = items.name[i];
                            biggest_price = items.price[i];
                        }

                    }

                    else
                    {
                        double min = 0.5;
                        double max = 4.99;
                        items.numclicked[i] = rand() % 10000 + 1;
                        items.price[i] = (max - min) * ((double)rand() / (double)RAND_MAX) + min;
                        items.two_day_shipping[i] = rand() % 2;

                        switch (items.numclicked[i])
                        {
                            case 0 ... 1000:
                                bin0++;
                                break;
                            case 1001 ... 2000:
                                bin1++;
                                break;
                            case 2001 ... 3000:
                                bin2++;
                                break;
                            case 3001 ... 4000:
                                bin3++;
                                break;
                            case 4001 ... 5000:
                                bin4++;
                                break;
                            case 5001 ... 6000:
                                bin5++;
                                break;
                            case 6001 ... 7000:
                                bin6++;
                                break;
                            case 7001 ... 8000:
                                bin7++;
                                break;
                            case 8001 ... 9000:
                                bin8++;
                                break;
                            case 9001 ... 10000:
                                bin9++;
                                break;
                        }


                        if(Biggest_clicked < items.numclicked[i])
                        {
                            Biggest_clicked = items.numclicked[i];
                            biggesst_2D = items.two_day_shipping[i];
                            BiggestCate = chosen[i];
                            BiggestID = items.ID[i];
                            BiggestName = items.name[i];
                            biggest_price = items.price[i];
                        }

                    }


                }

            }
                for(int b=0; b<50; b++)
                    {
                        cout << setprecision(2) << fixed
                         << left << setw(5) << items.ID[b]
                         << left << setw(17) << items.name[b]
                         << left << setw(12) << items.price[b]
                         << left << setw(15) << chosen[b]
                         << left << setw(10) << items.two_day_shipping[b]
                         << left << setw(20) << items.numclicked[b] << endl;
                    }

            cout << "Press any NUMERICAL key to continue: ";
                int input;
                cin >> input;
                if(input != 1234567896)
                {
                    system("CLS");

                    cout << "STATISTICS:" << endl << endl;

                    cout << "BIN0: " << bin0 << endl;
                    cout << "BIN1: " << bin1 << endl;
                    cout << "BIN2: " << bin2 << endl;
                    cout << "BIN3: " << bin3 << endl;
                    cout << "BIN4: " << bin4 <<endl;
                    cout << "BIN5: " << bin5 << endl;
                    cout << "BIN6: " << bin6 << endl;
                    cout << "BIN7: " << bin7 << endl;
                    cout << "BIN8: " << bin8 << endl;
                    cout << "BIN9: " << bin9 << endl << endl;

                    cout << "Most Popular Item: " << endl;

                    cout << left << setw(5) << "ID" << left << setw(17) << "Name" << left << setw(12) << "Price"
                         << left << setw(15) << "Category" << left << setw(10) << "2D Ship"
                         << left << setw(20) << "Number of Clicks" << endl;


                    cout << setprecision(2) << fixed
                         << left << setw(5) << BiggestID
                         << left << setw(17) << BiggestName
                         << left << setw(12) << biggest_price
                         << left << setw(15) << BiggestCate
                         << left << setw(10) << biggesst_2D
                         << left << setw(20) << Biggest_clicked << endl << endl;

                    cout << "Enter a file name: ";
                    char NewFileName[100];
                    cin >> NewFileName;
                    ofstream OutFile;
                    OutFile.open(NewFileName);
                    cout << endl;

                    for(int a = 0; a < 1000; a++)
                    {
                        OutFile << setprecision(2) << fixed
                                 << left << setw(5) << items.ID[a]
                                 << left << setw(17) << items.name[a]
                                 << left << setw(12) << items.price[a]
                                 << left << setw(15) << chosen[a]
                                 << left << setw(10) << items.two_day_shipping[a]
                                 << left << setw(20) << items.numclicked[a] << endl;
                    }


                            Num_OF_Files++;
                            OutFile.close();
                            goto nextfile;


                }

    }


}

