#ifndef ITERATOR_H
#define ITERATOR_H

template<typename object>
class Iterator {
public:
	virtual bool hasNext() = 0;
	virtual object next() = 0;
};


#endif // !

