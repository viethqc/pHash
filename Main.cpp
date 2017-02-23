#include <iostream>
#include "pHash.h"

using namespace std;

int main()
{
	char * img1 = "C:\\Users\\QT\\Desktop\\1.JPG";
	char * img2 = "C:\\Users\\QT\\Desktop\\3.JPG";
	double pcc;
	int iResult;

	/*ulong64 hash1;
	ulong64 hash2;
	ph_dct_imagehash(img1, hash1);
	ph_dct_imagehash(img2, hash2);*/

	ph_compare_images(img1, img2, pcc);
	

	BinHash *a = new BinHash[1];
	BinHash *b = new BinHash[1];
	BinHash bhImage2;
	ph_bmb_imagehash(img1, 0, &a);
	ph_bmb_imagehash(img2, 0, &b);

	pcc = 1 - ph_hammingdistance2(a->hash, a->bytelength, b->hash, b->bytelength);

	return 0;
}