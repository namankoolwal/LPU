<?php  

function addFive($num)
{
$num += 15;
}
function addSix(&$num)
{
$num += 36;
}
$actualnum = 16;
addFive($actualnum);
echo "The actual value is: $actualnum <br/>";
addSix($actualnum);
echo "The actual value is: $actualnum <br/>";



function StudentRecord($name,$age,$course) {
echo "The student $name is $age years old and is taking $course course <br/>";
}
StudentRecord("Taran",35, "Data Structures");
StudentRecord("Karan",37, "Data Communications");
StudentRecord("Gurfateh",40, "Wireless Networks");

?>