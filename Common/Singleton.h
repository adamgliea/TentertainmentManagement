#ifndef SINGLETON_H
#define SINGLETON_H

#include "NoCopy.h"
namespace YR2K
{
	template <class T>
	class  Singleton : public NoCopy
	{
	public:
    	static T* getInstance(void);
    private:
		static T* m_instance;
	protected:
    	Singleton();
    };
    
    template <class T> 
    T* Singleton<T>::getInstance(void)
    {
    	if(m_instance)
    	{
    		return m_instance;
    	}
    	return m_instance=new T;
    }
    
    template <class T> 
	Singleton<T>::Singleton()
    {
	}
	
    template <class T> T* Singleton<T>::m_instance = 0;
}

#endif
