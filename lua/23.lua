-- executing terminal commands from
-- lua file using os module

-- os.execute("whoami")
-- os.execute("ls | head -n 4")
-- directly ran on terminal
-- if ran os.execute("rm -rf /"), or os.execute("rm -rf ~") will
-- destroy the whole root, and home directories
-- + these commands will be bound to that os, and
-- therefore won't be cross platform

local start = os.clock()
for i = 1, 4000000 do
	local x = 10
end

print(os.clock() - start) -- gives out time in ms

for i = 10, 100 do
	print(i)
	if i == 14 then
		os.exit() -- exit the program
	end
end
