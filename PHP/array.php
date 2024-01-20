<?php    
$cars = array("ford" => "12000",
"mercedes" => "2500",
"maruti" => " 1500");
// print_r(array_chunk($cars , 2));


// ****************************************************************
// =========================Task 1=====================================

function printNumbers() {
    for ($i = 1; $i <= 10; $i++) {
        echo $i . " ";
    }
}

printNumbers();

// =========================Task 2=====================================

function sum(){
    $j = 0;
    for ($i = 1; $i <= 10; $i++) {
        $j = $j + $i;
    };
    echo "</br>" . "sum of numbers is " . $j . "</br>";
}
sum();


// =========================Task 3=====================================



function factorial() {
    $num = 6;
    $fact = 1;
    for ($x=$num; $x>=1; $x--) {  //x = 6 ,5,4,3,2,1
      $fact = $fact * $x;  
    }
    echo "The factorial of $num is $fact.";
}

factorial()

// ******************************************************


        ?>