#!/usr/bin/env python
# coding: utf-8

# In[13]:


class LoginSystem:
    def __init__(self):
        self.users = {}
        self.logged_users = set()
        self.mapping = {
            "a": "i", "b": "l", "c": "q", "d": "f", "e": "z", "f": "s",
            "g": "a", "h": "g", "i": "e", "j": "p", "k": "w", "l": "o",
            "m": "v", "n": "u", "o": "b", "p": "j", "q": "k", "r": "n",
            "s": "x", "t": "d", "u": "h", "v": "y", "w": "t", "x": "m",
            "y": "r", "z": "c"
        }
        self.username = input("Please enter a username: ")
        self.password = input("Please enter a password: ")

    def encrypt(self, password):
        encrypted = ""
        for char in password:
            if char in self.mapping:
                encrypted += self.mapping[char]
            else:
                encrypted += char
        return encrypted

    def register(self):
        if self.username in self.users:
            print("User already exists.")
        else:
            encrypted_password = self.encrypt(self.password)
            self.users[self.username] = encrypted_password
            print("User registered successfully.")

    def login(self):
        if self.username in self.users:
            encrypted_input_password = self.encrypt(self.password)
            if self.users[self.username] == encrypted_input_password:
                print("User logged in successfully.")
                self.logged_users.add(self.username)
            else:
                print("Password doesn't match.")
        else:
            print("User isn't in the system.")

    def sign_out(self):
        if self.username in self.users:
            if self.username in self.logged_users:
                self.logged_users.remove(self.username)
                print("User signed out successfully.")
            else:
                print("User is not logged in.")
        else:
            print("User is not in the system.")

# Usage example:
login_system = LoginSystem()
login_system.register()
login_system.login()


# In[ ]:




