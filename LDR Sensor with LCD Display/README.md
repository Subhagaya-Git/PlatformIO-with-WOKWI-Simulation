# ⚡ PlatformIO + WOKWI for Arduino Simulations 💡

## 🧠 Overview
This repository is a **complete practical guide** for using **PlatformIO + WOKWI** to simulate **Arduino projects** directly inside **Visual Studio Code** without needing any physical hardware.

If you’ve ever faced difficulties during Arduino labs or personal projects because of **missing components or hardware limitations**, this setup is the perfect solution.  
You can **build, test, and simulate** your Arduino circuits anytime, anywhere completely virtually.

---

## 🧩 What You’ll Need
- 🖥️ **Visual Studio Code (VS Code)**
- ⚙️ **PlatformIO IDE Extension** (Install it inside VS Code)
- 🌐 **WOKWI Account** → [https://wokwi.com](https://wokwi.com)

---

## 🧭 Step 1: Set Up PlatformIO
1. Open **VS Code**
2. Go to **Extensions**
3. Search for **PlatformIO IDE** → Click **Install**
4. Once installed, you’ll see a cool little **👽 alien icon** on the sidebar, that’s your Arduino control center.

---

## ⚙️ Step 2: Create Your Arduino Project
1. Open **PlatformIO Home → New Project**
2. Enter your project details:
   - **Project Name**: *(as you wish)*
   - **Board**: Arduino Uno
   - **Framework**: Arduino
3. Click **Finish**, it will automatically generate the full folder setup for you.

---

## 📈 Step 3: Connect with WOKWI Simulator
1. Go to your **WOKWI account** → Create a **New Project**
2. Use the **tools** to design your project diagram as you like.
3. Copy the **diagram.json** code from your WOKWI project.
4. In your VS Code project folder, create a new file named **`diagram.json`** (same level as `platformio.ini`) and paste the copied code.

---

## ⚙️ Step 4: Configure `wokwi.toml`
1. Open your **diagram.json** file in VS Code.
2. Click the **Play ▶️** button → a new WOKWI window will appear.
3. Click **Open** → You’ll be redirected to your project on WOKWI.
4. Copy the **wokwi.toml** configuration code.
5. In VS Code, create a file named **`wokwi.toml`** (same level as `platformio.ini`) and paste that code.
6. In VS Code’s search bar → type **Build and Run** → Click it.
7. Wait for the build process to finish, you’ll get `.hex` and `.elf` file paths.
8. Copy those paths and update them in your **`wokwi.toml`** file.

---

## 💻 Step 5: Write Your Arduino Code
1. Go to **src → main.cpp**
2. Write your Arduino logic code.
3. Save your file after finishing.
4. Finally, open **diagram.json** → Click **Play ▶️**
5. Your Arduino project now runs virtually in WOKWI!

---

## 💡 Why Recommend This Setup
✅ No hardware? No problem!, Simulate everything virtually  
✅ Built-in **library management** and **debugger**  
✅ Realistic **circuit behavior** for accurate testing  
✅ Ideal for **university labs**, **IoT prototypes**, and **online learning**  
✅ The same code can later be uploaded to a **real Arduino board**

---

## 🌞📟 Example Project: LDR Sensor with LCD Display
To test this setup, I simulated a **Light Dependent Resistor (LDR)** project.

🔹 The **LDR sensor** detects light intensity when light decreases, its resistance increases.  
🔹 The **LCD display** shows whether the **LED is blinking or not** in real-time.  

This project helped me practice effectively even without access to physical hardware and that’s a **big win** for consistent learning. 🔥

<img width="900" alt="LDR Sensor Simulation Demo" src="https://github.com/Subhagaya-Git/PlatformIO-with-WOKWI-Simulation/blob/c87ff23f2a1abf05ef75d9dc8dedf7a1d99d9b43/src/Recording%202025-10-06%20123416.gif?raw=true" />


---

## 🧰 Tech Used
| Tool | Purpose |
|------|----------|
| **Visual Studio Code** | Main development environment |
| **PlatformIO IDE** | For Arduino project creation, build, and debug |
| **WOKWI Simulator** | Online simulation of circuits |

---

## 🧑‍💻 Author
**Tharushi Yapa**  
📍 Software Specialize Student, at Dept of ICT, Faculty of Technology, South Eastern University of Sri Lanka.
| Embedded Systems | IoT | Software Development Enthusiast | Full Stack Developper 

## 🔗 Connect with Me
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Tharushi%20Yapa-blue?style=flat-square&logo=linkedin)](www.linkedin.com/in/tharushi-yapa-693329244)

---

## 🏷️ License

This project is licensed under the [MIT License](./LICENSE) - see the LICENSE file for details.


---

## 💬 Community
Have you tried simulating your Arduino projects with **PlatformIO and WOKWI** yet?  
Share your experiences, improvements, or favorite tricks feedback is always welcome! 💬  

---

## 🏁 Final Note
> “When hardware isn’t available, innovation doesn’t stop simulation keeps the learning alive.”  

---
