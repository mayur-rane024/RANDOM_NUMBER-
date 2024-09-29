
# Number Guessing Game

## Overview
Welcome to the Number Guessing Game! This C++ application challenges the player to guess a randomly generated number based on the chosen difficulty level. Players will receive feedback on their guesses and proximity hints, making the game more interactive and fun. The game also includes input validation and a replay option to continue the fun!

## Features
- **Difficulty Levels**: 
  - Easy: Guess a number between 1-10 (5 attempts).
  - Medium: Guess a number between 1-50 (7 attempts).
  - Hard: Guess a number between 1-100 (10 attempts).
  
- **Random Number Generation**: A random number is generated based on the selected difficulty level.
  
- **Guess Feedback**:
  - "Too low" if the guess is below the secret number.
  - "Too high" if the guess is above the secret number.
  - "Congratulations" if the guess is correct.
  
- **Proximity Hints**: 
  - "Very close" if the guess is within 10 of the secret number.
  - "Getting there" if within 20.

- **Input Validation**: Ensures the player's input is a valid number within the specified range.

- **Replay Option**: The game prompts the player if they want to play again after each game.

## Technologies Used
- C++

## How to Play
1. Select your difficulty level: Easy, Medium, or Hard.
2. Guess the randomly generated number within the specified range.
3. The game will provide feedback on whether your guess is too high or too low.
4. You'll receive hints if you're close to the secret number.
5. If your guess is correct, you win! If not, you'll have limited attempts based on the difficulty level.
6. After the game, you'll be asked if you want to play again.

## Optional Bonus
- **High Scores**: You can modify the game to track high scores based on the least number of attempts.
- **Repeated Guess Handling**: The game can be enhanced to avoid counting repeated guesses as valid attempts.

## How to Contribute
If you'd like to contribute to the Number Guessing Game, feel free to fork the repository and submit a pull request. Contributions are welcome and appreciated!

### Option 1: Contribute via GitHub (in-browser)
1. **Fork the Project**:
   - Click the Fork button to create a copy of the project in your GitHub account.

2. **Create a New Branch**:
   - Create a new branch for your changes (e.g., `add-feature-branch`).

3. **Edit the Code**:
   - Make necessary changes to the code (such as adding new features or improving the functionality).

4. **Create a Pull Request**:
   - Open a pull request to merge your changes into the main repository.

### Option 2: Contribute Locally
1. **Fork the Project**:
   - Fork the repository to your GitHub account.

2. **Clone the Project**:
   - Clone the repository to your local machine using:
   ```bash
   git clone https://github.com/<your-github-username>/number-guessing-game.git
   ```

3. **Create a New Branch**:
   - Create a new branch for your changes:
   ```bash
   git checkout -b <new-branch-name>
   ```

4. **Make Your Changes**:
   - Open the project in a code editor, make your changes, and save them.

5. **Stage and Commit Your Changes**:
   - Stage the changes:
   ```bash
   git add .
   ```
   - Commit the changes:
   ```bash
   git commit -m "Add <your-github-username> feature"
   ```

6. **Push to GitHub**:
   - Push the changes to your repository:
   ```bash
   git push origin <new-branch-name>
   ```

7. **Create a Pull Request**:
   - Open a pull request to the main branch of the project.

## Resolving Merge Conflicts
If there is a merge conflict, GitHub will notify you and provide instructions on how to resolve it. You can refer to GitHub’s documentation on [resolving merge conflicts](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/addressing-merge-conflicts/about-merge-conflicts) for more details.



## Additional Resources
- [GitHub Documentation](https://docs.github.com)
- [MDN Web Docs - Using the Web](https://developer.mozilla.org/en-US/docs/Learn)
- [JavaScript.info - The Modern JavaScript Tutorial](https://javascript.info/)

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
