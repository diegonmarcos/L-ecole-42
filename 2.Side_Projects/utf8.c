#include <stdio.h>
#include <stdint.h> // For uint32_t

void codepoint_to_utf8(uint32_t codepoint, char *utf8_bytes) {
    if (codepoint <= 0x7F) {
        // 1 byte
        utf8_bytes[0] = (char)codepoint;
        utf8_bytes[1] = '\0'; 
    } else if (codepoint <= 0x7FF) {
        // 2 bytes
        utf8_bytes[0] = (char)(0xC0 | (codepoint >> 6));
        utf8_bytes[1] = (char)(0x80 | (codepoint & 0x3F));
        utf8_bytes[2] = '\0';
    } else if (codepoint <= 0xFFFF) {
        // 3 bytes
        utf8_bytes[0] = (char)(0xE0 | (codepoint >> 12));
        utf8_bytes[1] = (char)(0x80 | ((codepoint >> 6) & 0x3F));
        utf8_bytes[2] = (char)(0x80 | (codepoint & 0x3F));
        utf8_bytes[3] = '\0';
    } else if (codepoint <= 0x10FFFF) {
        // 4 bytes
        utf8_bytes[0] = (char)(0xF0 | (codepoint >> 18));
        utf8_bytes[1] = (char)(0x80 | ((codepoint >> 12) & 0x3F));
        utf8_bytes[2] = (char)(0x80 | ((codepoint >> 6) & 0x3F));
        utf8_bytes[3] = (char)(0x80 | (codepoint & 0x3F));
        utf8_bytes[4] = '\0';
    } else {
        // Invalid code point
        printf("Invalid Unicode code point: %X\n", codepoint);
        utf8_bytes[0] = '\0';
    }
}

int main() {
    uint32_t codepoint = 0x1F60A; // 😊
    char utf8_bytes[5]; // Maximum 4 bytes + null terminator

    codepoint_to_utf8(codepoint, utf8_bytes);

    printf("Code point: U+%X\n", codepoint);
	printf("UTF-8 encoding (hex): ");

    // Print each byte as a hexadecimal number
    for (int i = 0; utf8_bytes[i] != '\0'; i++) {
        printf("%02X ", (unsigned char)utf8_bytes[i]); 
    }
    printf("\n");

    printf("UTF-8 encoding (hex): %s\n", utf8_bytes);
	printf("UTF-8 encoding (hex): \xF0\x9F\x98\x8A\n");
	printf("Smiley: \u1F60A\n");
	printf("Smiley: 😊\n");
    return 0;
}