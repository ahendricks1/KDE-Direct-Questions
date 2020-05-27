
function maxContSum(array) {

	var largest_sum = 0;

	for(i = 0; i < array.length; i++) {

		var start_pos = i;
		var end_pos = i;
		var cur_sum = array[i];

		for(j = i + 1; j < array.length; j++) {
	
			cur_sum += array[j];

			if(cur_sum > largest_sum) {

				largest_sum = cur_sum;
			}
		}

	}

	console.log(largest_sum)

}

var sample_array = [0, -3, 2, 1, 4, 5, 9, -3, 2]

maxContSum(sample_array);