
// Macro definition using the Token-pasting operator 
#define concat(a, b) a##b 
int main(void) 
{ 
	int xy = 30; 

	// Printing the concatenated value of x and y 
	printf("result: %d", concat(x, y)); 
	return 0; 
}
