inputFile=$1
path=$2 # path to jdk root
while IFS= read -r line
do
  echo $line
  find $path/src/hotspot/ -type f -exec sed -i "s/"$line"\b/"$line"_WRAPPER/g" {} \;
done < "$inputFile"

