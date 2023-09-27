--> working with files

-- io.output("myfile.txt")
-- -- if the file doesn't exist, it will create it
-- -- else it will empty the previous contents of the file
-- io.write("hello, world in the file")
-- io.close()

-- io.input("myfile.txt")
-- local file = io.read(5) -- if there are less than 5 characters, then
-- -- it will read all of them
-- print(file)
-- io.close()

-- io.input("myfile.txt")
-- -- local file = io.read("*number")
-- -- but the one above is for when you only want to read the number
-- local file = io.read(5) -- types don't matter to lua
-- print(file + 44)
-- io.close()

-- io.input("myfile.txt")
-- print(io.read("*line"))
-- print(io.read("*line"))
-- io.close()

-- local file = io.open("myfile.txt", "w")
-- local file = io.open("myfile.txt", "a")
-- if file == nil then
-- 	print("File is nil")
-- 	return
-- end
--
-- file:write("My name is sahil")
-- file:close()

local file = io.open("myfile.txt", "r")
if file == nil then
	return
end
print(file:read("*all"))
-- print(file:read("*line")) -- for one line
file:close()
