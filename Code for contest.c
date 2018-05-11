Following is C implementation to check if a given string is palindrome or not.

#include <stdio.h>
#include <string.h>
 
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
 
// Driver program to test above function
int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}

#include <stdio.h>
#include <string.h>
 
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
 
// Driver program to test above function
int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}


// CPP program to remove duplicate character
// from character array and print in sorted
// order
#include <bits/stdc++.h>
using namespace std;
 
char *removeDuplicate(char str[], int n)
{
   // Used as index in the modified string
   int index = 0;   
    
   // Traverse through all characters
   for (int i=0; i<n; i++) {
        
     // Check if str[i] is present before it  
     int j;  
     for (j=0; j<i; j++) 
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}
 
// Driver code
int main()
{
   char str[]= "geeksforgeeks";
   int n = sizeof(str) / sizeof(str[0]);
   cout << removeDuplicate(str, n);
   return 0;
}


// C program to count all duplicates from string using hashing
# include <stdio.h>
# include <stdlib.h>
# define NO_OF_CHARS 256
 
/* Fills count array with frequency of characters */
void fillCharCounts(char *str, int *count)
{
   int i;
   for (i = 0; *(str+i);  i++)
      count[*(str+i)]++;
}
 
/* Print duplicates present in the passed string */
void printDups(char *str)
{
  // Create an array of size 256 and fill count of every character in it
  int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
  fillCharCounts(str, count);
 
  // Print characters having count more than 0
  int i;
  for (i = 0; i < NO_OF_CHARS; i++)
    if(count[i] > 1)
        printf("%c,  count = %d \n", i,  count[i]);
 
  free(count);
}
 
/* Driver program to test to pront printDups*/
int main()
{
    char str[] = "test string";
    printDups(str);
    getchar();
    return 0;
}


// C program to reverse a string using recursion
# include <stdio.h>
 
/* Function to print reverse of the passed string */
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
 
/* Driver program to test above function */
int main()
{
   char a[] = "Geeks for Geeks";
   reverse(a);
   return 0;
}


#include<stdio.h>
 
/* function prototype for utility function to
  reverse a string from begin to end  */
void reverse(char *begin, char *end);
 
/*Function to reverse words*/
void reverseWords(char *s)
{
  char *word_begin = s;
  char *temp = s; /* temp is for word boundry */
 
  /*STEP 1 of the above algorithm */
  while( *temp )
  {
    temp++;
    if (*temp == '\0')
    {
      reverse(word_begin, temp-1);
    }
    else if(*temp == ' ')
    {
      reverse(word_begin, temp-1);
      word_begin = temp+1;
    }
  } /* End of while */
 
   /*STEP 2 of the above algorithm */
  reverse(s, temp-1);
}
 
/* UTILITY FUNCTIONS */
/*Function to reverse any sequence starting with pointer
  begin and ending with pointer end  */
void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
 
/* Driver function to test above functions */
int main()
{
  char s[] = "i like this program very much";
  char *temp = s;
  reverseWords(s);
  printf("%s", s);
  getchar();
  return 0;
}

/* C/C++ program to count no of words from given input string. */
#include <stdio.h>
 
#define OUT    0
#define IN    1
 
// returns number of words in str
unsigned countWords(char *str)
{
    int state = OUT;
    unsigned wc = 0;  // word count
 
    // Scan all characters one by one
    while (*str)
    {
        // If next character is a separator, set the 
        // state as OUT
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;
 
        // If next character is not a word separator and 
        // state is OUT, then set the state as IN and 
        // increment word count
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
 
        // Move to next character
        ++str;
    }
 
    return wc;
}
 
// Driver program to tes above functions
int main(void)
{
    char str[] = "One two         three\n    four\tfive  ";
    printf("No of words : %u", countWords(str));
    return 0;
}

/* CPP Program to find sum of elements
 in a given array */
#include <bits/stdc++.h>
 
// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements 
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
 
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, n));
    return 0;
}

// C program to find maximum in arr[] of size n 
#include <stdio.h>
 
// C function to find maximum in arr[] of size n
int largest(int arr[], int n)
{
    int i;
    
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max  
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", largest(arr, n));
    return 0;
}

// C program to multiply two square matrices.
#include <stdio.h>
#define N 4
 
// This function multiplies mat1[][] and mat2[][],
// and stores the result in res[][]
void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k]*mat2[k][j];
        }
    }
}
 
int main()
{
    int mat1[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int mat2[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int res[N][N]; // To store result
    int i, j;
    multiply(mat1, mat2, res);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", res[i][j]);
        printf("\n");
    }
 
    return 0;
}

// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     
 
/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 
 
/* Driver function to test above functions */
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    // To print original array
    printArray(arr, 6);
     
    // Function calling
    rvereseArray(arr, 0, 5);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, 6);
     
    return 0;
}

// C program to implement recursive Binary Search
#include <stdio.h>
 
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}
 
int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                   result);
   return 0;
}

// C program for implementation of selection sort
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

// C program for implementation of Bubble sort
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

// C program for insertion sort
#include <stdio.h>
#include <math.h>
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
 
 
 
/* Driver program to test insertion sort */
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}

#include <stdio.h>
#define N 4
 
// This function stores transpose of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}
 
int main()
{
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int B[N][N], i, j;
 
    transpose(A, B);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", B[i][j]);
        printf("\n");
    }
 
    return 0;
}

#include <stdio.h>
#define N 4
 
// This function subtracts B[][] from A[][], and stores
// the result in C[][]
void multiply(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] - B[i][j];
}
 
int main()
{
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int B[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int C[N][N]; // To store result
    int i, j;
    multiply(A, B, C);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", C[i][j]);
        printf("\n");
    }
 
    return 0;
}

#include <stdio.h>
#define N 4
 
// This function adds A[][] and B[][], and stores
// the result in C[][]
void add(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}
 
int main()
{
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int B[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    int C[N][N]; // To store result
    int i, j;
    add(A, B, C);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", C[i][j]);
        printf("\n");
    }
 
    return 0;
}

// C program to print first n Fibonacci numbers
#include <stdio.h>
 
// Function to print first n Fibonacci Numbers
void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;
 
    if (n < 1)
        return;
 
    for (i = 1; i <= n; i++)
    {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
 
// Driver Code
int main()
{
    printFibonacciNumbers(7);
    return 0;
}

#include<stdio.h>
 
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}
 
int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}
 
int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
 
    printf("Enter r: ");
    scanf("%d", &r);
 
    printf("%dP%d is %d", n, r, nPr(n, r));
 
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
 
float findArea(int a, int b, int c)
{
     // Length of sides must be positive and sum of any two sides
     // must be smaller than third side.
    if (a < 0 || b < 0 || c <0 || (a+b <= c) ||
        a+c <=b || b+c <=a)
    {
        printf("Not a valid trianglen");
        exit(0);
    }
    int s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
 
int main()
{
    int a  = 3;
    int b = 4;
    int c = 5;
 
    printf("Area is %f", findArea(a, b, c));
    return 0;
}

#include <stdio.h>
#define bool int
 
/* Returns 1 if n is a lucky no. ohterwise returns 0*/
bool isLucky(int n)
{
    static int counter = 2;
     
    /*variable next_position is just for readability of
        the program we can remove it and use n only */
    int next_position = n;
    if(counter > n)
        return 1;
    if(n%counter == 0)
        return 0;     
     
    /*calculate next position of input no*/
    next_position -= next_position/counter;
     
    counter++;
    return isLucky(next_position);
}
 
/*Driver function to test above function*/
int main()
{
    int x = 5;
    if( isLucky(x) )
        printf("%d is a lucky no.", x);
    else
        printf("%d is not a lucky no.", x);
    getchar();
}

//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  int n = 9;
  printf("%d", fib(n));
  getchar();
  return 0;
}


// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}
 
// Driver Program to test above function
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}

// Program to print all prime factors
# include <stdio.h>
# include <math.h>
 
// A function to print all prime factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)
        printf ("%d ", n);
}
 
/* Driver program to test above function */
int main()
{
    int n = 315;
    primeFactors(n);
    return 0;
}

// C++ program to check if x is a perfect square
#include <iostream>
#include <math.h>
using namespace std;
 
// A utility function that returns true if x is perfect square
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
 
// A utility function to test above functions
int main()
{
  for (int i = 1; i <= 10; i++)
     isFibonacci(i)? cout << i << " is a Fibonacci Number \n":
                     cout << i << " is a not Fibonacci Number \n" ;
  return 0;
}


#include<iostream>
using namespace std;
 
// A function to check if n is palindrome
int isPalindrome(int n)
{
    // Find reverse of n
    int rev = 0;
    for (int i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;
 
    // If n and rev are same, then n is palindrome
    return (n==rev);
}
 
// prints palindrome between min and max
void countPal(int min, int max)
{
    for (int i = min; i <= max; i++)
        if (isPalindrome(i))
          cout << i << " ";
}
 
// Driver program to test above function
int main()
{
    countPal(100, 2000);
    return 0;
}

#include <stdio.h>
 
// This function swaps values pointed by xp and yp
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}

// C program to check if a given 
// year is leap year or not
#include <stdio.h>
#include <stdbool.h>
 
bool checkYear(int year)
{
    // If a year is multiple of 400, 
    // then it is a leap year
    if (year % 400 == 0)
        return true;
 
    // Else If a year is muliplt of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;
 
    // Else If a year is muliplt of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
 
// driver code
int main()
{
    int year = 2000;
 
    checkYear(year)? printf("Leap Year"):
                   printf("Not a Leap Year");
    return 0;
}


/* my_strcmp(a, b) returns 0 if strings a and b are same, otherwise 1.   It recursively increases a and b pointers. At any point if *a is not equal to *b then 1 is returned.  If we reach end of both strings at the same time then 0 is returned. */
int my_strcmp(char *a, char *b)
{
  return (*a == *b && *b == '\0')? 0 : (*a == *b)? my_strcmp(++a, ++b): 1;
} 
 
/* driver function to test above function */
int main()
{
  char *a = "geeksforgeeks";
  char *b = "geeksforgeeks";
  if(my_strcmp(a, b) == 0)
     printf(" String are same ");
  else 
     printf(" String are not same ");  
 
  getchar();
  return 0;
}    


/* my_strcat(dest, src) copies data of src to dest.  To do so, it first reaches end of the string dest using recursive calls my_strcat(++dest, src).  Once end of dest is reached, data is copied using 
(*dest++ = *src++)?  my_strcat(dest, src). */
void my_strcat(char *dest, char *src)
{
  (*dest)? my_strcat(++dest, src): (*dest++ = *src++)? my_strcat(dest, src): 0 ;
}
 
/* driver function to test above function */
int main()
{
  char dest[100] = "geeksfor";
  char *src = "geeks";
  my_strcat(dest, src);
  printf(" %s ", dest);
  getchar();
}

// C program to illustrate 
// strcpy() function ic C/C++
#include<stdio.h>
#include<string.h>
 
int main ()
{
    char str1[]="Hello Geeks!";
    char str2[] = "GeeksforGeeks";
    char str3[40];
    char str4[40];
    char str5[] = "GfG";
     
    strcpy(str2, str1);
    strcpy(str3, "Copy successful");
    strcpy(str4, str5);
    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);
    return 0;
}

// C program to illustrate
// strcmp() function
#include<stdio.h>
#include<string.h>
 
int main()
{ 
     
    char leftStr[] = "g f g";
    char rightStr[] = "g f g";
     
    // Using strcmp()
    int res = strcmp(leftStr, rightStr);
     
    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
     
    printf("\nValue returned by strcmp() is:  %d" , res);
    return 0;
}

// C program to demonstrate strdup()
#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source); 
 
    printf("%s", source);
    return 0;
}

// A Simple C++ program to reverse a string
#include<bits/stdc++.h>
using namespace std;
 
// Function to reverse a string
void reverseStr(string &str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
 
// Driver program
int main()
{
   string str = "geeksforgeeks";
   reverseStr(str);
   cout << str;
   return 0;
}

// A quickly written program for reversing a string
// using reverse()
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str = "geeksforgeeks";
    
   // Reverse str[beign..end]
   reverse(str.begin(),str.end());
    
   cout << str;
   return 0;
}






