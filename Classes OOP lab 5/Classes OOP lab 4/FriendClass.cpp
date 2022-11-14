#pragma once
#include "FriendClass.h"
#include <string>
#include <iostream>
#include <fstream>
//task 16: застосування методу дружньої функції
void FriendClass::changePhone(Hairdresser* h)
{
	h->phone = "123";
}
