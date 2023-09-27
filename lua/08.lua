print("Hello\nWorld")

print([[Hello
World]])

print("sahil\tgautam")
print("sahil", "gautam")
print("printing a backslash \\")

local test = "SaHiL"
print(string.lower(test))
print(string.upper(test))
print(string.len(test))
print(string.sub(test, 0, 2))
print(string.char(65))
print(string.byte("A"))
print(string.rep("sahil", 4, "....")) -- string, timesToRepeate, seperator

-- formatting a string
print(string.format("Pi: %.2f\nMy age: %i", math.pi, 2, math.pi, 200))
local str = "Hello world"
print(string.find(str, "orl"))
print(string.match(str, "orl")) -- returns the same string if it finds it, else nil
print(string.gsub(str, "o", "0"))
