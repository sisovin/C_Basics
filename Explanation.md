# How to Compile and Run a C Program on Windows

## Prerequisites

- Ensure you have `gcc` installed. You can install it using MinGW or MSYS2.
- If `gcc` is not recognized in PowerShell, add its path to the system's PATH environment variable.

### Adding `gcc` to PATH

1. Open the Start Menu and search for "Environment Variables".
2. Click on "Edit the system environment variables".
3. In the System Properties window, click on the "Environment Variables" button.
4. In the Environment Variables window, find the "Path" variable in the "System variables" section and select it. Click "Edit".
5. Click "New" and add the path to the `bin` directory of your MSYS2 installation (e.g., `D:\msys64\mingw64\bin`).
6. Click "OK" to close all windows.

After adding the path, open a new PowerShell window and try running `gcc --version` again.

## Steps to Compile and Run

1. **Navigate to the Directory**:
   Open your terminal (PowerShell or Command Prompt) and navigate to the directory where your `hello.c` file is located:

   ```powershell
   cd D:\CGroupProjects\C_Basics\Printing
   ```

2. **Compile the C Program**:
   Use the `gcc` command to compile your C program:

   ```powershell
   gcc hello.c -o hello
   ```

3. **Run the Executable**:
   After compilation, run the generated executable file:

   ```powershell
   .\hello.exe
   ```

   You should see the following output:

   ```
   Hello
   World!
   ```

## Compiling and Running Another Program

To compile `variables.c` and place the executable in a `debug` directory, you can specify the output path when using `gcc`. Here are the steps:

1. Create the `debug` directory if it doesn't exist:

   ```powershell
   mkdir debug
   ```

2. Compile the `variables.c` file and specify the output path:

   ```powershell
   gcc variables/variables.c -o debug/variables.exe
   ```

3. Run the executable from the `debug` directory:

   ```powershell
   .\debug\variables.exe
   ```

This will compile the `variables.c` file and place the resulting `variables.exe` in the `debug` directory, then run it from there.

## Writing a Simple C Program

Create a new file named `simple.c` and add the following code:

```c
#include <stdio.h>

int main() {
    printf("This is a simple C program.\n");
    return 0;
}
```

Save the file and follow the steps to compile and run it.

## Debugging a C Program

1. **Compile with Debug Information**:
   Use the `-g` flag to include debug information in the executable:

   ```powershell
   gcc -g hello.c -o hello
   ```

2. **Run the Debugger**:
   Use `gdb` to debug the executable:

   ```powershell
   gdb hello
   ```

3. **Set Breakpoints and Run**:
   Inside `gdb`, set breakpoints and run the program:

   ```gdb
   (gdb) break main
   (gdb) run
   ```

4. **Step Through the Code**:
   Use commands like `next` and `step` to step through the code:

   ```gdb
   (gdb) next
   (gdb) step
   ```

## Troubleshooting

- **`gcc` Not Recognized**:
  Ensure `gcc` is installed and added to your system's PATH environment variable.

- **File Not Found**:
  Ensure you are in the correct directory where `hello.c` is located.

- **No Output**:
  Ensure your `hello.c` file includes the correct code:

  ```c
  #include <stdio.h>

  int main() {
      printf("Hello\n");
      printf("World");
      printf("!\n");
      return 0;
  }
  ```

By following these steps, you should be able to compile, run, and debug your C programs successfully.
