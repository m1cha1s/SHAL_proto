#ifndef SHAL_CORE
#define SHAL_CORE

#include "../SHAL_mmu/SHAL_mmu.h"

class SHAL_core
{
public:
	SHAL_core(SHAL_mmu* mmu);
	~SHAL_core();

	void executeOp();

private:
	int _Ai, _Bi;
	float _Af, _Bf;

	unsigned int _pc, _addr, _op;

	SHAL_mmu* _mmu;
};

SHAL_core::SHAL_core(SHAL_mmu* mmu)
{
	_mmu = mmu;
}

SHAL_core::~SHAL_core()
{
	delete _mmu;
}

inline void SHAL_core::executeOp()
{

}

#endif // !SHAL_CORE
