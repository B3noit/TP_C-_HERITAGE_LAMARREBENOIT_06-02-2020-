#pragma once
class CVect
{
protected:
	int nElem;
	int* pAdr;

public:
	CVect(int);
	~CVect();
	int& operator [] (int);
};

