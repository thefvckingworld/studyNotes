#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
private:
	Singleton() {}
	~Singleton(){}
	Singleton(const Singleton &){}
	Singleton &operator=(const Singleton &){}
public:
	static Singleton &getInstance()
	{
		static Singleton instance;
		return instance;
	}


};


#endif // !SINGLETON_H

