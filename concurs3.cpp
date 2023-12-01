#include <fstream>
using namespace std;
int main()
{
	ifstream f("concurs3.in");
	int h, n, ors=0, sc=0, ok=0;
	f >> h >> n;
	while (n > 0)
	{
		int x; f >> x;
		if (x == h) ok = 1;
		if (x/100 == h/100) ors++; 
		if (x/100 == h/100
			&& x/10%10 == h/10%10)
				sc++;
		n--;
	}
	f.close();
	ofstream g("concurs3.out");
	if (ok) g << "DA";
	else g << "NU";
	g << '\n' << ors << '\n' << sc;
	g.close();
	return 0;
}

