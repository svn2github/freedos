@echo off
del lastmake.mk
del CONTEXT.H_C
del CONTEXT.INC
del STRINGS.H
del strings\strings.h
del strings\strings.err
del strings\strings.dat
del strings\strings.log
del criter\criter
del criter\criter1
del criter\context.def
del criter\context.inc
del criter\context.h_c
del command.com
del shell\command.exe
del shell\command.map
del tools\*.icd
del tools\*.exe
del tools\*.map
del tools\*.com
del utils\*.exe
del utils\*.map
for %%a in (cmd lib shell strings criter tools utils) do del %%a\*.obj
for %%a in (cmd lib shell strings criter tools utils) do del %%a\*.cfg
for %%a in (cmd lib strings) do del %%a\*.lib
for %%a in (cmd lib strings) do del %%a\*.lst
for %%a in (cmd lib strings) do del %%a\*.bak
