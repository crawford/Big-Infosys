#include <avr/io.h>

int main() {
	uint16_t a = 0;

	DDRE = 0xFF;
	PORTE = 0x00;

	while (1) {
		a = 0;
		while (++a);
		while (++a);
		while (++a);
		while (++a);
		while (++a);

		PINE = 0xFF;
	}

	return 0;
}
