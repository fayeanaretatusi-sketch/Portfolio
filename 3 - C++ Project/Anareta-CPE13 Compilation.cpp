#include <iostream>
#include <string>
#include <sstream>

using namespace std;
const double PI = 3.1415;

// Activity Functions
void Activity1();
void Activity2();
void Activity3();
void Activity4();
void Activity5();
void Activity6();
void Activity7();
void Activity8();
void Activity9();
void Activity10();
void Activity11();

// Exam and Lab Test Functions
void PrelimLabTest1();
void PrelimExam();
void midtermlabtest();
void midtermexam();
void FinalLabTest();

//Helper Functions for Activity 4
double ccircumference(const double*);
double carea_func(const double*);
double ecircumference(const double*);
double earea_func(const double*);

//Helper Functions for Activity 7
void selection(int sarr[], int stot);
void bubble(int barr[], int bn);
void insertion_sort(int iarr[], int itot);

//Helper Functions for Activity 8
void insert_val(int arr[], int size);
void del_val(int arr[], int size);
void copy_arr(int arr[], int size);

//Helper Functions for Activity 9
void dequeue(int arr[], int size);
void pop(int arr[], int size);
void enqueue(int arr[], int size);
void push(int arr[], int size);

//Main menu function
int main() {
    int choice;
    int running = 1;

    while (running == 1) {
    	//Main Menu Display
        cout << "\n==========================================" << endl;
        cout << "       FINAL PROJECT - ACTIVITY MENU      " << endl;
        cout << "==========================================" << endl;
        cout << "--- ACTIVITIES ---" << endl;
        cout << " 1. Activity 1  (Introduction to C++ - Week 1)" << endl;
        cout << " 2. Activity 2  (Introduction to C++ - Week 2)" << endl;
        cout << " 3. Activity 3  (Control Statements)" << endl;
        cout << " 4. Activity 4  (Pointers & Dynamic Memory)" << endl;
        cout << " 5. Activity 5  (Array & Multi-Dimensional Array)" << endl;
        cout << " 6. Activity 6  (Search Algorithm)" << endl;
        cout << " 7. Activity 7  (Sorting Algorithms)" << endl;
        cout << " 8. Activity 8  (Other Operations in Array)" << endl;
        cout << " 9. Activity 9  (Lists, Stacks & Queues)" << endl;
        cout << "10. Activity 10 (Algorithm Development)" << endl;
        cout << "11. Activity 11 (Algorithm Development - Part 2)" << endl;
        cout << "--- EXAMINATION & PRACTICAL TEST ---" << endl;
        cout << "12. Prelim Term Laboratory Test 1" << endl;
        cout << "13. Prelim Examination" << endl;
        cout << "14. Midterm Laboratory Test" << endl;
        cout << "15. Midterm Examination" << endl;
        cout << "16. Final Term Laboratory Test" << endl;
        cout << " 0. Exit" << endl;
        cout << "==========================================" << endl;
        cout << "Enter your choice (0-16): ";
        cin >> choice;
        
        cout << endl;
		
		//Switch for functions
        switch (choice) {
            // Activities
            case 1: Activity1(); break;
            case 2: Activity2(); break;
            case 3: Activity3(); break;
            case 4: Activity4(); break;
            case 5: Activity5(); break;
            case 6: Activity6(); break;
            case 7: Activity7(); break;
            case 8: Activity8(); break;
            case 9: Activity9(); break;
            case 10: Activity10(); break;
            case 11: Activity11(); break;
            
            // Exams and Labs
            case 12: PrelimLabTest1(); break;
            case 13: PrelimExam(); break;
            case 14: midtermlabtest(); break;
            case 15: midtermexam(); break;
            case 16: FinalLabTest(); break;
            
            //Exit
            case 0: 
                cout << "Exiting Final Project. Goodbye!" << endl;
                running = 0; 
                break;
            default: 
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

//Activity 1
void Activity1() {
    cout << "--- Activity 1 (Introduction to C++ Programming - Week 1) ---" << endl;
    //Input 1st and 2nd integer
    cout << "Insert 1st integer: ";
    int int1;
    cin >> int1;
    cout << "Insert 2nd integer: ";
    int int2;
    cin >> int2;
	//Operations to perform
    cout << "The sum: " << int1 + int2; //sum
    cout << "\nThe difference: " << int1 - int2; //difference
    cout << "\nThe product: " << int1 * int2; //product
    cout << "\nThe quotient: " << int1 / int2 << endl; //quotient
}

//Activity 2
void Activity2() {
    cout << "--- Activity 2 (Introduction to C++ Programming - Week 2) ---" << endl;
    string start;
    cout << "Enter any key to show table: ";
    cin >> start;

    stringstream mytable;
	//Stringstream of table
    mytable << "-----------------Mutliplication Table-----------------\n"
            << "| 1  |  2  |  3  | 4  | 5  | 6  | 7  | 8  | 9  | 10  |\n"
            << "------------------------------------------------------" << endl
            << "| 2  |  4  |  6  | 8  | 10 | 12 | 14 | 16 | 18 | 20  |\n"
            << "------------------------------------------------------" << endl
            << "| 3  |  6  |  9  | 12 | 15 | 18 | 21 | 24 | 27 | 30  |\n"
            << "------------------------------------------------------" << endl
            << "| 4  |  8  | 12  | 16 | 20 | 24 | 28 | 32 | 36 | 40  |\n"
            << "------------------------------------------------------" << endl
            << "| 5  | 10  | 15  | 20 | 25 | 30 | 35 | 40 | 45 | 50  |\n"
            << "------------------------------------------------------" << endl
            << "| 6  | 12  | 18  | 24 | 30 | 36 | 42 | 48 | 54 | 60  |\n"
            << "------------------------------------------------------" << endl
            << "| 7  | 14  | 21  | 27 | 35 | 42 | 49 | 56 | 63 | 70  |\n"
            << "------------------------------------------------------" << endl
            << "| 8  | 16  | 24  | 32 | 40 | 48 | 56 | 64 | 72 | 80  |\n"
            << "------------------------------------------------------" << endl
            << "| 9  | 18  | 27  | 36 | 45 | 54 | 63 | 72 | 81 | 90  |\n"
            << "------------------------------------------------------" << endl
            << "| 10 | 20  | 30  | 40 | 50 | 60 | 70 | 80 | 90 | 100 |\n"
            << "------------------------------------------------------" << endl;
    string multiplicationtable = mytable.str();
    cout << multiplicationtable;
}

//Activity 3
void Activity3() {
    cout << "--- Activity 3 (Control Statements) ---" << endl;
    //Input number
    cout << "Input a number (8 to 20): ";
    int n;
    cin >> n;
    cout << endl;

    int num = n * n;

    if (n >= 8 && n <= 21) {
        for (int i = 0; i < n; i++) { // Loop for Rows
            for (int j = 0; j < n; j++) { // Loop for Columns
                
                // Alignment logic
                if (num > 9) {
                    if (num > 99) {
                        cout << num-- << " ";
                    } else {
                        cout << num-- << "  ";
                    }
                } else {
                    cout << num-- << "   ";
                }
            }
            cout << endl << endl; // Move to next row
        }
    } else {
        cout << "You entered a number less than 8 or greater than 20" << endl;
    }
}

//Activity 4
void Activity4() {
    cout << "--- Activity 4 (Pointers, Reference, and Dynamic Memory Allocation) ---" << endl;
    cout << "Insert a number for the radius of the circle and minor axis of the ellipse: ";

    // DMA radius
    double* radius = new double;
    cin >> *radius;
    cout << endl;

    // Creates a reference
    double& refRadius = *radius;
	
	//Circle
    cout << "The circumference of the circle is " << ccircumference(radius) << endl;
    cout << "The area of the circle is " << carea_func(radius) << endl;
    cout << endl;
	
	//Ellipse
    cout << "The circumference of the ellipse is " << ecircumference(radius) << endl;
    cout << "The area of the ellipse is " << earea_func(radius) << endl;
    cout << endl;

    // Deletes DMA
    delete radius;
}

    //Activity 4 functions
    //circle circumference
    double ccircumference(const double* cradius) {
        return 2 * PI * (*cradius); // 2pir
    }
    
    //circle area
    double carea_func(const double* carea) {
        return PI * (*carea) * (*carea); // pir^2
    }
    
    //ellipse circumference
    double ecircumference(const double* eradius) {
        double minorAxis = *eradius;
        double majorAxis = 2 * (*eradius);
        return PI * (minorAxis + majorAxis); // pi(A+B) approximate
    }
    
    //ellipse area
    double earea_func(const double* earea) {
        double minorAxis = *earea;
        double majorAxis = 2 * (*earea);
        return PI * minorAxis * majorAxis; // pi*A*B
    }

//Activity 5
void Activity5() {
    cout << "--- Activity 5 (Array and Multi-Dimensional Array) ---" << endl;
    //Input number of rows and columns
    int row, column;
    cout << "Input number of row: ";
    cin >> row;
    cout << "Input number of column: ";
    cin >> column;
    
    int myarray[row][column];
	
	//Input for elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int indexr = 0; indexr < row; indexr++) {
        for (int indexc = 0; indexc < column; indexc++) {
            cout << "Input: row[" << indexr + 1 << "] column[" << indexc + 1 << "]: ";
            cin >> myarray[indexr][indexc];
        }
    }
    cout << endl;
	
	//Print array content
    cout << "Array Content:" << endl;
    for (int printr = 0; printr < row; printr++) {
        for (int printc = 0; printc < column; printc++) {
            cout << myarray[printr][printc] << " ";
        }
        cout << endl;
    }
	
	//Sum of array elements
    int sum = 0;
    for (int num = 0; num < row; num++) {
        for (int s = 0; s < column; s++) {
            sum += myarray[num][s];
        }
    }

    cout << "The sum of the elements in the array: " << sum << endl;
}

//Activity 6
void Activity6() {
    cout << "--- Activity 6 (Search Algorithm) ---" << endl;
    //Initialized array
    int lsarray[4][4] = {
        {111, 222, 333, 444},
        {555, 666, 777, 888},
        {999, 100, 200, 300},
        {400, 500, 600, 700}
    };

    cout << endl;
    //Print array content
    cout << "-----Array Content------" << endl;
    for (int row = 0; row < 4; row++) {
        cout << "|";
        for (int column = 0; column < 4; column++) {
            cout << lsarray[row][column] << " | ";
        }
        cout << endl;
    }
    cout << "------------------------" << endl;
	
	//Input for number to search
    int num;
    cout << endl << "Input number to search: ";
    cin >> num;
    cout << endl;

    int found = 0; // 0 = not found, 1 = found
    
	//Search algorithm
    for (int indexr = 0; indexr < 4; indexr++) {
        for (int indexc = 0; indexc < 4; indexc++) {
            if (lsarray[indexr][indexc] == num) {
                cout << "Number " << num << " is found at Index: row[" << indexr + 1 << "] column[" << indexc + 1 << "]" << endl;
                found = 1;
                break;
            }
        }
        if (found == 1) break;
    }
	
	//Not found
    if (found == 0) {
        cout << "Element not found." << endl;
    }
}

//Activity 7
void Activity7() {
    cout << "--- Activity 7 (Sorting Algorithms) ---" << endl;
    //Initialized Varibles
    int lsarray[3] = {1, 2, 3};
    int num, found = 0;
    int arr[50], size;

	//Input for size of array
    cout << "Enter the Size of Array: ";
    cin >> size;

	//Input for array elements
    cout << "Enter " << size << " Array Elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    //Input for selecting sorting algorithm
    cout << "\nEnter a number (1 to 3) to choose sorting method:\n";
    cout << "1 = Selection Sort\n2 = Bubble Sort\n3 = Insertion Sort\n";
    cout << "Enter your choice: ";
    cin >> num;
	
	//For loop for selected sorting algorithm
    for (int choose = 0; choose < 3; choose++) {
        if (lsarray[choose] == num) {
            cout << "Number is found!\n";
            found = 1;
            if (choose == 0) selection(arr, size);
            else if (choose == 1) bubble(arr, size);
            else if (choose == 2) insertion_sort(arr, size);
            break;
        }
    }

    if (found == 0) {
        cout << "Element not found (Invalid sorting choice).\n";
    }
}

// Activity 7 Functions - Sorting Algorithms
	//Selection Sort
    void selection(int sarr[], int stot) {
        int si, sj, stemp, ssmall, sindex;
        cout << "\n--- Selection Sort ---\n";
        
        //Swaps smallest elements first
        for (si = 0; si < (stot - 1); si++) {
            ssmall = sarr[si];
            sindex = si;
            //finds smallest element
            for (sj = si + 1; sj < stot; sj++) {
                if (sarr[sj] < ssmall) {
                    ssmall = sarr[sj];
                    sindex = sj;
                }
            }
            if (sindex != si) {
                stemp = sarr[si];
                sarr[si] = sarr[sindex];
                sarr[sindex] = stemp;
            }
        }
        cout << "\nSorted Array is:\n";
        for (si = 0; si < stot; si++)
            cout << sarr[si] << " ";
        cout << endl;
    }
    
    //Bubble Sort
    void bubble(int barr[], int bn) {
        int bi, bj, btemp;
        cout << "\n--- Bubble Sort ---\n";
        //Compare adjacent element
        for (bi = 0; bi < (bn - 1); bi++) {
            for (bj = 0; bj < (bn - bi - 1); bj++) {
            	//swaps element
                if (barr[bj] > barr[bj + 1]) {
                    btemp = barr[bj];
                    barr[bj] = barr[bj + 1];
                    barr[bj + 1] = btemp;
                }
            }
        }
        cout << "\nArray Sorted Successfully!\n";
        cout << "The New Array is:\n";
        for (bi = 0; bi < bn; bi++)
            cout << barr[bi] << " ";
        cout << endl;
    }
    
    //Insertion sort
    void insertion_sort(int iarr[], int itot) {
        int ii, ij, ik, ielem, iindex;
        cout << "\n--- Insertion Sort ---\n";
        //compares previous elements with the next
        for (ii = 1; ii < itot; ii++) {
            ielem = iarr[ii];
            //Swaps element one index less
            if (ielem < iarr[ii - 1]) {
                for (ij = 0; ij <= ii; ij++) {
                    if (ielem < iarr[ij]) {
                        iindex = ij;
                        for (ik = ii; ik > ij; ik--)
                            iarr[ik] = iarr[ik - 1];
                        break;
                    }
                }
                iarr[iindex] = ielem;
            }
        }
        cout << "\nThe New Array (Sorted Array):\n";
        for (ii = 0; ii < itot; ii++)
            cout << iarr[ii] << " ";
        cout << endl;
    }

//Activity 8
void Activity8() {
    cout << "--- Activity 8 (Other Operations in Array) ---" << endl;
    //Initialized variables
    int ir, ic, flat[15], indexr, indexc;
    int lsarray1[3][5] = {
        {22, 42, 62, 81, 10},
        {11, 56, 82, 54, 12},
        {14, 16, 99, 88}
    };

	//Prints original array
    cout << "Original Array: " << endl;
    for (ir = 0; ir < 3; ir++) {
        for (ic = 0; ic < 5; ic++) {
            cout << lsarray1[ir][ic] << " ";
        }
        cout << endl;
    }
	
	//Flattens array
    int k = 0;
    for (indexr = 0; indexr < 3; indexr++) {
        for (indexc = 0; indexc < 5; indexc++) {
            flat[k] = lsarray1[indexr][indexc];
            k++;
        }
    }
    int size = k;
	
	//Choose operation to execute
    int choose;
    cout << endl;
    cout << "Choose program to operate:" << endl << "(1) Insertion" << endl << "(2) Deletion" << endl << "(3) Copy" << endl;
    cout << "Enter number: ";
    cin >> choose;

    if (choose == 1) {
        insert_val(flat, size);
    } else if (choose == 2) {
        del_val(flat, size);
    } else if (choose == 3) {
        copy_arr(flat, size);
    } else {
        cout << "Invalid choice!";
    }
}

// Activity 8 Functions
	//insertion
    void insert_val(int arr[], int size) {
        int irow, icol, val;
        int iarray[3][5];
        int k = 0;
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                iarray[ii][jj] = arr[k];
                k++;
            }
        }
    
        cout << "\nInsertion Operation\n";
        cout << "Enter row (0-2): "; cin >> irow;
        cout << "Enter column (0-4): "; cin >> icol;
        cout << "Enter value to insert: "; cin >> val;
    
        if (irow < 0 || irow >= 3 || icol < 0 || icol >= 5) {
            cout << "Invalid input!\n";
            return;
        }
    
        int pos = (irow * 5) + icol;
        for (int i = 14; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
    
        k = 0;
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                iarray[ii][jj] = arr[k];
                k++;
            }
        }
    
        cout << "\nResultant Array:\n";
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                cout << iarray[ii][jj] << " ";
            }
            cout << endl;
        }
    }
    
    //Delete 
    void del_val(int arr[], int size) {
        int irow, icol;
        int darray[3][5];
        int k = 0;
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                darray[ii][jj] = arr[k];
                k++;
            }
        }
    
        cout << "\nDeletion Operation\n";
        cout << "Enter row (0-2): "; cin >> irow;
        cout << "Enter column (0-4): "; cin >> icol;
    
        if (irow < 0 || irow >= 3 || icol < 0 || icol >= 5) {
            cout << "Invalid input!\n";
            return;
        }
    
        int pos = (irow * 5) + icol;
        for (int i = pos; i < 14; i++) {
            arr[i] = arr[i + 1];
        }
        arr[14] = 0;
    
        k = 0;
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                darray[ii][jj] = arr[k];
                k++;
            }
        }
    
        cout << "\nResultant Array:\n";
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                cout << darray[ii][jj] << " ";
            }
            cout << endl;
        }
    }
    
    //Copy
    void copy_arr(int arr[], int size) {
        int indexr, indexc, lsarray2[3][5], lsarray3[3][5];
        int k = 0;
    
        for (indexr = 0; indexr < 3; indexr++) {
            for (indexc = 0; indexc < 5; indexc++) {
                lsarray2[indexr][indexc] = arr[k];
                k++;
            }
        }
    
        for (indexr = 0; indexr < 3; indexr++) {
            for (indexc = 0; indexc < 5; indexc++) {
                lsarray3[indexr][indexc] = lsarray2[indexr][indexc];
            }
        }
    
        cout << "\nResultant Array:\n";
        for (int ii = 0; ii < 3; ii++) {
            for (int jj = 0; jj < 5; jj++) {
                cout << lsarray2[ii][jj] << " ";
            }
            cout << endl;
        }
    }

//Activity 9
void Activity9() {
    cout << "--- Activity 9 (Lists, Stacks and Queues Array Implementation) ---" << endl;
    int array[10] = {100, 99, 88, 77, 66, 55, 44, 33, 22, 11}, size = 10, cont = 0;

    cout << "Top: q-rear/TOS | Bottom: q-front/bottom of stack" << endl;
    cout << "_________________________________________________" << endl;
	
	//Print array
    cout << "\nArray:\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    while (cont == 0) {
        cout << "_________________________________________________";
        int choose;
        //Choose operations for TOS and Queue
        cout << "\nChoose operation to execute:" << endl;
        cout << "(1) Enqueue" << endl;
        cout << "(2) Dequeue" << endl;
        cout << "(3) Push" << endl;
        cout << "(4) Pop" << endl;
        cout << "(0) Exit / Stop Activity" << endl;
        cout << "Enter number: ";
        cin >> choose;

        if (choose == 2) dequeue(array, size);
        else if (choose == 4) pop(array, size);
        else if (choose == 1) enqueue(array, size);
        else if (choose == 3) push(array, size);
        else if (choose == 5 || choose == 0) {
            cout << "Returning to Main Menu." << endl;
            cont = 1;
        } else cout << "Invalid choice!" << endl;
    }
}

	// Activity 9 functions
	//Dequeue
	void dequeue(int arr[], int size) {
	    cout << "\nDequeue Operation:\n";
	    int index = size - 1;
	    //Dequeue removes q-front
	    while (index >= 0 && arr[index] == 0) {
	        index--;
	    }
	    if (index >= 0) {
	        cout << "Removed value: " << arr[index] << endl;
	        arr[index] = 0;
	    } else {
	        cout << "Array is empty, nothing to remove!" << endl;
	    }
	    cout << "Updated Array:\n";
	    for (int i = 0; i < size; i++) {
	        cout << arr[i] << endl;
	    }
	}
	
	//Pop
	void pop(int arr[], int size) {
	    cout << "\nPop Operation:\n";
	    int index = 0;
	    while (index < size && arr[index] == 0) index++;
		
		//Pop TOS
		//Shifts element upward or -1 index
	    if (index < size) {
	        cout << "Popped value: " << arr[index] << endl;
	        for (int i = index; i < size - 1; i++) {
	            arr[i] = arr[i + 1];
	        }
	        arr[size - 1] = 0;
	    } else {
	        cout << "Array is empty, nothing to pop!" << endl;
	    }
	    cout << "Updated Array:\n";
	    for (int i = 0; i < size; i++) cout << arr[i] << endl;
	}
	
	//Enqueue
	void enqueue(int arr[], int size) {
	    int val;
	    cout << "\nEnqueue Operation:\n";
	    cout << "Enter value to insert: ";
	    cin >> val;
	    //Shifts element indexes
	    //Insert at index 0
	    for (int i = size - 1; i > 0; i--) {
	        arr[i] = arr[i - 1];
	    }
	    arr[0] = val;
	    cout << "Updated Array:\n";
	    for (int i = 0; i < size; i++) cout << arr[i] << endl;
	}
	
	//Push
	void push(int arr[], int size) {
	    int val;
	    cout << "\nPush Operation:\n";
	    cout << "Enter value to insert: ";
	    cin >> val;
	    //Shifts element indexes
	    //Insert at index 0
	    for (int i = size - 1; i > 0; i--) {
	        arr[i] = arr[i - 1];
	    }
	    arr[0] = val;
	    cout << "Updated Array:\n";
	    for (int i = 0; i < size; i++) cout << arr[i] << endl;
	}

//Activity 10
void Activity10() {
    cout << "--- Activity 10 (Algorithm Development) ---" << endl;
    //Vending machine items
    string itemNames[10] = {
        "Evolving Skies Booster Pack",
        "Evolving Skies Booster Box",
        "Evolving Skies Elite Trainer Box",
        "Prismatic Evolution Booster Pack",
        "Prismatic Evolution Booster Box",
        "Prismatic Evolution Elite Trainer Box",
        "Surging Sparks Booster Pack",
        "Surging Sparks Booster Box",
        "Surging Sparks Elite Trainer Box",
        "Scarlet & Violet - 151"
    };
	
	//Item Prices
    int itemPrices[10] = {100, 900, 1100, 100, 900, 1100, 100, 900, 1100, 1500};
	
	//Menu
    cout << "---POKEMON TRADING CARD CENTER---" << endl;
    cout << "     Card Packs Available\n";

    for (int i = 0; i < 10; i++) {
        cout << "(" << i + 1 << ") " << itemNames[i] << " : P " << itemPrices[i] << ".00" << endl;
    }
    cout << endl;

    int cont = 0, bin = 0;
    int inserted = 0;

    // Bill inserting
    while (cont == 0) {
        cout << "Insert Bills:\n(1) 1000\n(2) 500\n(3) 200\n(4) 100\n(5) 50\n(0) Return to Main Menu\nEnter (0-5): ";
        cin >> bin;

        switch (bin) {
            case 1: inserted += 1000; break;
            case 2: inserted += 500; break;
            case 3: inserted += 200; break;
            case 4: inserted += 100; break;
            case 5: inserted += 50; break;
            case 0: return; // Exit to Main Menu
            default: cout << "Invalid bill.\n"; continue;
        }

        cout << "Insert coins? (1 = YES / 0 = NO): ";
        cin >> cont;
    }

    // Coin inserting
    cont = 1;
    while (cont == 1) {
        cout << "Insert Coins:\n(1) 20\n(2) 10\n(3) 5\n(4) 1\nEnter (1-4): ";
        cin >> bin;

        switch (bin) {
            case 1: inserted += 20; break;
            case 2: inserted += 10; break;
            case 3: inserted += 5; break;
            case 4: inserted += 1; break;
            default: cout << "Invalid coin.\n"; continue;
        }

        cout << "Insert more coins? (1 = YES / 0 = NO): ";
        cin >> cont;
    }
	
	//Total money inserted
    cout << "\nTotal money inserted: P " << inserted << ".00\n";

    cout << "\n-------------------------------------------\n";
    cout << "Items you can afford:\n\n";
	
	//Display affordables
    int countAffordable = 0;
    for (int i = 0; i < 10; i++) {
        if (inserted >= itemPrices[i]) {
            cout << "(" << i + 1 << ") " << itemNames[i] << " - P" << itemPrices[i] << "\n";
            countAffordable++;
        }
    }

    if (countAffordable == 0)
        cout << "You do not have enough balance for any item.\n";

    cout << "-------------------------------------------\n";
	
	//Choose item to dispense
    int item;
    cout << "Choose item (1-10) or (0) to Return to Main Menu: ";
    cin >> item;

    // Exit choice
    if (item == 0) {
        return;
    }

    if (item < 1 || item > 10) {
        cout << "Invalid selection. Transaction cancelled.";
        return;
    }

    int index = item - 1;
    int price = itemPrices[index];

    if (inserted < price) {
        cout << "\nError: Insufficient balance for this item.\n";
        return;
    }

    int change = inserted - price;
	
	//Receipt
    cout << "\n\nItem Dispensed Successfully!\n\n";

    cout << "========== RECEIPT ==========\n";
    cout << "Item: " << itemNames[index] << endl;
    cout << "Price: P " << price << ".00\n";
    cout << "Money Inserted: P " << inserted << ".00\n";
    cout << "Change: P " << change << ".00\n";
    cout << "=============================\n";
    cout << "Thank you for shopping at Pokemon Trading Card Center!\n";
}

// Activity 11
void Activity11() {
    cout << "--- Activity 11 (Algorithm Development - Part 2) ---" << endl;
    // Logo and Business Information
    cout << "	  ____    ____    ______   ______   _____    ______  _/|  _____"	<< endl;
	cout << "	 / __ \\  |    \\  |__  __| |__  __| /   __\\  |__  __| \\_/ /   __\\"	<< endl;
	cout << "	| /__\\ | |    /    |  |     |  |   \\_ |__     |  |       \\_ |__ "	<< endl;
	cout << "	|      | | |\\ \\    |  |    _|  |_  __|   \\    |  |       __|   \\" 	<< endl;
	cout << "	|__/\\__| |_| \\_\\   |__|   |______| \\_____/    |__|       \\_____/"	<< endl;
	cout << "		  ____    _      _      ____  __    __"  	<< endl;
	cout << "		 / __ \\  | |    | |    | ___| \\ \\  / /" << endl;
	cout << "		| /__\\ | | |    | |    | `==|  \\ \\/ /"	<< endl;
	cout << "		|      | | |__  | |__  | |__    |  |"		<< endl;
	cout << "		|__/\\__| |____| |____| |____|   |__|"		<< endl;
    cout << "                                       _------Q--\\" 							<< endl;
    cout << "                                     /~           )" 							<< endl;
    cout << "                                   <_____________/" 							<< endl;
    cout << "                                   /  _   )))))))))" 							<< endl;
    cout << "              []                 /        ((((((((( " 							<< endl;
    cout << "            |~~~|               (____/'   ))))))))))" 							<< endl;
    cout << "            |   |                  )))))))))))))))))           |\\" 			<< endl;
    cout << "            |   |                 ((((((((((((((((((          / |" 			<< endl;
    cout << "            |   |     /~~\\----------/|  //       \\           | _/" 			<< endl;
    cout << "            |   |<===|  ===]        ||//     \\    \\____     //' " 			<< endl;
    cout << "          //|   |     \\__/~~~~~~~~~~|^       _--~~~    ~~~-//" 				<< endl;
    cout << "         // |   |                   |       /   ()    ()  // )" 				<< endl;
    cout << "        //  |   |                   |      |  ()       _-//-~" 				<< endl;
    cout << "       //   |   |                  ((((((((| ()       (_//" 					<< endl;
    cout << "      //    |   |                   |  :   |            ~~---_" 				<< endl;
    cout << "     //     |   |                   |  |    \\  ()       ()    )" 				<< endl;
    cout << "    //      |   |                   |  |     ~--__        __-~" 				<< endl;
    cout << "   //       |___|                   |  |         |~//~~~~~" 					<< endl;
    cout << "  //        //  \\\\                 /  /          |//" 						<< endl;
    cout << " //        //     \\\\             (___(___________|" 							<< endl;
    cout << "//      [==]       [==]" 														<< endl;
    cout << "---------------------------------------------------------------------------" 	<< endl;
	cout << "    __________ __" 															<< endl;
	cout << "   |    ___  _|__|_"  															<< endl;
	cout << "   |  ,'   '. {' )" 															<< endl;
	cout << "   | :  O O  : )(" 															<< endl;
	cout << "   | :  ._\\\\.:/ )\\         Welcome to Artist's Alley" 						<< endl;
	cout << "   |  '.___\\\\/ /  |        M. L. Tagarao Street, Lucena City, 4301 Quezon" 	<< endl;
	cout << "   |        '-'   |        https://artistsalley.com/Tusi" 						<< endl;
	cout << "   |_________ |   |" 															<< endl;
	cout << "      /-----\\\\|___|" 														<< endl;
	cout << "     /       \\\\|||" 															<< endl;
	cout << "              .:;;" 															<< endl;
	cout << "---------------------------------------------------------------------------" 	<< endl;
    //List and Menu of Services
    string serviceNames[13] = {
        "Sketch: Bust",
        "Sketch: Half",
        "Sketch: Full",
        "Lines: Bust",
        "Lines: Half",
        "Lines: Full",
        "Flats: Bust",
        "Flats: Half",
        "Flats: Full",
        "Detailed: Bust",
        "Detailed: Half",
        "Detailed: Full",
        "Full Illustration"
    };
    
	// Service prices
    int servicePrices[13] = {
        100, 150, 200, 400, 490, 500,
        800, 900, 980, 1000, 1200, 1500, 5000
    };

    cout << "\n			---|| ART COMMISSION SERVICES ||---\n\n";

    // Service list printing
    for(int i = 0; i < 13; i++){
        cout << "			(" << i+1 << ") " << serviceNames[i] << " | P " << servicePrices[i] << ".00" << endl;
    }
    cout << endl;

    // Service selection
    int choice;
    cout << "			Select a service (1-13): ";
    cin >> choice;

    // Validating selection
    if(choice < 1 || choice > 13){
        cout << "Invalid selection." << endl;
        // Reset color before return
        system("color 07");
        return;
    }

    int price = servicePrices[choice - 1];
	
	//summary
    //duration per service
    string duration;
    if(choice >= 1 && choice <= 3) duration = "1 hour";          // Sketch
    else if(choice >= 4 && choice <= 6) duration = "12 hours";    // Lines
    else if(choice >= 7 && choice <= 9) duration = "18 hours";    // Flats
    else if(choice >= 10 && choice <= 12) duration = "24 hours";  // Detailed
    else duration = "1 week";                                    // Full Illustration
	
	cout << "---------------------------------------------------------------------------" 	<< endl;
	
	//Print summary
    cout << "\n			You chose: " << serviceNames[choice - 1] << endl;
    cout << "			Price: P " << price << ".00" << endl;
    cout << "			Estimated duration: " << duration << endl;

    // Transaction confirmation
    int confirm;
    cout << "\nProceed with the transaction? (1 = Yes, 0 = No): ";
    cin >> confirm;
	
	//Cancels transaction
    if(confirm == 0){
        cout << "\nTransaction cancelled. Thank you for visiting!" << endl;
        return;
    }

    //Payment
    float money;
    cout << "\nEnter payment: P ";
    cin >> money;

    if(money < price){
        cout << "Insufficient amount. Transaction cancelled." << endl;
        return;
    }
    
    cout << "---------------------------------------------------------------------------" 	<< endl;

    float change = money - price;

    //Receipt
    cout << "\n		=================== RECEIPT ===================" << endl;
    cout << "			Service:   " << serviceNames[choice - 1] << endl;
    cout << "			Duration:  " << duration << endl;
    cout << "			Price:     P " << price << ".00" << endl;
    cout << "			Cash:      P " << money << endl;
    cout << "			Change:    P " << change << endl;
    cout << "		================================================" << endl;
    cout << "     		Thank You for Supporting the Artist!" << endl;
    cout << "		================================================\n" << endl;
}

// Prelim Lab Test 1
void PrelimLabTest1() {
    cout << "--- Prelim Term Laboratory Test 1 ---" << endl;
    int seconds;
    cout << "Seconds Converter" << endl;
    cout << "Input seconds for conversion: ";
    cin >> seconds;
    
    //Initialized variables
    int i_seconds = seconds;
    int minutes = 0;
    int hours = 0;
    int days = 0;
    
    int secs;
    
    //minutes calculations
    minutes = seconds/60;
    secs = seconds-(minutes*60);
    
    //hours calculations
    hours = minutes/60;
    minutes = minutes-(hours*60);
    
    //days calculation
    days = hours/24;
    hours = hours-(days*24);
    
    //to convert 60 minutes into 1 hour
    if(minutes == 60){
        hours ++;
        minutes = 0;
    }
    
    //to convert 24 hours into 1 day
    if(hours == 24){
        hours = 0;
        days++;
    }
    
    //Display converted time
    cout << i_seconds << " seconds." <<endl;
    cout << "The converted time: ";    
    cout << days << ":" << hours << ":" << minutes << ":" << secs << endl;

    // --- Added Requirement: Time Check ---
    // The time of the test is 4:30 PM (16:30:00)
    cout << "\nTest Time starts at 4:30 PM (16:30:00)" << endl;
    
    // 16:30:00 in seconds from midnight
    // 16 hours * 3600 + 30 minutes * 60 = 57600 + 1800 = 59400 seconds
    int start_time_seconds = 59400;
    
    // Total seconds from midnight after adding duration
    int total_seconds = i_seconds + start_time_seconds;
    
    if (total_seconds >= 86400) {
        cout << "Result: The time upon adding the converted output EXCEEDS 23:59:59." << endl;
    } else {
        int final_h = total_seconds / 3600;
        int final_m = (total_seconds % 3600) / 60;
        int final_s = total_seconds % 60;
        
        cout << "New Time: " << final_h << ":" << final_m << ":" << final_s << endl;
        cout << "Result: The time does NOT exceed 23:59:59." << endl;
    }
}

// Prelim Examination 
void PrelimExam() {
    cout << "--- Prelim Term Examination ---" << endl;
    cin.ignore();
    
    //Input day of the week
    string day;
    cout << "Enter what day will the month will start (lower case): ";
    getline(cin, day);
    
    int weekday = 0;
    
    //if statement for the start of the month
    if(day == "monday")      weekday = 1;
    else if(day == "tuesday") weekday = 2;
    else if(day == "wednesday") weekday = 3;
    else if(day == "thursday") weekday = 4;
    else if(day == "friday")   weekday = 5;
    else if(day == "saturday") weekday = 6;
    else if(day == "sunday")   weekday = 7;
    else {
        cout << "Invalid day entered." << endl;
        return;
    }
    
    cout << "Start of the Month is " << day << endl;
    cout << endl;
    
    // Print Day Headers
    cout << "Mon Tue Wed Thu Fri Sat Sun" << endl;
    
    // Calendar Printing
    int starter = 1;
    int limit = 30;
    
    // Print indentation for the first week
    for(int i = 1; i < weekday; i++){
        cout << "    "; // 4 spaces
    }
    
    int currentDayOfWeek = weekday;
    
    while(starter <= limit) {
        // Print the day number
        if(starter < 10) cout << starter << "   ";
        else cout << starter << "  ";
        
        // Move to next line if it is Sunday
        if(currentDayOfWeek == 7) {
            cout << endl;
            currentDayOfWeek = 0; // Reset
        }
        
        starter++;
        currentDayOfWeek++;
    }
    cout << endl;
    
    // Days to Sunday Calculation
    int daysToSunday = 7 - weekday;
    
    cout << endl << daysToSunday << " days to Sunday" << endl;
}

// Midterm Lab Test
void midtermlabtest() {
    cout << "--- Midterm Laboratory Test ---" << endl;
    int array1[5], array2[5], array3[5];
    int lsarray[3][5];
    int i, j;

    // Input for Set 1
    cout << "Enter 5 2-digit integers for array 1:" << endl;
    for(i = 0; i < 5; i++) {
        cout << "Array 1 [" << i+1 << "]: ";
        cin >> array1[i];
    }
    cout << endl;

    // Input for Set 2
    cout << "Enter 5 2-digit integers for array 2:" << endl;
    for(i = 0; i < 5; i++) {
        cout << "Array 2 [" << i+1 << "]: ";
        cin >> array2[i];
    }
    cout << endl;

    // Input for Set 3
    cout << "Enter 5 2-digit integers for array 3:" << endl;
    for(i = 0; i < 5; i++) {
        cout << "Array 3 [" << i+1 << "]: ";
        cin >> array3[i];
    }
    cout << endl;

    // Copying arrays into the 3x5 2D array
    for(i = 0; i < 5; i++) {
        lsarray[0][i] = array1[i]; // Row 0
        lsarray[1][i] = array2[i]; // Row 1
        lsarray[2][i] = array3[i]; // Row 2
    }

    cout << "Original Array:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            cout << lsarray[i][j] << " ";
        }
        cout << endl;
    }

    // Bubble Sort (Ascending)
    int totalElements = 3 * 5;
    for(i = 0; i < totalElements - 1; i++) {
        for(j = 0; j < totalElements - i - 1; j++) {
            
            //Coordinates on array
            int r1 = j / 5;
            int c1 = j % 5;
            
            int r2 = (j + 1) / 5;
            int c2 = (j + 1) % 5;

            // Compare and Swap
            if(lsarray[r1][c1] > lsarray[r2][c2]) {
                int temp = lsarray[r1][c1];
                lsarray[r1][c1] = lsarray[r2][c2];
                lsarray[r2][c2] = temp;
            }
        }
    }

    cout << "\nSorted 3x5 Array (Ascending):" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            cout << lsarray[i][j] << " ";
        }
        cout << endl;
    }
}

// Midterm Examination
void midtermexam() {
    cout << "--- Midterm Examination ---" << endl;
    char temp;
    cin.get(temp);
    
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    stringstream ss(fullName);
    
    // Arrays to store characters
    char vowelArr[100];
    char consArr[100];
    int vCount = 0;
    int cCount = 0;

    char c;
    while (ss.get(c)) { 
        // Convert to lowercase manually
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // Go straight to counting
        // Check for vowels
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelArr[vCount] = c; 
            vCount++;
        } 
        // Check for consonants (must be a valid letter a-z) to exclude spaces
        else if (c >= 'a' && c <= 'z') {
            consArr[cCount] = c;
            cCount++;
        }
    }
    
    // Bubble Sort Consonants
    for (int i = 0; i < cCount - 1; i++) {
        for (int j = 0; j < cCount - i - 1; j++) {
            if (consArr[j] > consArr[j+1]) {
                char temp = consArr[j];
                consArr[j] = consArr[j+1];
                consArr[j+1] = temp;
            }
        }
    }

    // Print Vowels
    cout << "Vowels: ";
    for(int i = 0; i < vCount; i++) {
        cout << vowelArr[i] << " ";
    }
    cout << endl;

    // Print Consonants
    cout << "Consonants: ";
    for(int i = 0; i < cCount; i++) {
        cout << consArr[i] << " ";
    }
    cout << endl;
}

// Final Term Lab Test
void FinalLabTest() {
    cout << "--- Final Term Laboratory Test ---" << endl;

    int array1[6] = {25, 50, 75, 100, 0, 0};
    int array2[6] = {0};
    int input;
    int i;

    // Print Array1
    cout << "Array 1: ";
    for (i = 0; i < 6; i++)
        cout << array1[i] << " ";
    cout << endl;

    // Insert numbers until array1 is full
    for (i = 0; i < 6; i++) {
        if (array1[i] == 0) {
            cout << "Enter 4-digit integer: ";
            cin >> input;
            array1[i] = input;
        }
    }
	
	// Output results
    cout << "\nOriginal Array 1: ";
    for (i = 0; i < 6; i++)
        cout << array1[i] << " ";
	
    // POP elements from array1 into array2
    int top = 5;
    for (i = 0; i < 6; i++) {
        array2[i] = array1[top];
        array1[top] = 0;
        top--;
    }

    // Output results
    //Array 1
    cout << "\nResultant Array 1: ";
    for (i = 0; i < 6; i++)
        cout << array1[i] << " ";
    
    cout << "\nResultant Array 2: ";
    for (i = 0; i < 6; i++)
        cout << array2[i] << " ";
}

