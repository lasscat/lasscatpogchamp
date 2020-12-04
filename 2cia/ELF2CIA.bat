@echo off
makerom -f cia -o myproject.cia -rsf app.rsf -target t -exefslogo -elf myproject.elf -icon icon.smdh -banner banner.bin
echo Finished! 3DS and CIA have been built!
pause