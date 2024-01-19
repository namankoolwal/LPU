<?php    
$cars = array("ford" => "12000",
"mercedes" => "2500",
"maruti" => " 1500");
print_r(array_chunk($cars , 2));


// ****************************************************************


function printNumbers() {
    for ($i = 1; $i <= 10; $i++) {
        echo $i . " ";
    }
}

printNumbers();


// ******************************************************

function sum($num1 , $num2){
   echo "</br>" . "sum of numbers is " . $num1 + $num2;
}

sum(10 , 20)
        ?>