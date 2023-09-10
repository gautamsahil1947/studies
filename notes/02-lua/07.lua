local str = "Hello, world1" -- even single quotes work
local str1 = "c"
local str2 = [[

Multy line string
    as it is
     .  
]]

print(str)
print(type(str))
print(type(str1)) -- there is no such thing as char in lua
print(str2)

-- printing the lengths of the strings
print(#str)
print(#str1)
print(#str2)

print(#"sahil")
local len = #"length of string"
print(len)

local x = 22
local y = tostring(x)
print(type(x), type(y))
