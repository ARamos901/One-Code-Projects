#!/usr/bin/env python
# coding: utf-8

# In[2]:


import random

class Boxer:
    playerlist=[]
    def __init__(self, name, hp, dmg, quick):
        self.name = name
        self.hp = hp
        self.dmg = dmg
        self.quick = quick
        Boxer.playerlist.append(self.name)

    @staticmethod
    def search(name):
      for i in range(len(Boxer.playerlist)-1):
        if Boxer.playerlist[i].lower()== name.lower():
          return True
      return False

    '''@staticmethod
    def show():
        string='['
        for element in Boxer.playerlist:
          string+=element
          string+=','
        string+=']'
        print(string)'''

    def attack(self, opponent):
        damage = random.randint(0, self.dmg)
        dodge_chance = random.randint(0, self.quick)
        if dodge_chance <= opponent.quick:
            print(f"{opponent.name} dodged the attack!")
        else:
            opponent.hp -= damage
            print(f"{self.name} attacked {opponent.name} for {damage} damage!")

ray = Boxer("Ray Stevens", 255, 30, 30)
frank = Boxer("Frank Rodgers", 200, 70, 40)
jay = Boxer("Jay Neil", 170, 40, 70)
issac = Boxer("Issac Xaiver", 200, 55, 55)

'''print(Boxer.playerlist)
Boxer.show()'''

while True:
    user_boxer = input("Please select the Boxer you would like to play as: ")
#it works if you input "ray stevens"
    if Boxer.search(user_boxer)==True:
        print(f"Okay, you have chosen {user_boxer} as your boxer.")
        next # Exit the loop since a valid boxer is chosen
    else:
        print("Sorry, that is not a Boxer. Please choose again.")
        continue


    cpu_boxer = input("Please select the Boxer you would like to face: ")

    if cpu_boxer=="q":
        break

    cpu_boxer = next((boxer for boxer in playerlist if boxer.name == cpu_boxer_name), None)
    if not cpu_boxer:
        print("Sorry, that is not a Boxer. Please choose again.")
        continue

    if cpu_boxer == user_boxer:
        print("You cannot face the same boxer you are playing as. Please choose another boxer.")
    else:
        # Logic to start the fight between user_boxer and cpu_boxer
        print(f"You selected {user_boxer.name} as your boxer.")
        print(f"You selected {cpu_boxer.name} as your opponent.")
        break  # Exit the loop since both boxers are selected

    round(user_boxer, cpu_boxer)

def round(boxer1, boxer2):
    print(f"{boxer1.name} vs {boxer2.name}")
    attacker = random.choice([boxer1, boxer2])
    defender = boxer2 if attacker == boxer1 else boxer1

    attacker.attack(defender)
    print(f"{defender.name} has {defender.hp} health remaining.\n")


# In[ ]:




