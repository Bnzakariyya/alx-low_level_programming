#include <unistd.h>

int main(void) {
    const char* message = "_putchar\n";
    const size_t length = 9;  // Length of the message excluding the null terminator
    
    ssize_t bytes_written = write(STDOUT_FILENO, message, length);
    if (bytes_written != length) {
        // Handle error if the full message couldn't be written
        return 1;
    }
    
    return 0;
}


