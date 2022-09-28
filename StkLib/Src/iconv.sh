for i in `find ./ -type f -regextype posix-extended -regex ".*\.(h|cpp)"`
do
#file ${i} | awk -F ', ' '{print $i $2}'
#continue
bak_file=${i}.bak
cp ${i} ${bak_file}
iconv -f GBK -t UTF-8 -c ${bak_file} > ${i}
if [ $? -ne 0 ]; then
    echo "failed: ${i}"
else
    rm -rf ${bak_file}
fi
done
