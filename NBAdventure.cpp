//TextAdventure.cpp
//Surmeet Bhullar, CISP 360
//07/28/2021

#include <iostream>
using namespace std; 

struct room
{
  string description; 
  string roomName; 
  int monsterHealth;
  string monsterName; 
  string roomid; 

};

double heightincreased (double a);
double height (double a);
void programgreeting();

int main()
{
  programgreeting();
  double heights;


  room A; 
  A.roomName = "The Sun";
  A.monsterName = "Silver";
  A.monsterHealth = 100;
  A.description = "Welcome to where we make sure that hooper hoopers have a path to the NBA and others with no chance remain out of our way, if you have watched Loki this is similar to the TVA, but in more of a basketball context. What you see right now, is white space, everything around you is bright similar to looking at the Sun because that is very much where we are located. At the center, the core of not your Sun, but The Sun of all universes. Whatever functions you were doing about 10 seconds ago, have stopped and will remain stopped if you fail in this journey and there is a greater chance you will not be alive by the end of this but I guess we will see. Before we let you even waste the times of the Kings of North, South, East and West you have to fight me, some call me Gold, but you can call me Silver. ";
  A.roomid = "TS"; 

  room N; 
  N.roomName = "The 6ix";
  N.monsterName = "Fred";
  // A1 - Monster Health that Updates After Combat 
  N.monsterHealth = 100;
  N.description = "Well, if you didn't already understand, this is not a game but this is an experience. An experience in which your reality is not necessarily The Reality. Therefore, I welcome you to the providence of Ontario in Canada, specifically 'The 6ix' also known as Toronto. What you are seeing right now is what I see but you can't see me, just yet. My name is Fred Van Vleet but you can call me Fred, I am more of the friendlier kings as I don't really have an ego like that but hey, who knows, maybe you will like me and be of understanding. Now, let me help you understand, you are currently standing in a stadium that has the ability to host 30,000 people but it is just me you and your dumb little friend. Now, you can either go away or engange in combat with me to face three more Kings who I can assure you are of equal difficulty so please be awar...";
  N.roomid = "6"; 
  

  room S;
  S.roomName = "Dallas";
  S.monsterName = "Luka";
  S.monsterHealth = 100;
  S.description = "Hello my good friend, my name is Luka Doncic, you probably know me as Luka Magic, but please, call me Luka as that is my proper name. Now, when it comes to what you need to do against me, what the superiors to you do not tell you is the fact that the King of South and West despite being very powerful, are very lenient and after listening to your story as I have super sonic hearing, I understand what you are doing and I really am willing to sacrifice this position as I will be back in this position if I do go down to 0. So go ahead, do all that you need to do. I'll be waiting. Press <W> to go to the West, and silenty evaporate him as even he knows he will come back even more powerful.";
  S.roomid = "TX";
  
  room E;
  E.roomName = "TD Garden";
  E.monsterName = "Jaylen";
  E.monsterHealth = 100;
  E.description = "Hello my fellow competition, my name is Jaylen Brown. But you can call me Jaylen. You may not understand this, but you are standing at the center of the hardwood floors of the TD Garden. This is where legends like Larry Bird, Paul Pierce, Kevin Garnett, and people like me have played. Sadly, your feet have stepped on the glorious yellow floor so I must get rid of you as quickly as possible. Now, before I do that, let me let you know that once I take a stand, I always make sure that what I want is done so your future is quite uncertain. Yea, I understand Boston isn't the best city out there but once you enter this building, all the outside noise, is gone, now its just me VS you. Wait, timeout, what is this green gas in the air and why is it reducing my health by 10 every second. What have you done to me, this is not the basketball way, you understand what I am saying. Press <S> to turn him in to dust. Do not hesitate, this is a part of the journey.";
  E.roomid = "TD";

  room W;
  W.roomName = "Hollywood";
  W.monsterName = "Ronald";
  W.monsterHealth = 100;
  W.description = "You may know me as Metta-World Peace, Ron Artest, but I am his alter-ego Ronald Test, aka Ron Artest but you can call me Ronald. Now I also understand that you were instructed to challenge every King that is present in the compass. But I just want to let you know, that I love what you are doing for your mentals, this journey is for you and you only to find yourself and who you should've become, not who you are today. So therefore, I will be letting you into this next exit with ease and no pressure. Click <Y> to easily go to the last level where you will learn something unexpected.";
  W.roomid = "LA";
  
  string username; 

  // B3 - Added Another Room
  room I;
  I.roomName = "Woo York";
  // B2 - Added An Aditional Monster
  I.monsterName = "Smoko Guwop";
  // A1 - Monster Health that Updates After Combat 
  I.monsterHealth = 100;
  I.description = "The name is Pop Smoke, welcome to Woo York, now let me let you know that this is my city so there are my rules. And who you are talking to is not a real person, he sadly passed away, but you see, what happens is in our world, when you pass away, and you are like me, you become invincible, so therefore I am indestructable, so I have no high ego where I will fight you because my position is not secure. I am and will remain the King of the World, even doe we in Zoo York. And I also need to let you know there is no fight here. Life is simple, and being the higher being I am I have something to tell you.";
  I.roomid = "NY";

  cout << "Welcome to the National Basketball Association Universe. You my good friend, are the main character. Let us get this journey started." << endl; 
  cout << "Before we move forward, I'm not good with names could you let me know what I should call you: " << endl; 

  cin >> username; 
  cout << "We also may need to increase your heigh to fit NBA standards, so what is your height in inches?" << endl;
  cin >> heights;

  while (heights <= 0 || heights >= 100)
  {
    cout << "Come on " << username << " we all know that height is not legal, please try again and stop wasting my time we got places to be!" << endl;
    cin >> heights;
  }
  cout << "Alright, so as you are currently " << height(heights) << " feet tall but moving forward you will be " << heightincreased(heights) << " feet tall so that you can make the league." << endl; 

  cout << "Excellent, nice to meet you " << username << " !" << "From what I have heard of you " << username << ", you were a young prospect in your good old days of playing basketball. Sadly you were never good enough to make the league." << endl; 
  cout << "Give me one sec, I'm getting some comms, they are telling me that you were wronged, your faith in terms of getting in to the league was decided by the overpowerful basketball gods. I understand your frustration " << username << "but what can we do now, spend all that mental energy focusing on the past or facing the present and getting you in to that league." << endl << "Now trust me, this journey will be difficult. We will have to face the King of North, South, East and West, and they are all some good world class athletes but hey, like Dom said, ain't nothing like family am I right?" << endl; 
  cout << "Aight man, lets get this journey started, oh wait, I'm getting some more comms, but from California, they are saying, before we move forward we need to let you know where you are and how you got here. And oh boy, there is someone waiting for us here as well. We can't hear them but they can hear us apparently." << endl; 
  cout << A.roomid << endl;
  cout << A.roomName << endl;
  cout << A.description << endl; 
  cout << "Now that you very much know where we are, my first task is that you and your fellow comrade shall engage in combat with me, the leader, of this very The Sun. " << "Hey " << username << "its me again, from the start, that dude, you remember I am sure. Well something I forgot to tell you is that, every time that you face one of these higher beings. You have to take them down. Depending on the way that you think and choose to do a move. The overall health of the higher being will go down alright. Now let me know. What do we do with this first leader of The Sun, I'm not thinking that any basketball will be effective so I say we do a simple one inch punch. How about that?" << endl << "Press <A> to punch" << endl; 
  char input;
  cin >> input; 

  while (input != 'A')
  {
    cout << "Come on " << username << " I mean it is pretty simple, just press the letter key that is prompted. " << endl; 
    cin >> input; 
  }
  if (input == 'A')
  {
    A.monsterHealth = 0; 
    cout << "Lets go " << username << " we got the monster's health down to " <<
    N.monsterHealth << " now we can move on in the journey. Why are all these dudes so quote on quote powerful, like you basically bodied that dude. Dope stuff " << username << " keep it coming. Let us enter our next challenge, the cold winter's of the North. " << endl << "Press <N> to go to the North" << endl; 
    cin >> input;

    while (input != 'N')
    {
      cout << "Just click the letter N " << username << " we got places to be and people to dominate." << endl; 
      cin >> input; 
    }
    if (input == 'N')
    {
      cout << A.monsterName << " Health: " << A.monsterHealth << endl;

      cout << N.roomid << endl;
      cout << N.roomName << endl;
      cout << N.description << endl; 
      cout << "This dude keeps on talking over and over again, he won't see it coming dunk on him." << endl << "Press <D> to dunk on Fred" << endl;
      // B1 - Combat Abilities that Reduce Monster Health
      cin >> input;
      while (input != 'D')
      {
        cout << "We are losing our chances click D already " << username << "!" << endl; 
        cin >> input;
      }
      if (input == 'D')
      {
        cout << "You really think you are funny right. A simple dunk. Will that do anything to me, heck no. My court vision is unlike anything out there. " << endl << "Alright Fred is getting cocky, but he doesn't realize that our work here is done, just run, his mind can think, but his body is in shock. He might chase us later but I doubt it. Run to the next exit. Quick! << Press <E> to exit to the East" << endl; 
        cin >> input;
        while (input != 'E')
        {
          cout << "We need to run. click E quickly!" << endl;
          cin >> input; 
        }
        if (input == 'E')
        {
          N.monsterHealth = 0;
          cout << N.monsterName << " Health: " << N.monsterHealth  << endl; 

          cout << E.roomid << endl; 
          cout << E.roomName << endl;
          cout << E.description << endl;
          cin >> input; 
          while (input != 'S')
          {
            cout << "The gas will fade away if we do not run quickly. Once you click the correct key his health will go down to zero. Do it quick."
            << endl; 
            cin >> input; 
          }
          if (input == 'S')
          {
            E.monsterHealth = 0;
            cout << E.monsterName << " Health: " << E.monsterHealth << endl; 

            cout << S.roomid << endl;
            cout << S.roomName << endl;
            cout << S.description << endl; 
            cin >> input; 
            while (input != 'W')
            {
              cout << "Take your time, but please press W." << endl;
              cin >> input;
            }
            if (input == 'W')
            {
              S.monsterHealth = 0;
              cout << S.monsterName << " Health: " << S.monsterHealth << endl;

              cout << W.roomid << endl;
              cout << W.roomName << endl;
              cout << W.description << endl;
              cin >> input;
              while (input != 'Y')
              {
                cout << "You know what to do, press Y." << endl;
                cin >> input;
              }
              if (input == 'Y')
              {
                W.monsterHealth = 0;
                cout << W.monsterName << " Health: " << W.monsterHealth << endl;
                cout << I.roomid << endl;
                cout << I.roomName << endl;
                cout << I.description << endl; 
                cout << username << " the sad truth is that all these individuals that you got rid of with just a touch of button wasn't me being lazy as the writer of this very path, but just to tell you how much power you really had. Write out power right now to display your power levels." << endl; 
                int powerlevel = 9000; 
                string power; 
                cin >> power; 
                while (power != "power")
                {
                  cout << "You want to know your power levels or not, write in power. " << endl; 
                  cin >> power;
                }
                if (power == "power")
                {
                  cout << username << " Power Levels = " << powerlevel << endl << "NBA Avergae Power Level = 100" << endl; 
                  cout << "All I am saying is that you were destined to be in this path but the creators of this league feared that you were oh so too powerful therefore not allowing you to go down this journey. That being said, you will automatically be made the starter for the Sacramento Kings at the Point Guard regardless of height as you are that good. I hope you enjoyed this journey but you my friend will go down in history as the greatest of all time. Good bye." << endl; 
                  cout << "Congratulations " << username <<" you have finished the story, click run to play again." << endl; 
                }
              }
            }
          }
        }
      }
    }
  }
  return 0; 
}

double heightincreased (double a)
{
  double heightinfeet = (a+10)/12;
  return heightinfeet;
}

double height (double a)
{
  double heightinfeet = (a)/12;
  return heightinfeet;
}

void programgreeting()
{
  cout << "Hello, my name is Surmeet Bhullar and you are playing the NBA Text Adventure Game. This assignment is due on July 31, 2021." << endl << " " << endl;
}