function main(input) {
    //Enter your code here
    var inputs = input.split("\n");
    var noOfCases = parseInt(inputs[0]);
    var pos = 1;
    var cases = []
    for(var i=0; i< noOfCases; i++){
        var testCase = inputs[pos].split(" ");
        pos++;
        var noOffriends = parseInt(testCase[0]);
        var totalAmount = parseInt(testCase[1]);
        var giftAmounts = [];
        for(var j = pos++; j < (pos + noOffriends-1); j++){ giftAmounts.push(parseInt(inputs[j])); }
        pos = j + 1;
        cases.push([giftAmounts, totalAmount]);
    }
    cases.forEach(function(eachCase){
        if(canInvite(eachCase[0], eachCase[1])){
            console.log("YES")
        }
    });
}

function canInvite(array, amount){
    for(var i=0;i< array.length; i++){
        console.log(temp);
        var temp = 0;
        for(var j=i;j< array.length; j++){
            temp += array[j];
            if(temp > amount) { break; }
            else if(temp === amount) { return true; }
        }
    }
    return false;
}

process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";

process.stdin.on("data", function (input) {
    stdin_input += input;
});

process.stdin.on("end", function () {
   main(stdin_input);
});

