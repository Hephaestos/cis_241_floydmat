s/Sun/Sunday,/g
s/Mon/Monday,/g
s/Tue/Tuesday,/g
s/Wed/Wednesday,/g
s/Thu/Thursday,/g
s/Fri/Friday,/g
s/Sat/Saturday,/g

s/[0-9]{4}\s/&\./g
s/\s\./\./g

s/AM/a\.m\./g
s/PM/p\.m\./g

s/EST/Eastern Standard Time/g
s/CST/Central Standard Time/g
s/MST/Mountain Standard Time/g
s/PST/Pacific Standard Time/g
s/HST/Hawaii Standard Time/g
s/ASKT/Alaska Time/g
s/SST/Samoa Standard Time/g
s/AST/Atlantic Standard Time/g
s/CHST/Chamorro Standard Time/g

s/EDT/Eastern Daylight Time/g
s/CDT/Central Daylight Time/g
s/MDT/Mountain Daylight Time/g
s/PDT/Pacific Daylight Time/g
s/HDT/Hawaii Daylight Time/g
s/SDT/Samoa Daylight Time/g
s/ADT/Atlantic Daylight Time/g
s/CHDT/Chamorro Daylight Time/g
