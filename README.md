# Pong Game in Terminal with ncurses  

🔹 **Brief Description**  
This project is a classic Pong game implemented in the terminal using the ncurses library. It offers a simple yet engaging two-player experience, where players control paddles to hit a ball and score points. The game features real-time controls, a scoreboard, and a winner announcement upon reaching 21 points.  

## Why This Stands Out to Employer:  
- **Low-Level Proficiency**: Demonstrates strong C programming skills and efficient use of ncurses for terminal-based UI development.  
- **Game Logic Implementation**: Showcases clean implementation of real-time physics (ball movement, collision detection) and game state management.  
- **Interactive Design**: Features responsive two-player controls with intuitive keyboard inputs and real-time rendering.  
- **Modular Architecture**: Well-organized code structure with separated display, logic and control systems for easy maintenance.  
- **Lightweight Performance**: Optimized rendering cycle with minimal resource usage, suitable for terminal environments.  

## 🛠️ Technologies  
- **Language**: C  
- **Library**: ncurses (for terminal-based UI and input handling)  
- **Environment**: Unix-like systems (Linux, macOS)  

## ✨ Key Features  
- **Terminal-Based UI**: Utilizes ncurses for rendering graphics and handling input in the terminal.  
- **Real-Time Controls**: Players can move paddles up and down using keyboard keys (`a/z` for Player 1, `k/m` for Player 2).  
- **Score Tracking**: Displays live scores and announces the winner when a player reaches 21 points.  
- **Simple and Lightweight**: No external dependencies beyond ncurses, making it easy to compile and run.  

## 🚀 How to Run the Project  

### Prerequisites  
- Ensure `ncurses` is installed on your system. On Ubuntu/Debian, you can install it with:  
  ```bash  
  sudo apt-get install libncurses-dev  
  ```
### Compilation and Execution
- Clone the repository:
  ```bash
  git clone git@github.com:ehaxi/ping-pong.git
  cd ping-pong/src
  ```
- Compile the program:
  ```bash
  make pong_interactive
  ```
- Run the game:
  ```bash
  ./pong_interactive
  ```