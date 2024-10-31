
# Project Setup Guide for Creating a Simple Operating System

This project involves writing an operating system that includes low-level OS code, a bootloader, and display output. Below are the steps and requirements to complete this setup.

---

## Table of Contents

1. [Required Software and Dependencies](#required-software-and-dependencies)
2. [Setup Instructions](#setup-instructions)
   - [Setting Up WSL (Windows Users Only)](#setting-up-wsl-windows-users-only)
   - [Setting Up the Project Folder](#setting-up-the-project-folder)
   - [Setting Up Visual Studio Code](#setting-up-visual-studio-code)
   - [Configuring Bochs Emulator](#configuring-bochs-emulator)
   - [Running and Testing the OS](#running-and-testing-the-os)
   - [Writing "Hello World" to Display](#writing-hello-world-to-display)
3. [Clone the Project](#clone-the-project)
4. [Submission Instructions](#submission-instructions)
5. [Grading Criteria](#grading-criteria)

---

## Required Software and Dependencies

1. **Windows Subsystem for Linux (WSL)**
   - Enables running Linux commands on Windows.
   - Required packages to install in WSL:
     - `make`: to build binary object files.
     - `gcc`: the C compiler.
     - `nasm`: to assemble assembly language files.

2. **Bochs x86 PC Emulator**
   - Emulates an i386 hardware environment to run and test your OS.
   - [Download Bochs x86](https://bochs.sourceforge.io/getcurrent.html).

3. **Visual Studio Code (VS Code)**
   - Text editor for managing and editing your OS project.
   - Install extensions for syntax highlighting, such as **NASM x86 Syntax Highlighting**.

---

## Setup Instructions

### Setting Up WSL (Windows Users Only)
   - Run PowerShell as an administrator and type: `wsl --install`
   - Restart the computer.
   - Set up your WSL username and password.
   - Run PowerShell again as an administrator, and install required packages:
     ```bash
     wsl sudo apt update
     wsl sudo apt upgrade
     wsl sudo apt install g++
     wsl sudo apt install build-essential
     wsl sudo apt install make
     wsl sudo apt install nasm
     ```

### Setting Up the Project Folder
   - Create a folder on your computer at `C:\CEG4350`.
   - Extract the OS starter code to this folder, ensuring you have a subfolder `WSOS` containing your OS files.

### Setting Up Visual Studio Code
   - Install [Visual Studio Code](https://code.visualstudio.com/).
   - Open your project folder `C:\CEG4350\WSOS\OS` in VS Code.
   - Install **NASM x86 Syntax Highlighting** for assembly files.
   - In the VS Code terminal, compile the OS:
     ```bash
     wsl make
     ```

### Configuring Bochs Emulator
   - Install Bochs and open the “Bochs Start Menu” to edit the configuration:
     - In "Disk & Boot" settings, set "First floppy image/device" to `os.img` located in `C:\CEG4350\WSOS\OS\build\os.img`.
     - Set “Type of floppy media” to “1.44M”.
     - Save and load the configuration file (`bochsrc.bxrc`).
   - Start Bochs, which will boot your OS image.

### Running and Testing the OS
   - Open Bochs and start the emulator to load and test your OS.

### Writing "Hello World" to Display
   - Edit the provided source files to implement:
     - Disabling the blinking cursor in `bootloader.asm`.
     - `setcursor()`, `putchar()`, `printf()`, and `clearscreen()` functions in `io.c` and `io.h`.
     - Modify `kernel.c` to clear the screen and print “Hello World!”.

---

## Clone the Project

To get started, clone the repository into the specified folder:

1. **Open PowerShell or Command Prompt as Administrator**
   - Right-click on the Start menu, select **PowerShell** or **Command Prompt**, and choose **Run as Administrator**.

2. **Navigate to the `C:\` Drive**

   ```bash
   cd C:\
   ```

3. **Create the Project Folder `CEG4350`**

   - If this folder does not exist, create it with:
     ```bash
     mkdir C:\CEG4350
     ```

4. **Navigate to the `CEG4350` Folder**

   ```bash
   cd C:\CEG4350
   ```

5. **Clone the Repository**

   - Use the `git clone` command to clone the repository into this folder. Replace `<repository-url>` with the actual repository URL.
     ```bash
     git clone https://github.com/BrianKimurgor/OS-in-C.git
     ```

6. **Verify Project Structure**

   - After cloning, your folder structure should look like this:
     ```
     C:\CEG4350\OS-IN-C
     ```

---

Complete this setup successfully to be able to modify and test your OS. Feel free
to raise an issue if the process is not understandable.

---