#include <iostream>
#include <cmath>
#include <stdlib.h>

int main () {
// declare all questions as variables
  int answer1, answer2, answer3, answer4 = 0;
  int answer5, answer6, answer7, answer8 = 0;
  int answer9, answer10, answer11, answer12 = 0;
  int answer13, answer14, answer15, answer16 = 0;
  int answer17, answer18, answer19, answer20 = 0;
  int answer21, answer22, answer23, answer24 = 0;
  int answer25, answer26, answer27, answer28 = 0;
// declare all stats
  int Strength = 5;
  int Forsight = 5;
  int Tactics = 5;
  int Durability = 5;
  int Fate = 5;

//set the mood
  std::cout << "At the dawn of the second age the great warrior Shou'u lead his army to the summit of the Crested Mountains to claim a throne of the Godship for himself.\n";
  std::cout << "\n";

  std::cout << "But no seat lay vacant for his ascension... He would have to conquer one of the Old Gods in order to have dominion of his own realm. This would be no easy task.\n";
  std::cout << "\n";

  std::cout << "As he marched slowly forward: 15,000 footman, 4,000 studded calvary, 3,000 archers,1000 cooks, 4,000 slaves pulling his 300 ships across the land, all behind him in unison to the sound of his 500 war drummers. They had left a desert behind them consming all the grain, wearing the land to a beaten road, drinking the rivers dry. It is sad to leave such waste he thought, but a small price compared to an ascension. Such matters were beneath him.\n";
  std::cout << "\n";

  std::cout << "Part of him wanted to smile, the world was large and he had conquered all so far. The denshins to the south with there monsterous war elephants had trampled armies to death but his archers' eagle eyes slew them with ease. The Nuberians to the west with their rapid war dog soldiers bearing filed teeth and heavy greatshields created the world's strongest mobile walls, yet his calvary soared higher still. The Brethisks with their nimble spear men were masters of the phalanx, fabelled throughout history as the only soldiers whose balance of strength and precision could pierce any soldier's platemail. His footman felled them too.\n";
  std::cout << "\n";

  std::cout << "Indeed he was a man to be admired. Indeed he was a man to be feared.\n";
  std::cout << "\n";

  std::cout << "The sun begins to set and he orders the slaves to cease the ships and tack them down for nightfall and unload the camp gear, he sends the archers to hunt, the footman to establish latrines and build the tents. The calvary to build the stables and the drummers to set up for ritual.\n";
  std::cout << "\n";

  std::cout << "Most of his enemies and even his allies knew what was coming. One of the grandest fights in all of time, in all of the world. Shou'u was the only one to eat in silence and go without wine. His man sang praises of him all night and thought of the glory they would all attain to be at his side. Even the slaves could'nt help but hope for his victory. Although they were taken and conquered he treated them as human still. He made his cooks serve them the same food and clean water. His footman to build them shelter and they were never to treated in any way a soldier wouldn't be. They may not know how to weild a sword but they carry our supplies, our weapons, our armours, our ships. They are apart of our army he would tell his officers to their dismay.\n";
  std::cout << "\n";

  std::cout << "The night was coming to an end as most of the men stumbled or were thrown into their tents. As quiet settled he looked up and imagined the Four. Whom would he best, or whom would slay him. He closed his eyes and there they were: Crixdimh the Immortal, Fenvil the Rain, Gnoram the Scorch, and Liyrah the Astral.\n";
  std::cout << "\n";

  std::cout << "Take control of Shou'u, take control of fate.\n";

// engage the player
  std::cout << "Do you accept the call?\n";
  std::cout << "1) Yes\n";
  std::cout << "2) No\n";
  std::cin >> answer1;

  if (answer1 == 1) {
    std::cout << "Yes it is only right for the next ascension to take place with you\n";
  }
    else if (answer1 == 2) {
      std::cout << "Yeah that's fair I suppose, they are Gods after all and no one wants to fight that. I think it's best if you just get off the computer now, go touch some grass maybe? Oh I know why don't you go get some ice cream and be fat like the other cowards!\n";
    return 0;
    }
    else {
      std::cout << "Bruh... you had one job. How did you mess up a binary choice.... This does not bode well for your REAL LIFE CHOICES with REAL LIFE CONSEQUENCES!\n";
      std::cout << "Also uh..... I don't know how to get another input from you.. Yeah we still learnin out here. You're going to have to restart the code for now. You only have yourself to blame for this.\n"; 
    return 0;
    }
 

// introduce concept of the game
  std::cout << "You will discover more along your journey about the Four and each decsion you make can change the possibility of success.\n";
  std::cout << "\n";
  std::cout << "For now there are 5 stats you are given and each one except the last has a base value of 5. Each stat has a maximum of 10.\n";
  std::cout << "Also do yourself a favor and enter only the valid options, otherwise you're going to have to restart the code and that's no fun when your adventure ends because of a mistype :(\n";
  std::cout << "\n";
  std::cout << "Your stats are: \n";
  std::cout << "1) Strength = 5\n";
  std::cout << "2) Forsight = 5\n";
  std::cout << "3) Tactics = 5\n";
  std::cout << "4) Durability = 5\n";
  std::cout << "5) Fate = 5\n";
  std::cout << "Please enter the numbmer '1' when you wish to continue.\n";
std::cin >> answer2;

//explain goals for players
  std::cout << "The strength stat is for one on one combat. Forsight is for dealing with puzzles, riddles, can be used to predict your opponents next move.\n";
  std::cout << "\n";
  std::cout << "Tactics is the stat that determines the success of your army's attacks on a foe. Durability is your personal health or that of the ship should you chose to mount one. Note... if the ship goes down you go down with it.\n"
  std::cout << "\n";
  std::cout << "Finally Fate is the stat you will use to battle magics, read the stars, and it also functions as a 'luck' stat. In order to 'win' an encounter and have a positive effect. The corresponding stat must be higher than that of the oppenent. If your stat is lower, you will suffer a penalty of (-1) to that stat.\n";
  std::cout << "\n";
  std::cout << "There are a few encounters which will require multiple 'checks' or victories. These encounters will reward the player with a (+2) or even a (+3) reward to a stat. However failure to achieve success results in IMMEDIATE DEATH. Be careful with your choices Shou'u.\n";
  std::cout << "Once you have read all of this please enter 1 to continue.\n";
std::cin >> answer3;

// encounter 1
  std::cout << "You awake at dawn to a commotion of screaming men and horses, the air is thick with the smell of ashes and burnt flesh. One of your officers orders a platoon of men to get the last of the reserve water to douse the fire. Another orders the other stables be emptied immediately and the horses moved away from commotion, a third officer suggests that the rest of the men get shovels and start to dig to prevent the fire from spreading to the rest of the camp. What are your orders sir?!\n";
  std::cout << "\n";
  std::cout << "1) My officers are wise in their regards let them handle it and bring me my breakfast when you can.\n";
  std::cout << "2) Sound the alarm and call over the second detachment for support. Have them bring back the escaped horses and bring extra water.\n";
  std::cout << "3) Whoever was in charge of managing that stable. Bring them to me so I shall have their head!\n";
  std::cout << "4) Bring me my war table and globe. I shall divine whomever started this fire and offer their blood to Liyrah for her favor.\n";
std::cin >> answer4;

switch (answer4) {
  case 1:
  Forsight--, Tactics--;
  std::cout << "Your selfishness and negligence have caused the fires to spread to the barracks and all the troops that were sent to dig were engulfed in the raging flames. You have suffered (-1) to both forsight and tactics.\n";
  break;
  case 2:
  Forsight++, Tactics++;
    std::cout << "Your intuition served you well. The land up to the mountains is dry and you are encroaching on the domain of the gods. It is only natural they use this to their advantage and try to burn you in your sleep. The extra water prevents the fire from raging out of control and allows the trench to be dug in time to stop the spread. All of the horses are retrieved from their panicked escape. You have gained (+1) Forsight and (+1) Tactics.\n"; 
  break;
  case 3:
  Durability--, Tactics = Tactics - 2;
  std::cout << "In your rage you find the sergeant and stable master in charge. In the middle of the rescue operation you bind their hands and sever their heads. Stunned by fear your soldiers momentarily stop to watch their superiors die without honor. The flames rage and catch your cloak on fire. You have burned yourself and weakened your troops' faith in your abilities. (-1) to durability and (-2) Tactics.\n";
  break;
  case 4:
  Tactics--, Fate = Fate + 3;
  std::cout << "Although some of the horses were lost forever and troops as well. The action you took inspired your troops to give their lives for you for this noble cause. You divine that it was not Gnoram who burned your army but Liyrah herself! You have suffered (-1) Tactics but gained (+3) Fate!\n";
  break;
}
std::cout << "Please push 1 to continue.\n";
std::cin >> answer5;

//Set up split path choice for nestled loops
  std::cout << "With the fire snuffed, troops settled and all remaining parties intact you must make your first choice along separate paths. You know that your armies will need an adequate supply of food and water otherwise you will be at a larger disadvantage when fighting the Four.\n";
  std::cout << "\n";
  std::cout << "This land is at the edge of all you have conquered and you know that you are coming upon the furthest Northern in your domain, Hadenspire. You have the choice to push forward towards the decaying woods and save precious time that you have lost or to go to the town and purchase additional drinking water, purchase horses and food, and try to meet with the towns priest to divine a fortune.\n";
  std::cout << "\n";
  std::cout << "What is your choice?\n";
  std::cout << "1) Take a detour to the town.\n";
  std::cout << "2) Continue ownward.\n";
std::cin >> answer6;

if (answer6 == 1) {
  std::cout << "Your officers and soldiers are pleased with your decision and are glad to visit civilization one last time before going to the unknown. Of course the town cannot support your entire army but the presence of civilians, the smell of the farmland livestock mixed with ash from the blacksmith reminds them all of their own homes. However breif the respite you have achieved a moral boost. You may allowcate a (+1) value to a stat of your choice.\n";
  std::cout << "1) Strength\n";
  std::cout << "2) Forsight\n";
  std::cout << "3) Tactics\n";
  std::cout << "4) Durability\n";
  std::cin >>answer7;

  // First nestled loop
  if (answer7 == 1) {
    Strength++; }
    else if (answer7 == 2) {
    Forsight++; }
    else if (answer7 == 3) {
    Tactics++; }
    else if (answer7 == 4) {
    Durability++; }
    else {
    std::cout << "You have failed to enter a designated value. For your sins the developer has seen fit to punish you for your hubris that you are above instruction and control. (-1) Fate.\n";
    Fate--;
    }
  //Seconday loop for camp decsion
  std::cout << "Please enter '1' to continue onward.\n";
  std::cin >> answer8;
  std::cout << "The dawn of the second day hits and it is time for your army to move out towards the woods. With the detour it will take you all day to arrive at the decaying woods. However, with the well restedness of your decision your army (and your stats) suffer no effects on this journey!\n";
  std::cout << "\n";
  std::cout << "The sun is about 10 degrees above the horizon, having lived without technoogical distractions such as a computer, running water, and a centralized government, you know that you have about 2 hours until near complete darkness under the full moon.\n";
  std::cout << "\n";
  std::cout << "Do you choose to push forward into the forest and make camp somewhere inside to save time or do you make camp at the outskirts and avoid poorly light construction hazards and night time predators?\n";
  std::cout << "1) Push forward.\n";
  std::cout <<"2) Make camp at outskirts.\n";
  std::cin >> answer9;
  // Another Nestled loop for pathway of town.
  // Provides chance encounter for random number generator
  if (answer9 == 1) {
    std::cout << "You troops follow obediantely but are hesitant that it is the correct decision. After two hours passed you decide to take what precious little minutes of twilight you have to issue the command to make camp. Everyone settles down in a hurry and you will not be able to have uniform distribution of military setup. The camp will be in disarry and you will be vulnerable to an attack... Especially from a God.\n";
    std::cout << "\n";
    std::cout << "Random attack! You here the shouting of men and the screams of death towards your slave detachment. That's where the ships and weapons stores are, oh no! Your own haste has set the stage for a fate roll! At this point the maximum fate you could have amassed is '8' The lowest you could have is '4'. You will now battle every gamers' worst nightmare. A beast so cruel it has caused tens of thousands of dollars in damages. Made humans of all shapes and sizes wail deep into the night. Your opponent is... A random number generator.\n";
    std::cout << "\n";
    std::cout << "*cries of pain and agony* goodluck friend.\n";
    std::cout << "Here is your current Fate value to help visualize your chances.\n";
    std::cout << "Fate value is: " << Fate << "\n";
    std::cout << "Please enter 1 to continue.\n";
    std::cin >> answer10;
    std::cout << "If your Fate value is greater than that of the RNG you will fight a pack of wolves, 15 strong. If it is equivalent a combination of wolves and marauders will raid you. If the RNG has a value greater than yours, Fenvil will attack dealing great damage to your army.\n";
    std::cout << "Please enter '1' to determine your fate.\n";
    std::cin >> answer10;

// Random generator fight
    srand(time(NULL));
    int computer1 = rand() % 10 + 1;
    if (computer1 > Fate) {
    Forsight--, Tactics = Tactics - 2; 
    std::cout << "The RNG has rolled a value of " << computer1 << ".\n";
    std::cout << "Fenvil arrives and you understand for the first time in your life what the word 'insurmountable' means. You hear wind spiraling, rocks levitate off of the ground, water gets pull from the rivers and air to form the shape of a wolf. Leftover bones and rusted metals from the decaying forest align to what you think is the mouth of this divine being.\n";
    std::cout << "\n.";

    std::cout << "Fenvil howls and to your horror a tsunami emerges from the east. There is no escape. In an instant 25% of your forces are lost. The boats proved to be little safe haven of refuge as the troops that were smart enough to flee into them were smashed into the forest and into detachments of your men. Your own ships became Fenvil's calvary.\n";
    std::cout << "\n";

    std::cout << "Your forces stand in shock. As quickly as the water came it vanished. Clouds coalesce above leaving on the moon uncovered. A spolight glorifying your failure as the light engulfes only you. The clouds burst and the heavens cry. Mixed blood, flesh, rain, and stolen swords fall onto your men. Fenvil, ever hungry, thanks you for the meal. You have suffered (-1) to forsight and (-2) Tactics.\n";
    }
    else if (computer1 == Fate) {
    Tactics--;
    std::cout << "A lurking band of marauders trained to raid accompanied by their bloodhounds attack your footmen to the west. Your officers closest to the battle manage to sound the alarm just before they are torn limb from limb by the hounds. You summon your personal guard and all your sodiers prepare for battle. You manage to form a shield wall to the front and your eastern forces push to flank. The enemies are routed.\n";
    std::cout << "\n";
    std::cout << "Your casualties amount to 153 troops and 15 horses. Negligible in reality of numbers but devistating to morale. You suffer (-1) to Tactics.\n";
    }
    else {
      std::cout << "The pack of wolves while ferocious did not manage to kill any of your men and are succesfully pushed back with torches and shouting. The few bite marks sustained appear to not have crippled any soldiers and only will leave minor scars. This appears to be a pack mostly filled with Juveniles, still learning how to hunt. Your luck holds true for now. You suffer no effects.\n";
    } 
  }
/* This is the other option for the first split path of the town. 
However this code returns nothing when run, needs to be debugged or reworked perhaps with a reference file.
*/

else (answer6 == 2) {
    std::cout << "Your troops understand that although it would be nice to refuel supplies, time is limited. You are on a path to challenge gods and in that regard time is something scarce. The longer the fight the greater the cost of lives.\n";
    std::cout << "\n";
    
    std::cout << "You arrive at the center of the decaying forest and the sun will soon be below the horizon. You must make a tactical decision, do you give the troops time to make camp and set in for the night, or do you push through to the otherside of the forest. Keep in mind there has never been a recorded history of what lurks in the forest. However, you and your army will face exhaustion at the end which could leave you vulnerable to an ambush on the otherside. Maybe you should've gone into town first... Oh well\n";
    std::cout << "\n";
    std::cout << "What is your choice?\n";
    std::cout << "1) Make camp in the forest.\n";
    std::cout << "2) Push through to the other side.\n"; 
  // Nestled loop for original split
  if 

}
// Give the player a break and do a stat check
  std::cout << "Please enter 1 to continue.\n";
  std::cin >> answer11;
  std::cout << "You have read a lot of text. As a coutesy, here is a stat update for you.\n";
  std::cout << "Strength is: " << Strength << ".\n";
  std::cout << "Forsight is: " << Forsight << ".\n";
  std::cout << "Tactics is: " << Tactics << ".\n";
  std::cout << "Durability is: " << Durability << ".\n";
  std::cout << "Fate is: " << Fate << ".\n";

// This bracket closes the split loop
}
  

return 0;
}
