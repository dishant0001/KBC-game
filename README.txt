###################################################################################
README for assignment submitted by 2019B2PS1032P
Practical section number : P11
Question number attempted : Q1

###################################################################################
Team:
1.Dishant Pradeep Poddar- 2019B2PS1032P 
2.Tejas Girish Deshpande- 2019B1PS0947P

###################################################################################
Description of how to run the code and observe the output:

1.When you run the program, it will show the information and rules for the KBC game.(prize levels, lifelines, intermediate levels). The intermediate question levels are Q 3,8,12, i.e your prize money will drop to these levels if you answer a particular question wrongly. If you quit the game without answering the question, you will leave with your current prize money.  
2.It will ask you to enter your name and then enter any key to start the game.
3.The question, with the 4 options will be displayed on the screen. 
4.Enter the correct option number if you want to answer the question.
5.If you want to use a lifeline, enter 9, and then enter 1 or 2 accordingly.
6.Enter 1 for 50-50 lifeline. Two of the incorrect options will be eliminated and you will have to choose between the remaining two options. If you enter the option number of the eliminated option, it will ask you to enter a valid key.
7.Enter 2 for flip lifeline. The question will be replaced by a new question.
8.If you want to exit the game, enter 0.
9. If you enter any invalid key, the program will inform you of the same and will ask for an input till the time you enter a valid key.
10.The result (correct/wrong) will be displayed on the screen along with the prize money you have won.
11.Enter any key to proceed to the next question.
12.The new question, along with the number of lifelines left, the prize money of the last question, the minimum prize money won by the user if he/she answers a question wrongly, and the prize associated with the current question. 
13.Follow these steps for all the remaining questions. The user will answer a maximum of 15 questions if he/she answers all questions correctly.
14. Once your game has been finished it will ask if you want to play the game again. If yes, enter 1. Then it will start the whole game again.
15. It will then display the high scores of all the users who have played(in one go). A maximum of 50 users can play in a single go.
16. The leaderboard will be displayed with the names of the users in a descending order according to the respective prize money won. [Rank wise]

###################################################################################
Known limitations of the code:
1.In the "Press any key to start the game" feature, you will have to press any key and press 'Enter'. We initially used getch() function to use this feature, i.e to avoid pressing the 'Enter' key to start the game. But then, we realized that getch() works only in Windows- based compilers and it won't work in Linux. So,we switched to getchar().

###################################################################################
Contributions of the team members:
1.Dishant Poddar did the execution of the options' module, implemented the 50-50 lifeline,worked on updating the prize money of the user and the ReadMe.txt file.
2.Tejas Deshpande did the execution of the questions' module, implemented the flip lifeline, included the feature of checking if an answer is right/wrong and included comments in the code.
3.The compilation of questions and options in the database, the element of randomness in the program and the login and high scores feature was a combined effort of both.
