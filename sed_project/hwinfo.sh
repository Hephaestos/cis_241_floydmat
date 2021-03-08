lscpu | sed -n '/^CPU(s):/ p'
echo =======
echo Memory:
echo =======
echo "               total             used               free                shared     buff/cache          available"
free -h | sed -n 's/Gi/ Gigabyte/g;/^Mem/ p'
echo Disks:
echo =======
df -h | sed -nE '/^\S+\s+[0-9]+\.?[0-9]+T/p'
echo Date:
echo =======
date | sed -Ef date_conv.sed
