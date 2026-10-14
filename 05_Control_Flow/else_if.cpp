// 1. What is an  statement?else-if
// An  statement lets us check multiple conditions and execute the else-ifblock associated with the first condition that evaluates to .true
// For example, suppose you want to assign grades based on a student's marks:
// - 90 or above → Grade A
// - 80 or above → Grade B
// - 70 or above → Grade C
// - 60 or above → Grade D
// - Below 60 → Grade F
// Checking each possibility with a separate  could execute multiple blocks. An  chain selects only the first matching branch.ifif-else-if

/*Syntax
if (condition1) {
    // Executes if condition1 is true
} else if (condition2) {
    // Executes if condition1 is false
    // and condition2 is true
} else if (condition3) {
    // Executes if the earlier conditions are false
    // and condition3 is true
} else {
    // Executes if no condition is true
}*/