/*#include <bits/stdc++.h>
using namespace std;

//void swap(int* a, int* b)

int main()
{
	unsigned int i = 1;
	int x = 10;
    swap(&x, &x);
	char *c = (char*)&i;

	if (*c)

		cout<<"Little endian"<<endl;

	else
    
		cout<<"Big endian";
	cout<<x;
	return 0;
}

void swap(int* xp, int* yp)
{
 
    // Check if the two addresses are same
    if (xp == yp)
        return;
    *xp = *xp + *yp;
    *yp = *xp - *yp;
    *xp = *xp - *yp;
}*/
#include <bits/stdc++.h>
using namespace std;
void swap(int* xp, int* yp)
{

	// Check if the two addresses are same
	if (xp == yp)
		return;
	*xp = *xp + *yp;
	*yp = *xp - *yp;
	*xp = *xp - *yp;
}

// Driver Code
int main()
{
	int x = 10;
	swap(&x, &x);
	cout << "After swap(&x, &x): x = " << x;
	return 0;
}

// This code is contributed by rathbhupendra
