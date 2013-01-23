#ifndef NOCOPY_H
#define NOCOPY_H

namespace YR2K
{
	class NoCopy
	{
	protected:
		NoCopy();
		~NoCopy();
	private:
		NoCopy(const NoCopy &);
		NoCopy & operator=(const NoCopy &);
	};

	inline NoCopy::NoCopy()
	{
	}

	inline NoCopy::~NoCopy()
	{
	}
}

#endif
