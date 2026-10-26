#include <bits/stdc++.h>
using namespace std;

// Insertion Sort for a single bucket
void insertionSort(vector<float> &bucket)
{
  int n = bucket.size();

  for (int i = 1; i < n; i++)
  {
    float key = bucket[i];
    int j = i - 1;

    while (j >= 0 && bucket[j] > key)
    {
      bucket[j + 1] = bucket[j];
      j--;
    }
    bucket[j + 1] = key;
  }
}

// Bucket Sort Algorithm
void bucketSort(vector<float> &A)
{
  int n = A.size();

  // [Initialize.]
  vector<vector<float>> B(n);   // B[0 … n-1] empty buckets

  // [Distribute elements.]
  for (int i = 0; i < n; i++)
  {
    int index = n * A[i];       // ⌊n × A[i]⌋
    B[index].push_back(A[i]);
  }

  // [Sort buckets using Insertion Sort.]
  for (int i = 0; i < n; i++)
  {
    insertionSort(B[i]);
  }

  // [Concatenate.]
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    for (float value : B[i]) //for each loop to traverse the bucket
    {
      A[k] = value;
      k++;
    }
  }
}

// -------- Driver Code --------
int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<float> A(n);

  cout << "Enter " << n << " elements (0 ≤ value < 1):\n";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  bucketSort(A);

  cout << "\nSorted array:\n";
  for (float x : A)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}