#ifndef SHAL_MMU
#define SHAL_MMU

class SHAL_mmu
{
public:
	SHAL_mmu(unsigned int memory_size = 1024);
	~SHAL_mmu();

	unsigned int get(unsigned int address);
	bool set(unsigned int address, unsigned int value = 0);

private:
	unsigned int* _memory;
};

SHAL_mmu::SHAL_mmu(unsigned int memory_size = 1024)
{
	_memory = new unsigned int[memory_size];
}

SHAL_mmu::~SHAL_mmu()
{
	delete[] _memory;
}

unsigned int SHAL_mmu::get(unsigned int address)
{
	if (address < sizeof(_memory)/sizeof(unsigned int))
	{
		return _memory[address];
	}
	else
	{
		return 0;
	}
}

bool SHAL_mmu::set(unsigned int address, unsigned int value)
{
	if (address < sizeof(_memory) / sizeof(unsigned int))
	{
		_memory[address] = value;
		return true;
	}
	else
	{
		return false;
	}
}

#endif // !SHAL_MMU
