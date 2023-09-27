-- Scope : local and global

-- To define a global var, just write the variable name
GlobalVar = 30
globalVar = 40
print(GlobalVar, globalVar)

-- explicitly golbal scope variable
_G.Hello = "Hello, There"
print(Hello)

print("-----------------")

-- using type function
x = false
print(type(x))
x = "sahil"
print(type(x))
x = 44
print(type(x))
x = nil
print(type(x))
