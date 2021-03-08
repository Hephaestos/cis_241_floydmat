s/Sun/Sunday,/g
s/Mon/Monday,/g
s/Tue/Tuesday,/g
s/Wed/Wednesday,/g
s/Thu/Thursday,/g
s/Fri/Friday,/g
s/Sat/Saturday,/g

s/Jan/January/g
s/Feb/February/g
s/Mar/March/g
s/Apr/April/g
s/Jun/June/g
s/Jul/July/g
s/Aug/August/g
s/Sep/September/g
s/Oct/October/g
s/Nov/November/g
s/Dec/December/g

s/[0-9]{4}\s/&\./g
s/\s\./\./g

s/AM/a\.m\./g
s/PM/p\.m\./g

s/EST/Eastern Standard/g
s/CST/Central Standard/g
s/MST/Mountain Standard/g
s/PST/Pacific Standard/g
s/HST/Hawaii Standard/g
s/ASKT/Alaska/g
s/SST/Samoa Standard/g
s/AST/Atlantic Standard/g
s/CHST/Chamorro Standard/g

s/EDT/Eastern Daylight/g
s/CDT/Central Daylight/g
s/MDT/Mountain Daylight/g
s/PDT/Pacific Daylight/g
s/HDT/Hawaii Daylight/g
s/SDT/Samoa Daylight/g
s/ADT/Atlantic Daylight/g
s/CHDT/Chamorro Daylight/g
