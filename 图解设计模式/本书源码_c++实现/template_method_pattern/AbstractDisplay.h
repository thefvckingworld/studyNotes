#ifndef ABSTRACTDISPLAY_H
#define ABSTRACTDISPLAY_H

class AbstractDisplay {
public:
	virtual void open() = 0;
	virtual void print() = 0;
	virtual void close() = 0;

	virtual void display() final // 注意该方法为模板方法，必须定义为final
	{
		open();
		for (int i = 0; i < 5; i++) {
			print();
		}
		close();
	}
};


#endif // !ABSTRACTDISPLAY_H

