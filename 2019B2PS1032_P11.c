#include<stdlib.h>
#include<stdio.h>
#include<time.h> // This is for accommodating the srand(time(0)) feature to randomly select a question out of the 5 alternatives.

char options[15][5][4][50]={{{"206","410","520","120"},{"Ganges","Amazon River","Nile","Danube River"},{"Diwali","Holi","Rakshabandhan","Janmashtami"},{"Earth","Jupiter","Venus","Mercury"},{"24","56","52","30"}},{{"Kashmir","Kerala","Tamil Nadu","Assam"},{"Mount K2","Mount Kilimanjaro","Mount Manasalu","Mount Everest"},{"Andaman and Nicobar", "Daman and Diu", "Puducherry", "None of the above"},{"Calf","Cub","Kid","Kit"},{"Taka","Paise","Yen","Pound Sterling"}},{{"Pandit Jawahar Lal Nehru","Dr. Rajendra Prasad", "B.R. Ambedkar", "Zakir Husain"},{"Benjamin Franklin", "Thomas Savery", "Henry Ford", "John Logie Baird"},{"1945","1930","1939","1942"},{"1","2","3","4"},{"China","Uganda","France","Vatician City"}},{{"Sakshi Malik","Babita Kumari", "Vinesh Phogat", "Kavita Devi"},{"Ujjain, Purl, Prayag, ,Haridwar","Prayag, Haridwar, Ujjain, Nasik", "Rameshwaram, Purl, Badrinath, Dwarika", "Chittakoot, Ujjain, Prayag,'Haridwar"},{"Karnataka","Kerala", "Tamil Nadu", "Andhra Pradesh"},{"Duryodhana", "Arjuna", "Yudhishthir", "Bhima"},{"Baseball", "Volleyball","Basketball","Polo"}},{{"Tabu", "Shabana Azmi", "Sridevi", "Sonam Kapoor"},{"Yemen","Maldives", "Oman", "Peru"},{"Jainism", "Sikhism", "Shintoism", "Buddhism"},{"Ellora Caves", "Ajanta Caves", "Kanheri Caves", "Elephanta Caves"},{"Eurocium", "Americium", "Asiacium", "Africium"}},{{"Gurbachan Singh Randhawa" ,"Harbhajan Singh", "Navjot Singh Sidhu" ,"Mikha Singh"},{"Base", "Acid", "Salt", "Metal"},{"Madri" ,"Gandhari","Kunti" ,"Satyavati"},{"Shooting", "Boxing","Badminton", "Wrestling"},{"Bangladesh.", "Afghanistan", "Pakistan", "Iran."}},{{"Jhansi", "Agra" ,"Kanpur" ,"Haridwar"},{"Russia" ,"Poland" ,"Ukrane" ,"France"},{"Virginia Rometty", "Indra Nooyi" ,"Ursula Burns" ,"Meg Whitman"},{"Odyssey" ,"Discovery" ,"Challenger" ,"Curiosity"},{"Jharkhand" ,"Odisha","Chhatisgarh" ,"Andhra Pradesh"}},{{"Pratibha Patil", "A. P. J. Abdul Kalam" ,"K. R. Narayan" ,"Shankar Dayal Sharma"},{"INS Viraat" ,"INS Samudragupta","INS Vikramaditya" ,"INS Bramhaputra"},{"Rajasthan" ,"Madhya Pradesh","Chhattisgarh" ,"Maharashtra"},{"Chaumukhi" ,"Surajmukhi","Jwalamukhi" ,"Panchmukhi"},{"Calcutta" ,"Surat","Calicut" ,"Madras"}},{{"V. V. Giri", "Fakhruddin Ali Ahmed","Zakir Hussain" ,"Neelam Sanjiva Reddy"},{"2 :4","3 : 4","2 : 3","3:5"},{"Rahul Dravid","Ricky Pointing","Brian Lara","Sachin Tendulkar"},{"F-16","MiG-21","Mig-29","Sukhoi Su-30"},{"Bengal","Assam","Manipur","Sikkim"}},{{"Singh is Bliing","Paan Singh Tomar","Sinham","Sardaar Gabar Singh"},{"Kaminey" ,"7 Khoon Maaf","Don" ,"Aitraaz"},{"Sodium","Protein","Iodine","Vitamin"},{"Sarayu","Ganga","Tamsa","Karmanasa"},{"Amish Tripathi","Amitav Ghosh","Ashok Banker","Aravind Adiga"}},{{"Dhanush’s ‘Why this Kolaveri Di?", "Justin’s Bieber’s ‘ Baby’", "PSY’s ‘Gangnam Style’","Adele’s ‘ Rolling in the Deep’"}, {"Russia" ,"Great Britain","Iceland","USA"},{"ISI Mark" ,"Trademark","Hallmark" ,"FPO Mark"},{"European Union" ,"International court of justice","Greenpeace" ,"International Atomic Energy Agency."},{"Kaustubh Mani","Syamantak Mani","Chudamani","Nagmani"}},{{"Virender Sehwag", "Kapil Dev", "Yusuf Pathan","Md Azharuddin"},{"Syndicate Bank", "Central Bank of India","Punjab National Bank", "Indian Bank"},{"Novak Djokovic" ,"Andy Murray","Caroline Wozniacki" ,"David Ferrer"},{ "Paul Canning", "William Hawkins", "Thomas Roe", "James Lancaster" } , { "Laxmi", "Parvati", "Saraswati", "Durga" }} , {{ "Emilio Palma", "James Weddell", "Nathaniel Palmer", "Charles Wilkes"}, {"Truth Seekers", "Non – Violents", "Passive Resisters", "Non co-operators"}, {"Rajasthan", "Bihar", "Punjab", "Andhra Pradesh"}, {"Baqa Jilani", "Commandur Rangachari", "Gogumal Kishenchand", "Kanwar Rai Singh"}, {"Shalimar Bagh", "Chini Ka Rauza", "Humayun’s Tomb", "Taj Mahal"}}, {{ "Kapinjala", "Kayadhu", "Kamalakshi", "Kaushiki"}, {"Kuber", "Buddha", "Vibhishana", "Ravana"},{"Chemistry", "Physics", "Peace", "Economics"}, {"Varahagiri Venkata Giri", "Pratibha Patil", "Zakir Hussain", "Shankar Dayal Sharma"},{"Deepika Padukone", "Priyanka Chopra Jonas", "Kareena Kapoor Khan", "Alia Bhatt"} }, {{"15 November 1656", "27 February 1659", "May 29 1658", "18 June 1657"},{ "Marie Curie- Irene Joliot Curie", "JJ?Thomson-George Paget Thomson", "Niels Bohr- Aage Bohr", "Herman Emil?Fischer- Hans Fischer"}, {"Junko Tabei", "Wanda Rutkiewicz", "Tamae Watanabe", "Chantal Maudui"},{"Belgium", "Italy", "Denmark", "France"}, {"Ram Kinker Baij", "Benode Behari Mukherjee", "Rabindranath Tagore", "Nandlal Bose"}}};
// This array contains all the 4 options for all questions in the game. According to what question gets selected randomly, the respective options are called from this array and are printed.

char questions[15][5][400]={{"How many bones are there in the human body?","Which is the longest river in the world?","Which festival is also known as “Festival of Lights”?","Which planet is closest to the sun?","How many cards are there in a pack of cards?"},{"Which place in India is also known as “Heaven on Earth”?","Name the highest mountain in the world."," Port Blair is the capital of which Union Territory?","The young one of Goat is","What is the national currency of the United Kingdom?"},{"Who was the first President of India?","The Steam engine was invented by","In which year did the Quit India Movement start?","How many times has India won the ICC World Cup?","Which is the smallest country in the world?"},{"Who is the first Indian woman wrestler to win a gold medal at the Asian Games?","In which group of places the Kumbha Mela is held every twelve years?","Pongal is a popular festival of which state?","Ghototkach in Mahabharat was the son of","In which of these sports do players try to hit the ball to make it touch the surface of the rival team's court to earn piano"},{"Who was declared as the winner of National Award for Best actress in 2018","Which among these is an Island country ?","With which religion would you associate the practice of Santhara fasting unto death?","Which of these tourist attractions is situated on an island ?","Which of these is a chemical element present in the periodic table?"},{"Which of these personalities is known as the ‘Flying Sikh’?","With reference to genetics, which of these would best describe DNA and RNA?","According to the Mahabharata, which of these characters got married through a swayamvara?","Vijay Kumar Won a Silver medal at the 2012 London Olympics in which sport?","Which Country’s Head of State visited Ajmer Sharif in April 2012 and announced a donation of Rs. 5 Crore ?"},{"Which of these cities does the Yamuna Express Way connect with greater Noida?","In May 2012, which country’s prime minister became its president and the became the prime minister ?"," Who is the first woman to become CEO of the soft drink giant PepsiCo ?","What was the name of the rover sent by NASA that landed on Mars in August, 2012 ?","Which state has the highest coal reserve in India?"}, {"Who administered the oath of office to Dr. Manmohan Singh when he became Prime Minister for the first time?","What has the Admiral Gorshkov aircraft carrier bought by India been renamed as?","Vasundhara Raje Scindia was the first female chief minister of which state?","Which of these is a Hindi name for a yellow coloured flower?","Where in India did the British East India Company establish their first permanent factory?"},{"Which President proclaimed Emergency in India on 26 June 1975 ?","The ratio of width of our National flag to its length is","Which of these cricket legends made his debut as a commentator in opening match of the 2019 cricket world cup","Which of the following aircrafts is not a part of the Indian Air Force?","The states of Arunachal Pradesh, Nagaland, Mizoram and Meghalaya were once part of which larger state?"},{"Which of these is a Hindi film based on a real life dacoit","For which film did Priyanka Chopra win the Filmfare Best Villian Award?","A child may develop Kwashiorkor disease primarily due the deficiency of what?","On the banks of which river did Valmiki compose the Ramayana?","Who is the author of the novels ‘ The Immortals of Meluha’ and ‘ The Secrets of the Nagas’?"},{"On 20 Sep 2012, which video was recognized by Guinness World Records as the most “liked” video in You Tube history ?","Which is the only country whose postage stamps do not feature the name of the country issuing them ?","Which of these markings is given by the Bureau of Indian Standards to identify the purity of precious metals?","Which of these organisations won the Nobel prize in 2012?","In the Valmiki Ramayana, which if these divine jewels did Sita wear in her hair?"},{"In ODI cricket , who holds the Indian record of scoring a century in the least number of balls?","Which of these banks was set up on 15 August 1907 as part of the ‘Swadeshi Movement’?","Which of these tennis players won his or her first Grand Slam title in September 2012?","  Who commanded the Hector, the first British trading ship to land at Surat?"," What was the name given to the supercluster of galaxies, discovered by a team of Indian astronomers in 2017?" },{"Who, in 1978, became the first person to be born in the continent of Antarctica?", "What was the name of all the three soccer clubs set up with the help of Mahatma Gandhi in the early 20th century at Durban, Pretoria and Johannesburg?" , "Which of these states has had the most number of its governors become presidents of India?" , "Who was the Indian bowler off whom Australian legend Don Bradman got a single to reach his 100th first class century?" , "Which of these Mughal structures was known by the name Rauza-i-Munawwara?" },{"In mythology, what was the name of Hiranyakashipu’s wife and Prahlad’s mother?", "After which historical or mythological figure did Sri Lanka name its first satellite?", "Since its inception, which category of the Nobel Prize has been awarded every single year?", "Which Deputy Chairman of the Rajya Sabha went on to become president of India?", "Which is the only actress in the history of Indian cinema to have delivered 4- 100 crore movies in the same year?" }, { "When was the battle of Samugarh, the war for the throne of the Mughal empire between Dara Shikoh and Aurangzeb?", "Which of the following is not a pair of parent and child, who have both won Nobel Prizes?", "Who is the first woman to successfully climb K2, the world’s second highest mountain peak?", "Which colonial power ended its involvement in India by selling the rights of the Nicobar Islands to the British on October 18, 1868?", "Which of these artists was principally entrusted with the task of ‘illuminating’ the original document of the Constitution of India?"}};
//We have stored these 75 prospective questions in this array. All the 15 levels have 5 questions out of which 1 gets selected randomly every time the user starts a new game.

int prize[]={0,5000,10000,20000,40000,80000,160000,320000,640000,1250000,2500000,5000000,10000000,30000000,50000000,70000000};
// This array contains the prize money associated with each of the 15 questions.

int correct[][5]={{0,2,0,3,2},{0,3,0,2,3},{1,1,3,2,3},{2,1,2,3,1},{2,1,0,1,1},{3,1,2,0,2},{1,0,1,3,0},{1,2,0,1,1},{1,2,3,0,3},{1,3,1,2,0},{2,1,2,0,1},{0,3,1,1,2},{0,2,1,2,3},{1,3,3,1,0},{2,3,1,2,3}};
// This array contains 15 sub-arrays which contain the correct option number's element position from the array 'Options'.

int i; // It always points to the element position of the randomly generated question from the array 'questions'

int fixed_prize; // This indicates the minimum amount of money that the user will fall back to if a particular question is answered wrongly.

int prize_won; // This indicates the prize money the user has won after the game.

int max=50; // This allows a maximum of 50 users to play the game in one go.

int is_correct(int n,int a) // This function checks if the answer entered by the user is correct or not.
{
	if(a-1==*(*(correct+n-1)+i))
        return 1;
    else
        return 0;
}

int print_opt(int n,int flag)  // This function will print the options for the corresponding randomly generated question.
{
    int j,k,z;
    if(flag) // The variable 'flag' will check if the user has opted for the 50-50 lifeline or not. flag==0 => The user has chosen it.
    {
    for(j=0;j<4;j++)
    {
	printf("%d. %s\t\t\t\t",j+1,*(*(options+n-1)+i)+j);
    if(j==1||j==3)
        printf("\n\n");
    }
    }
    else
    {
    j=correct[n-1][i];
    do
    {
    srand(time(0)); // This will ensure that every time the program is run, a new value for variable k is generated.
    k=rand()%4; // This will randomly assign a number from 0 to 3 to the variable k.
    }
    while(k==j); // This will ensure that the correct option is not displayed twice in 50-50 lifeline.

   	int temp;
   	z=k;
   	if(j>k)
   	{
   	temp=j;
	j=k;
	k=temp; // This will ensure that the options numbers are printed in order (smaller one first)
	}
	printf("%d. %s \t\t\t\t  %d. %s \n\n",j+1,*(*(options+n-1)+i)+j,k+1,*(*(options+n-1)+i)+k);
    }
    return z; // This returns the position of randomly generated (non-correct) option number to print_ques.
}


int print_ques(int n,int j, int flag, int *lifeline_1, int *lifeline_2)
{
    int a,c=0,win;
    if(flag==0) // If the user selects 50-50, this ensures that the same question is printed again.
    i=j;
    else
    {
    do
    {
        srand(time(0));
        i=rand()%5; // This will randomly generate a number from 0 to 4 which will correspond to the question to be printed.
    }
    while(i==j);  // This will ensure that a different question is printed in case the user uses the flip lifeline.
    }
    if(j<5 && flag==1)  // This will print the below line only if the user chooses the flip lifeline.
    printf("------SPECIAL LIFELINE QUESTION------\n");

    printf("Q%d. %s\n\n",n,*(questions+n-1)+i); // This will print the question.

    printf("\t\t\t\t [You won: Rs. %d|||Minimum winning amount: Rs. %d.|||This question is for: Rs. %d]\n\n",prize[n-1],fixed_prize,prize[n]); // This will update the user about his/her current performance and the prize money of the current question.

    int k=print_opt(n,flag); // This will print the options.
        printf("*****************************************************************************************************\n");
    printf("1. If you want to choose an option enter the option number\n");

    if(*lifeline_1||*lifeline_2) // This will notify the user about the number of lifelines he is left with.
    {
        if(*lifeline_1&&*lifeline_2)
           {
               c=1;
            printf("2. You have both the lifelines. Enter 9 if you  want to use a lifeline\n");
           }

        else if(*lifeline_1)
            {

            printf("2. You have a 50-50 lifeline. Enter 9 if you  want to use the lifeline\n");
               c=2;
            }

        else
            {
        printf("2.You have a flip lifeline. Enter 9 if you  want to use the lifeline\n");
               c=3;
            }
    }

    else
        printf("2. You don't have any lifeline\n");

    printf("3. Press 0 to exit the game\n");
        printf("*****************************************************************************************************\n");

    while(1)
    {
    int ret=scanf("%d",&a); // scanf returns a zero when the user enters a character using which we can ask the user to enter a valid input.
     while ((getchar()) != '\n'); // This will flush the buffer generated by scanf.

    if(a==9&&c==1) // This asks the user which lifeline he/she wants to use if both lifelines are available.
        {
         while(1)
        {
        printf("Enter 1 for 50-50 and 2 for flip\n");
        scanf("%d",&a);
        while ((getchar()) != '\n');

        if(a==1)
            {(*lifeline_1)--;win=print_ques(n,i,0,lifeline_1,lifeline_2); break;} // This will update the number of lifelines left and will execute the lifeline specific features accordingly.

        else if(a==2)
            {(*lifeline_2)--;win=print_ques(n,i,1,lifeline_1,lifeline_2); break;}  // This will update the number of lifelines left and will execute the lifeline specific features accordingly.
        else
            {
            printf("Please enter a valid key!\n\n");
            continue;
            }
        }
        break;
        }

    else if(a==9&&c==2) // This is for the situation where the user is left with only 1 lifeline, i.e 50-50.
        {(*lifeline_1)--;win=print_ques(n,i,0,lifeline_1,lifeline_2); break;}

    else if(a==9&&c==3)  // This is for the situation where the user is left with only 1 lifeline, i.e flip question.
        {(*lifeline_2)--;win=print_ques(n,i,1,lifeline_1,lifeline_2); break;}

    else if(a==0 && ret!=0) // This is for the case when the user wants to quit the game and leave with the current prize.
        {win=2; break;}

    else if(j<5 && flag==0) // This ensures that if the user selects 50-50, he/she does not enter the option numbers which have been eliminated.
        {
        if(a==k+1 || a==correct[n-1][i]+1)
        {win=is_correct(n,a);break;}
        else
        {
            printf("Please enter a valid number\n"); continue;
        }
        }

	else if(a==1||a==2||a==3||a==4) // This is for the case when the user does not use any lifeline and answers the question.
        {win=is_correct(n,a);break;}

    else
         {printf("Please enter a valid number\n"); continue;}
    }
return win; // This returns the result to the main function (right/wrong/quit).

}

 void print_prize(int n, int win) // This will inform the user about the prize money he/she has won.
{
    if(win==0) // This is for the case when the user enters a wrong option.
        {printf("Oops! Your answer is wrong. The correct option was %d. %s.\n You have won Rs. %d\n\n",*(*(correct+n-1)+i)+1,*(*(*(options+n-1)+i)+*(*(correct+n-1)+i)),fixed_prize);
        prize_won = fixed_prize; // Prize money won is the prize of the last intermediate level.
        }

    else if(win==1 && n==15)  // This is for the congratulatory message if the user answers all 15 questions correctly.
        {printf("Whoa!!! You killed the game. Congrats for being an official Crorepati!!");
        prize_won = prize[15]; // Prize money won is the maximum prize money, i.e 7 crores.
        }

	else if(win==1 && n!=3 && n!=8 && n!=12) // This is for the case when the user enters a correct option for questions other than the intermediate levels (3,8,12)
        printf("Congrats! Your answer is correct. Your current prize is Rs. %d\n\n",prize[n]);


    else if(win==1) // This is for the case when the user enters a correct option for questions of intermediate levels.
    	{fixed_prize=prize[n]; // This updates the mimimum prize money the user will win in the game.
    	printf("Bingo!!! You will be surely winning at least Rs. %d today!\n\n",fixed_prize);
    	}

    else // This is for the case when the user quits the game and returns with the prize money of the previous question.
        {printf("The correct option was %d. %s.\nWell played!\n You have won Rs. %d\n\n",*(*(correct+n-1)+i)+1,*(*(*(options+n-1)+i)+*(*(correct+n-1)+i)),prize[n-1]);
        prize_won = prize[n-1];}

}

int main()
{
    char z;
    int a=0; // a is the variable which stores the number of players who have played the game (in a go) and max stores the maximum number of users that can play the game in one go.
    char arr[50][100]; // This will take the input of the name of the user.
    int arr1[50]={0}; //Creating an array which will store the reference pointer to the original username array
    int highscore[50]={0}; // This will store the prize money won by the user.
    while(max--) //This allows a 'max'[initialised to 50] number of users to play in one go.
        {
            int n=1,win,lifeline_1=1,lifeline_2=1;
            printf("\n\n\t\t\tWelcome to Kaun Banega Crorepati!\n\nThis game comprises of 15 question. Cash prize associated with each question is as following\n\n1.  5,000 Rs\n2.  10,000 Rs.\n3.  20,000 Rs.\n4.  40,000 Rs.\n5.  80,000 Rs.\n6.  1,60,000 Rs.\n7.  3,20,000 Rs.\n8.  6,40,000 Rs.\n9.  12,50,000 Rs.\n10. 25,00,000 Rs.\n11. 50,00,000 Rs.\n12. 1 crore Rs.\n13. 3 crore Rs.\n14. 5 crore Rs.\n15. 7 crore Rs.\n\nPlease note that question no. 3,8 and 12 are intermediate question levels.That is you will drop down to the prize money of the closest intermediate question if you answer a question wrong.\nYou can exit the game at anytime during the question and leave with your current prize money\n\nThe user can opt for two life lines, such as “50-50”, upon selection of which, two wrong options will be removed from the screen, or “flip the question” that will replace the entire question with a new one on the screen. These life lines can be availed by the user only once (even at the same time as well).\n\n\n");
            // This will enter all the rules and general information about the game.

            int j = a-1;
            while ( j > 0 && highscore[j-1] < highscore[j]) //This is to sort the newly entered score.[The original array is always sorted]
            {
                int temp = highscore[j-1];
                int temp1 = arr1[j-1];
                highscore[j-1]   = highscore[j];
                arr1[j-1]=arr1[j];
                highscore[j] = temp;
                arr1[j]=temp1;
                j--;
            }

            if(a==0) // This is for the first time (in a go) that an user will play the game.
            printf("You're the first one to play. Go get a high score!\n\n");

            else
            {
                printf("HIGH SCORES: \n");
                printf("--------------------------------------------------------------------------------\n");
                for(int p=0;p<a;p++)
                printf("%d. %s : %d Rs.\n",p+1,*(arr+arr1[p]),*(highscore+p)); // This will display the high scores of users who have played until then.
                printf("--------------------------------------------------------------------------------\n\n");
            }

            printf("Please enter your name\n");
            gets(*(arr+a)); // This will take the input of the name of the user.
            printf("\nBest of luck,%s!!\n\n",*(arr+a));

            for(n=1;n<16;n++) // This ensures that a maximum of 15 questions are played by the user.
            {
                if(n==1)
                {
                    printf("Press any key to start the game\n");
                    getchar(); // This will ensure that the game starts when notified by the user.
                }

                else if (win==1)
                {
                printf("Press any key to display the next question\n\n");  // This will ensure that the next question is displayed when notified by the user.
                getchar();
                }

                else if (win==0||win==2) // This breaks the loop when the user quits the game or answers a question wrongly.
                break;

                printf("-------------------------------------------------------------------------------------------------------------------------------------\n\n");
                win=print_ques(n,5,1,&lifeline_1,&lifeline_2);
                print_prize(n,win);
                printf("-------------------------------------------------------------------------------------------------------------------------------------\n\n");
            }

        highscore[a] = prize_won; // The prize money won by the user is stored in the highscore array.
        arr1[a]=a;
        a++;
        if(max!=0)
        {printf("Enter 1 to play again or enter any key to exit\n\n"); // To play the game again
        scanf("%c",&z);
        while ((getchar()) != '\n');
        if(z=='1')  // If the user enters 1, it will repeat the entire procedure.
            continue;
        else
            break;}
        }
return 0;
}


