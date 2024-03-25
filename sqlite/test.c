#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"

int main(){
		sqlite3* db;
		int response;
		response = sqlite3_open("test.db",&db);

		return 0;
};

