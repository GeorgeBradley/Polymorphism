#pragma once
#include <iostream>
class I_Printable
{

	friend std::ostream& operator<<(std::ostream& os, const I_Printable& IP) {
		IP.display(os);
		return os;
	}

public:
	virtual void display(std::ostream& os) const = 0;
	virtual ~I_Printable() = default;
};

