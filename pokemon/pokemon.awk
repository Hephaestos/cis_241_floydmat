BEGIN {
    FS=","
    types["All"] = "All"
}

function stats(type) {
    if($5 > max_points[type]) {
        max_points[type] = $5
        max_name[type] = $2
    }

    count[type]++
    total[type] += $5
    attack[type] += $6
    defense[type] += $7
    sp_attack[type] += $8
    sp_defense[type] += $9
    speed[type] += $10
}

function printStats(type) {
        print "= ", type, " ="
        if (type=="All"){
            print "The most powerful Pokemon is", max_name[type], "with", max_points[type], "\n"
            print "There are", count[type], "Pokemon"
        } else {
            print "The most powerful", type, "Pokemon is", max_name[type], "with", max_points[type], "\n"
            print "There are", count[type], type, "Pokemon"
        }
        print "Average Total:      ", total[type] / count[type]
        print "Average Attack:     ", attack[type] / count[type]
        print "Average Defense:    ", defense[type] / count[type]
        print "Average SP Attack:  ", sp_attack[type] / count[type]
        print "Average SP Defense: ", sp_defense[type] / count[type]
        print "Average Speed:      ", speed[type] / count[type]
        print "\n"
}

{
    if (NR > 1) {
        types[$3] = $3
        stats($3)
        stats($4)
        stats("All")
    }
}

END {
    print "==== Pokemon Stats ====\n"
    PROCINFO["sorted_in"] = "@val_str_asc"
    for(type in types) {
        printStats(type)
    }
}
