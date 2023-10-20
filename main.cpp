// HELLO WORLD PROGRAM
/*#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!\n";
}*/

// CALCULATOR USING SWITCH CASE
/*#include<iostream>
using namespace std;
int main(){
  int a,b;

  cout<<"enter the value of a "<<"enter the value of b"<<endl;
  cin>> a >> b ;

  char (operation);
  cout<<"enter the operation"<<endl;
  cin>>operation;

  switch(operation){
    case '+': cout<<(a+b)<<endl;
    break;

    case '-': cout<<(a-b)<<endl;
    break;

    case '*': cout<<(a*b)<<endl;
    break;

    case '/': cout<<(a/b)<<endl;
    break;

    case '%': cout<<(a%b)<<endl;
    break;

    default: cout<<"invalid operation";
    break;
  }
}*/

// EVEN OR ODD MAIN FUNCTION
/*#include<iostream>
using namespace std;

int evenorodd(int n) {
  if(n%2==0){
    cout<<"No is even"<<endl;
  }
  else{cout<<"NO is odd"<<endl;}
}
int main(){
  int num;
  cin>> num;
  evenorodd(num);
  return 0;
}*/

// PRIME NO OR NOT
/*#include <iostream>
using namespace std;
bool isprime(int n){
  for (int i=2; i<n; i++){
    if(n%i==0){
     return 0;
    }
      }
    return 1;
}
int main(){
  int n;
  cin>>n;
  if(isprime(n)){
    cout<<"prime no"<<endl;
  }
  else{
    cout<<"not prime"<<endl;
  }
  }*/

// COUNTING NUMBERS
/*#include<iostream>
using namespace std;
void countnum(int no){
  for(int i=1; i<=no; i++){
    cout<<" i "<<" ";
    }
     cout<<endl;
}
int main(){
  int n;
  cin>>n;
  countnum(n);

  return 0;
}*/

// POWER OF NUMBER
/*#include<iostream>
using namespace std;
int power (int a , int b){
  int ans = 1;
  for(int i=1; i<=b; i++){
    ans = ans * a;
  }
  return ans;
}
int main(){
  int c , d;
  cin>> c >> d;
  int answer = power (c,d);
  cout<<"answer is "<< answer <<endl;
  return 0;
}*/

// nCr FORMULA
/*#include<iostream>
using namespace std;
int factorial(int n)
{
 int fact = 1;
 for(int i = 1; i<=n; i++ )
   {
        fact = fact * i;
   }
   return fact;
}
int nCr(int n, int r)
{
int num = factorial(n);
int denom = factorial(r) * factorial(n-r);

    return num/denom;
}
int main( ) {

    int n, r;
    cin>> n >> r ;
    cout <<" Answer is " << nCr(n,r) << endl;

    return 0;
}*/

// FACTORIAL OF A NUMBER
/*#include <iostream>
using namespace std;

int main()
{
  int n;
  long factorial = 1.0;
  cout << "Enter a positive integer: ";
  cin >> n;
  for(int i = 1; i <= n; ++i)
  {
  factorial = factorial * i;
  }
  cout << "Factorial of " << n << " = " << factorial;
}*/

// FIBONACCI SERIES
/*#include<iostream>
using namespace std;
 void fibno(int n)
{
   int a=0;
   int b=1;
   cout<<a<<" "<<b<<" ";
   for(int i=0; i<=n; i++)
   {
     int next_number=a+b;
     cout<<"next_number"<<" ";

     a=b;
     b=next_number;
   }
   return;
 }

int main()
{
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;

   fibno (n);

}*/

// ARITHMETIC MEAN
/*#include<iostream>
using namespace std;
int APterm(int num)
{
  int ans = 3*num+7;
  return ans;
}
int main()
{
 int n;
  cout<<" Enter the value of n"<<endl;
  cin>>n;

  int answer= APterm(n);
  cout<<"The nth term is "<<answer<<endl;
}*/

// BIT CONVERTER
/*#include<iostream>
#include<math.h>
using namespace std;
int bitconvert(int n )
{
  int i=0;
  int ans =0;
  while(n!=0)
  {
    int bit = n&1;
    ans= ans+bit*pow(10,i);
    n=n>>1;
    i+i+1;
  }
  return ans;
}

int bitcounter(int n)
{
  int num = bitconvert(n);
  int ans=0;
  while(num!=0)
    {
      int digit = num%10;
      if(digit==1)
      {
        ans=ans+digit;
      }
      num=num/10;
    }
  return num;
  return ans;
}
int main()
{
  int a,b;
  cout<<"enter the value of A and B"<<endl;
  cin>>a>>b;
  int answer= bitcounter(a) + bitcounter(b);
  cout<<answer;
}*/

// MONEY COUNT
/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<" enter the amount";
  cin>>n;

  int amount=0,rs1=100,rs2=50,rs3=20,rs4=10;
  int count1=0,count2=0,count3=0,count4=0;

  switch(1)
    {
      case 1: count1 = (n/rs1);
      amount=n-(rs1*count1);
        case 2: count2 = (n/rs2);
      amount=n-(rs2*count2);
        case 3: count3 = (n/rs3);
      amount=n-(rs3*count3);
        case 4: count4 = (n/rs4);
      amount=n-(rs4*count4);
      break;
    }

 cout<<"the no of hundered rupees note are"<<count1<<endl;

 cout<<"the no of fifty rupees note are"<<count2<<endl;

 cout<<"the no of twenty rupees note are"<<count3<<endl;

 cout<<"the no of ten rupees note are"<<count4<<endl;

  return 0;
}*/

// SUM OF ARRAY
/*#include<iostream>
using namespace std;
int sumArr(int Arr[],int n)
{
  int sum =0;
  for(int i=0;i<=n;i++)
    {
      sum+= Arr[i];
    }
  return sum;
}
int main()
{
  int a[100],n;
  cin>>n;
  for(int i=0;i<=n;i++)
    {
      cin>>a[i];
    }
  cout<<"the sum of all array element"<<sumArr(a,n)<<endl;
}*/

// SWAP ALTERNATE
/*#include<iostream>
using namespace std;
void printarray(int arr[], int n)
{
  for(int i=0 ; i<=n; i++)
    {
      cout<<arr[i]<<" ";
    }
      cout<<endl;
}
 void swapalternate(int arr[] , int size)
{
  for(int i=0; i<=size; i=i+2)
    {
      if(i+1<size)
      {
        swap(arr[i],arr[i+1]);
      }
    }
}
int main()
{
  int even [6] = {5,6,98,65,54,87};
  int odd [5] = { 8,3,47,53,29};

  swapalternate(even,6);
  printarray(even,6);
  cout<<endl;

  swapalternate(odd,5);
  printarray(odd,5);

return 0;
}*/

// FIND UNIQUE ELEMENT
/*#include<iostream>
using namespace std;
int main()
{
  int arr[]=[1,2,3,4,6,1,2,3,4];
  int size = sizeof (arr[]) /sizeof (int);
  int answer = 0;
  for(int i=0; i<=size; i++)
    {
      answer = answer ^ arr[i];
     }
  }*/

// FIND DUPLICATE ARRAY
/*#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
        ans = ans^arr[i];
    }

    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
        ans = ans^i;
    }
    return ans;
}
int main()
{
    vector<int> arr = {5, 2, 5, 2, 7, 6, 6};
    findDuplicate(arr);
}*/

// BINARY SEARCH
/*#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}


int main() {

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}

int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        //cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}*/

// FIRST AND LAST POSITION OF AN ELEMENT
/*#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr [], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main ()
{
  int even[5]={1,2,3,3,4};

  cout<<" first occurence of 3 at index is"<<  firstOcc(even, 5, 3)
  <<endl;
  cout<<" last occurence of 3 at index is"<< lastOcc(even,  5,3)
  <<endl;
  return 0;

}*/

// PEAK IN THE MOUNTAIN
/*#include<vector>
using namespace std;

class Solution {
public:

    int find_pivot(vector<int> v) {
        int s = 0, e = v.size() - 1;
        int mid=(s + e) / 2;
        while (s < e)
        {
                if(v[mid] < v[mid+1])
                        s=mid+1;
                else
                        e = mid;

                mid = (s + e) / 2;
        }
        return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};*/

// FIND PIVOT ELEMENT
/*#include<iostream>
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    int arr[5] = {1, 3, 8, 10, 17};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}*/

// REVERSE THE ARRAY
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {

    int s = 0, e =v.size()-1;

    while(s<=e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;

}

void print(vector<int> v) {

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v ;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);

    cout << "Printing reverse Array" <<endl;
    print(ans);


    return 0;
}*/

// MERGE TWO SORTED ARRAY
/*#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    //copy first array k element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array k remaining element ko
    while(j<m) {
        arr2[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}*/

// STRING PROBLEM
/*#include<iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }


    return 'a'+ans;

}

int main( ) {

    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';
    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;
    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;
    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;
    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;


   string s;
   cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}*/

// PALINDROME , VALID STRING
/*#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0'
&& ch <= '9')) { return 1;
        }

        return 0;
    }

    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {

        //faltu character hatado
        string temp = "";

        for(int j=0; j<s.length(); j++) {
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }

        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) {
            temp[j] = toLowerCase(temp[j]);
        }

        //check palindrome
        return checkPalindrome(temp);

    }
};*/

// 2-D ARRAYS
/*#include<iostream>
#include<climits>
using namespace std;

bool isPresent(int arr[][3],int target, int row, int col)
{
  for(int row=0;row<3;row++)
    {
      for(int col=0;col<3;col++)
      {
        if(arr[row][col])
        {
          return 1;
        }
      }
    }
  return 0;
}
//to print col wise sum
void printcolsum(int arr[][3],int row,int col)
{
  cout<<"Printing sum -->"<<endl;
  for(int col=0;col<3;col++)
    {
      int sum=0;
      for(int row=0;row<3;row++)
        {
          sum += arr[row][col];
        }
      cout<< sum<<" ";
    }
  cout<<endl;
}
//to print col wise sum
void printsum(int arr[][3],int row,int col)
{
  cout<<"Printing sum -->"<<endl;
  for(int row=0; row<3; row++)
    {
      int sum=0;
      for(int col=0;col<3;col++)
        {
          sum += arr[row][col];
        }
      cout<< sum<<" ";
    }
  cout<<endl;
}

int largestrowsum(int arr[][3],int row,int col)
{
  int maxi = INT_MIN;
  int rowIndex = -1;

  for(int row=0;row<3;row++)
    {
      int sum =0;
      for(int col=0;col<3;col++)
        {
          sum += arr[row][col];
        }
      if(sum>maxi)
      {
        maxi = sum;
        rowIndex =row;
      }
    }
  cout<<"the maximumsum is"<<maxi<<endl;
  return rowIndex;
}

int main()
{
  //create 2d array
  int arr[3][3];
  cout<<"Enter the elements"<<endl;
  //taking row wise input
  for(int row=0;row<3;row++)
    {
      for(int col=0;col<3;col++)
        {
          cin>>arr[row][col];
        }
    }

    //taking input col wise
     for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }


    cout << "Printing the array " << endl;
    //print
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout <<" Enter the element to search " << endl;
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 3)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }
    printcolsum(arr, 3, 3 );

   int ansIndex = largestrowsum(arr,3,3);
   cout << " Max row is at index " << ansIndex << endl;

    return 0;
}*/

// FIND GCD USING FORMULA (A-B,B)
/*#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {

    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}*/

// DSA MATHS

// CPP program to count the number of numbers between
// 1 and 1000, including both, that are divisible by 3 or 4
/*#include <bits/stdc++.h>
using namespace std;

// function to count the divisors
int countDivisors(int N, int a, int b)
{
    // Counts of numbers
    // divisible by a and b
    int count1 = N / a;
    int count2 = N / b;

    // inclusion-exclusion
    // principle applied
    int count3 = (N / (a * b));

    return count1 + count2 - count3;
}

// Driver Code
int main()
{
    int N = 1000, a = 3, b = 4;
    cout << countDivisors(N, a, b);
    return 0;
}*/

// CATALAN NUMBER
/*#include <iostream>
using namespace std;

// A recursive function to find nth catalan number
unsigned long int catalan(unsigned int n)
{
    // Base case
    if (n <= 1)
        return 1;

    // catalan(n) is sum of
    // catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
        res += catalan(i) * catalan(n - i - 1);

    return res;
}

// Driver code
int main()
{
    for (int i = 0; i < 10; i++)
        cout << catalan(i) << " ";
    return 0;
}*/

// POINTERS
/*#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;

    cout << num << endl;

    // address of Operator - &

    cout <<" address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;



    return 0;
}*/

// BASIC POINTERS EX
/*#include<iostream>
using namespace std;

int main () {

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0;

    //cout << *p << endl;


    //int i = 5;
    //int *q = &i;
    //cout << q << endl;
    //cout << *q << endl;
    //int *p = 0;
    //p = &i;
    //cout << p << endl;
    //cout << *p << endl;


   int num = 5;
   int a = num;
   cout << "a before " << num << endl;
   a++;
   cout << "a after " << num << endl;


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;

   //important concept
   int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl;
   *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;


    return 0;
}*/

// POINTERS WITH ARRAY AND FUNCTIONS
// PROBLEM ON INT ARR
/*#include<iostream>
using namespace std;

int main()
{
  int arr[10] = {23,122,41,67};

  // dono same technique hai
  cout<< "address of first meory block is "<< arr << endl;
  cout<< arr[0] <<endl; // value print kreg 0 index pe
  cout<< "address of first meory block is "<< &arr[0] << endl;

  cout<< "4th "<< *arr <<endl;
  cout<< "4th "<< *arr +1 <<endl;
  cout<< "6th "<< *(arr +1) <<endl;
  cout<< "7th "<< *(arr) +1 <<endl;
  cout<< "8th "<< arr[2] <<endl;
  cout<< "9th "<< *(arr + 2 )<<endl;

  int i=3;
  cout<< i[arr]<<endl;

  int temp[10] = {1,2};
  cout<< sizeof(temp)<<endl;
  cout<< " ist " << sizeof(*temp)<<endl;
  cout<< " 2nd " << sizeof(&temp)<<endl;

  int *ptr= &temp[0];
  cout<< sizeof(ptr)<<endl;
  cout<< sizeof(*ptr)<<endl;
  cout<< sizeof(&ptr)<<endl;

  int a[20] = {1,2,3,5};
  cout<< &a[0]<< endl;
  cout<< &a << endl;
  cout<< *a << endl;

  int *p = &a[0];
  cout<< p << endl;
  cout<< &p << endl;
  cout<< *p << endl;

  int ari[10];

  // ari = ari +1; //error dega

  int *pt = &ari[0];
  cout<< pt << endl;
  pt = pt + 1;
  cout<< pt << endl;

}*/

// PROBLEM ON CHRACTER ARRAY
/*#include<iostream>
using namespace std;
int main()
{
  int arr[5] = {1,2,3,4,5};
  char ch[6] ="abcde";

  cout<< arr << endl;
  //attention here
  // implementation ke time pe int and char different hai
  cout<< ch << endl;

  char *c = &ch[0];
  //print an entire string
  // string ke last mein null character hota hai
  cout<< c << endl;

  //char ch[6] = "abcdf";
  //char *c = "abcde"; //bahut risky hai
}*/

// FUNCTION IN POINTER
/*#include<iostream>
using namespace std;
void print (int *p)
{
  cout<< *p << endl;
}

void update(int *p)
{
  //p = p + 1;
  //cout<< "inside"<<p<<endl;
  *p = *p +1;  //to update the value
}

int getsum(int arr[] , int n)
// isme array pura nhi aata bas ek pointer aata hai *arr or arr[]
{
  cout<< endl << " size >> " << sizeof(arr) << endl;
  int sum = 0;
  for(int i=0; i<n; i++)
    {
      sum += arr[i];
    }
  return sum;
}

int main()
{
  int value = 5;
  int *p = &value;

  print(p);

  cout<< " before update " << *p <<endl;
  update(p);
  cout<< " after update " << *p <<endl;

  int arr[6] = {1,2,3,4,5,8};
    cout<< "sum is >>"  << getsum(arr,6);
  cout<< "sum is >>"  << getsum(arr+3,3);
}*/

// DOUBLE POINTER
/*#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    // *p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}
    void update(int *p){
        *p = (*p)  *  2;
    }
        void increment(int **p){
        ++(**p);
    }
int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;
    cout<< endl << endl <<" Sab sahi chal rha h " << endl << endl ;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    cout << &p << endl;
    cout << p2 << endl;
    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;





        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;



    return 0;
}*/

// POINTERS MCQ QUESTION
/*#include<iostream>
using namespace std;
int main()
{

    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout  << first << " " << second << endl; //OUTPUT 8 9

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first  << endl;

    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;

    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;

    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout  << first << "  " << second << endl;

    float f = 12.5;
    float p = 21.5;  // output 21.5 21.5 215
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;


    int arr[5];
    int *ptr;   // output 20 8
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    int arr[] = {11, 21, 13, 14}; //output 11 21
    cout << *(arr) << " " << *(arr+1) << endl;

    int arr[6] = {11, 12, 31}; //output 01x543 01x543
    cout << arr << " " << &arr << endl;

    int arr[6] = {11, 21, 13};  //output 01xk985474
    cout << (arr + 1) << endl;

    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;//output 31

    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3); //output 11 14

    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl; //output error

     char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl; //output b


    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl; //output abcde

    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;   //output bcde

    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl; //output b b


    void update(int *p){
        *p = (*p)  *  2;
    }
    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;//output 20
    }


    void fun(int arr[]) {
        cout << arr[0] << " ";
    }

    int main() {
        int arr[] = {11, 12, 13, 14};
        fun(arr + 1);
        cout << arr[0] << endl; //output
    }



    void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

    int main(){
        int a = 70;
        square(&a);
        cout << a << endl;
    }


    int first = 10;
    int *p = &a;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl; //output 111 119


    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl; //output 102 101

    void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl; //output 111
    }



    int main()
    {
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;
    return 0;
    }


    int main()
    {
        char *p;
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;
        return 0;
    }


    int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++) {
            *(arr + i) = 65 + i;
        }
        *(arr + i) = '\0';
        cout << arr;
        return 0;
    }

    int main()
    {
        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;
        cout<<*ptr2<<" ";
        cout<< ptr2 - ptr1;
        return 0;
    }


    int main() {
        char st[] = "ABCD";
        for(int i = 0; st[i] != ‘\0’; i++) {
            cout << st[i] << *(st)+i << *(i+st) << i[st];
        }
        return 0;
    }

    void Q(int z)
    {
        z += z;
        cout<<z << " ";
    }

    void P(int *y)
    {
        int x = *y + 2;
        Q(x);
        *y = x - 1;
        cout<<x << " ";
    }

    int main()
    {
        int x = 5;
        P(&x);
        cout<<x;
        return 0;
    }


    int main()
    {
        int ***r, **q, *p, i=8;
        p = &i;
        (*p)++;
        q = &p;
        (**q)++;
        r = &q;
        cout<<*p << " " <<**q << " "<<***r;
        return 0;
    }


    int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
        return 0;
    }
}*/

// REFERENCE VARIABLE AND DYNAMIC MEMORY VARIABLE

// REFERENCE VARIABLE
/*#include <iostream>
using namespace std;

void update(int n) //paass by value
{
  n++;
}

void update2(int &n) //pass by refernce
{
  n++;
}

int& func(int a)
//bad practice warning aayega because its a local variable
{
  int num = a;
  int& ans = num;
  return ans;
}


int main()
{

  int i = 1;
  int &j = i;

  cout<< " print the value of i "<< i << endl;
  j++;
  cout<< " print the value of i "<< i << endl;
  i++;
  cout<< " print the value of i "<< i << endl;



  //pass by value method

  int n =5;
  cout<< " before "<< n << endl;
  update(n);
  cout<< "after "<< n << endl;

  //pass by reference
  int n2 =5;
  cout<< " before "<< n << endl;
  update2(n);
  cout<< "after "<< n << endl;


  func(n);

}*/

// ARRAY
/*#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int n;
    cin >> n;

    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

//case 1
    while(true) {
        int i = 5;
    }

//case 2
    while(true) {
        int* ptr = new int;
    }




    return 0;
}*/

// array
/*#include<iostream>
using namespace std;
int main()
{

  char ch = 'a';
  cout<< sizeof(ch) <<endl;

  char *c = &ch ;
  cout<< sizeof(c) <<endl;

}*/

// DYNAMIC MEMORY ALLOCATION IN 2-D ARRAY
/*#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai

    return 0;
}*/

// RECURSION
// FIND FACTORIAL OF A NO USING RECURSIVE RELATION
/*#include<iostream>
using namespace std;

int factorial(int n)
{
  //cout<< n << endl;
  //islo run krne se yeh tab tak chalega jab tak stack memory full na

  //base case
  //return manfatory hai nhi toh SF a jayega
  if (n==0)
  {
    return 1;
  }
  return n*factorial(n-1);
}
int main()
{
  int n;
  cin>>n;
  int ans = factorial(n);

  cout<< ans << endl;

  return 0;

}*/

// FIND POWER OF A NO USING RECURSIVE RELATION
/*#include<iostream>
using namespace std;

int power(int n)
{
  if(n==0)
  {
    return 1;
  }
  return 2*power(n-1);
}
int main ()
{
  int n;
  cin >> n;
  int ans = power(n);

  cout<< ans << endl;
}*/

// FIND COUNTING OF A NO USING RECURSIVE RELATION
/*#include<iostream>
using namespace std;

int count(int n)
{
  //base class
  if(n==0)
  return -1 ;

  cout<< n << endl;
  count(n-1);
}
int main()
{
  int n;
  cin>> n ;
  count(n);

  return 0;
}*/

// REACH HOME USING RECURSION
/*#include<iostream>
using namespace std;

void reachhome(int src, int dest)
{
  cout << " source " << src << " destination " << dest << endl;
  //base case
  if(src == dest)
  {
    cout<< " pauch gya " << endl;
    return ;
  }

  //processing - ek step aage badhjao
  src++;

  //recursive call
  reachhome(src,dest);
}
int main()
{
  int dest = 10;
  int src = 1;
  reachhome(src,dest);
}*/

// SAY NUMBER USING RECURSION
/*#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing
    int digit = n % 10;
    n = n / 10;


    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] ={"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}*/

// CHECK SORTED ARRAY USING RECURSION
/*#include<iostream>
using namespace std;

bool issorted(int arr[], int size)
{
  if(size==0 || size==1)
    return true;

  if(arr[0] > arr[1])
  {
    return false;
  }
  bool remainingpart = issorted(arr + 1, size - 1);
  return remainingpart;
}
int main()
{
  int arr[5] = {1,2,3,4,5};
  int size = 5;

  bool ans = issorted(arr,size);

  if(ans)
  {
    cout<<"array is sorted"<<endl;
  }
  else
  {
   cout<<"array is not sorted"<<endl;
  }
}*/

// SUM OF AN ARRAY USING RECURSION
/*#include<iostream>
using namespace std;

int getSum(int *arr, int size) {

    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }

    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}*/

// LINEAR SEARCH USING RECURSION
/*#include<iostream>
using namespace std;
void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}
bool linear(int arr[],int size,int k)
{
  print(arr,size);
 //base class
  if(size==0)
    return false;
  if(arr[0]==k)
    return true;
  else{
    bool remainingpart = linear(arr+1,size-1,k);
    return remainingpart;
    }
}
int main()
{
  int arr[5] = {1,2,3,4,5};
  int size = 5;
  int key = 5;

  bool find = linear(arr,size,key);
  if(find){
    cout<<"Present"<<endl;
  }
  else{
        cout<<"absent"<<endl;
  }
  return 0;
}*/

// BINARY SEARCH USING RECURSION
/*#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e , int k ) {
  print(arr,s,e);

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;
    cout<<"value of the mid"<<arr[mid]<<endl;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}
int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}*/

// REVERSE STRING USING RECURSION
/*#include<iostream>
using namespace std;
void reverse(string &str,int i,int j)
{
  cout<< " call received for "<<str<< endl;
  //base class
  if(i>j)
    return ;

  swap(str[i],str[j]);
  i++;
  j--;

  //recursive call
  reverse(str,i,j);
}
int main()
{
  string name = "koushal";
  reverse(name,0,name.length()-1);

  cout<< name << endl;
  return 0;


}*/

// CHECK PALLIDROME USING RECURSION
/*#include<iostream>
using namespace std;
bool checkpallindrome(string str, int i, int j)
{
  //base class
  if(i>j)
    return true ;
  if(str[i]!=str[j])
    return false;
  else{
   return checkpallindrome(str , i+1,j-1);
  }

}
int main()
{
 string name = "abbba";
 cout<< endl;

  bool ispallindrome(checkpallindrome(name,0,name.length()-1));

  if(ispallindrome)
  {
    cout<< " it is pallindrome" << endl;
  }
  else{
     cout<< " it is not pallindrome" << endl;
  }
}*/

// FIND A TO THE POWER OF B USING RECURSION
/*#include<iostream>
using namespace std;

int power(int a, int b) {
    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;
    }
    else {
        //if b is odd
        return a * ans * ans;
    }
}

int main() {

    int a,b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a,b);

    cout << "Answer is " << ans << endl;

    return 0;
}*/

// SOLVE BUBBLE SORT USING RECURSION
/*#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {

    //base case - already sorted
    if(n == 0 || n == 1) {
        return ;
    }

    //1 case sovle karlia - largest element ko end me rakh dega
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive Call
    sortArray(arr, n-1);

}

int main() {

    int arr[5] = {2,5,1,6,9};

    sortArray(arr,5);

      for(int i=0; i<5; i++) {
      cout << arr[i] << " ";
      cout << endl;

        }
    return 0;
}*/

// MERGE SORT USING RECURSION
/*#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
  int mid = s+(e-s)/2;

  int len1 = mid - s + 1;
  int len2 = e - mid;

  int *first = new int(len1);
  int *second = new int(len2);

  //copy values
  int  mainArrayIndex = s;
  for(int i=0; i<len1; i++)
    {
      first[i] = arr[mainArrayIndex++];
    }

  int k = mid +1;
  for(int i = 0; i<len2; i++)
    {
      second[i] = arr[mainArrayIndex++];
    }

  //merge 2 sorted arrays
 int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[]first;
    delete []second;



}

void mergesort(int *arr,int s,int e)
{
  //base class
  if(s>=e)
  {
    return ;
  }
  int mid = s+(e-s)/2;

  //left part sort krna hai
  mergesort(arr,s,mid);

  //right part sort krna hai
  mergesort(arr,mid+1,e);

  //merge
  merge(arr,s,e);
}
int main()
{
  int arr[6] = {7,58,6,8,6,9};
  int n = 6;

  mergesort(arr,0,n-1);

  for(int i = 0; i<n; i++)
    {
      cout<< arr[i] <<" ";
    }
  cout<< endl;
}*/

// QUICK SORT USING RECURSION
/*#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e)
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {2,4,1,6,9,9,65,91,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}*/

// OOPS CONCEPT PART 1
/*#include<iostream>
#include<cstring>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy (ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    static int random() {
        return timeToComplete ;
    }

    //Destructor
    ~Hero() {
        cout << "Destructor bhai called" << endl;
    }

};

int Hero::timeToComplete = 5;

int main() {

    //cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;

    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;


     //Static
    // Hero a;

    // Dynamic
    // Hero *b = new Hero();
    // manually destructor call
    // delete b;

//     Hero hero1;

//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     //hero1.print();

//     //use default copy constructor

//     Hero hero2(hero1);
//     //hero2.print();
// //    Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     hero1 = hero2;

//     hero1.print();

//     hero2.print();


    // //Hero tt;

    // //object created statically
    // Hero ramesh(10);
    // //cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.print();

    // //dynamically
    // Hero *h =  new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();


    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;
    //dynamicallly
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;
    cout << "level is  " << b->level << endl;
    cout << " health is " << b->getHealth() << endl;




    // //creation of Object
    // Hero ramesh;
    // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // //use setter
    // ramesh.setHealth(70);
    // ramesh.level = 'A';


    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "Level is: " << ramesh.level << endl;

    // //cout << "size : " << sizeof(h1) << endl;


    return 0;
}*/

// OOPS CONCEPT PART 2 [POLYMORPHISM,ENCAPSULATION,INHERITANCE]
/*#include<iostream>
using namespace std;
class student
{
   private:
      string name;
      int age;
      int height;

   public:
     int getage(){
       return this->age;
     }
};

int main()
{
  student first;
  cout<< " sab sahi chal rha hai " << endl;
  return 0;
}*/

// SINGLE INHERITANCE
/*#include<iostream>
using namespace std;
class Animal {

    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};
int main() {

    Dog d;
    d.speak();
    cout << d.age << endl;


    return 0;
}*/

// INHERITANCE
/*#include<iostream>
using namespace std;

class Human {

    private:
    int height;

    public:
    int weight;

    private:
    int age;

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;

    }

};

class Male: private Human {

    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        return this->height;
    }

};



int main() {

    Male m1;
    //cout << m1.height << endl;




    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    cout << object1.color << endl;
    object1.setWeight(84);
    cout << object1.weight << endl;
    object1.sleep();


    return 0;
}*/

// MULTIPLE INHERITANCE
/*#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human {

};


int main() {

    Hybrid obj1;
    obj1.speak();
    obj1.bark();


    return 0;
}*/

// MULTILEVEL INHERITANCE
/*#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};

class GermanShepherd: public Dog {


};

int main() {

    GermanShepherd g;
    g.speak();


    return 0;
}*/

// HIERARCHICAL INHERITANCE
/*#include<iostream>
using namespace std;
//Hierarchical Inheritance
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B: public A {
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class C: public A {
    public:
    void func3() {
        cout << "Inside Funcion 3" << endl;
    }
};

int main() {

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;
}*/

// POLYMORPHISM
/*#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello Love Babbar" << endl;
    }

    int sayHello(char name) {
        cout << "Hello Love Babbar" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
/*        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;

       cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }
};

int main() {

    Dog obj;
    obj.speak();

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();


    A obj;
    obj.sayHello();



    return 0;
}*/

// CONCEPT
/*#include<iostream>
using namespace std;

class Student {

    private:
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main() {

    Student first;

    cout << "Sab sahi chalra hai" << endl;

    return 0;
}*/

// AMBIQUITY PROBLEM
/*#include<iostream>
using namespace std;

class A {
    public:

    void func() {
        cout << " I am A" << endl;
    }
};

class B {
    public:

    void func() {
        cout << " I am B" << endl;
    }
};

class C: public A, public B {


};

int main() {

    C obj;
    //obj.func();

    obj.A::func() ;
    obj.B::func();

    return 0;
}*/

// SINGLY LINKED LIST
/*#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " <<
           value << endl;
    }

};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) {

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}


bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {

        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;

}

void removeLoop(Node* head) {

    if( head == NULL)
        return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    }

    temp -> next = NULL;

}


int main() {

    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    //print(head);

    insertAtTail(tail, 12);

    //print(head);

    insertAtTail(tail, 15);
    //print(head);

    insertAtPosition(tail,head, 4, 22);
    //print(head);

    //cout << "head " << head -> data << endl;
    //cout << "tail " << tail -> data << endl;

    //deleteNode(4, head);


    tail -> next = head ->next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);

    if(floydDetectLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    Node* loop = getStartingNode(head);

    cout << "loop starts at " << loop -> data  << endl;

    removeLoop(head);
    print(head);


    print(head);
    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }



    return 0;
}*/

// DOUBLY LINKED LIST
/*#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {

    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) {

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}



int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(7, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;





    return 0;
}*/

// CIRCULR LINKED LIST
/*#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {


    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }

        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    Node* tail = NULL;

   // insertNode(tail, 5, 3);
    //print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);


    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 5);
    print(tail);


    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}*/