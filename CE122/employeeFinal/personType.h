#pragma once
#include "addressType.h"
#include "nameType.h"
#include "contactInfoType.h"

class personType : public addressType, public contactInfoType, public nameType {
public:
	personType();
};