// C++ program for Naive Pattern
// Searching algorithm
#include <iostream>
using namespace std;

void search(string pat, string txt)
{
	int M = pat.length();
	int N = txt.length();

	/* A loop to slide pat[] one by one */
	for (int i = N; i >= 0; i--) {
		int j;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i - M + j] != pat[j])
				break;

		if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			cout << "Pattern found at index "<< i-M << endl;
	}
}

// Driver Code
int main()
{
	string txt, pat;
	getline(cin,txt);
	getline(cin,pat);
	search(pat, txt);
	return 0;
}
//AABAACAADAABAAABAA
//AABA


