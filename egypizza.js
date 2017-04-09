var count1 = 0;
var	count2 = 0;
var	count3 = 0;
var	sum = 1;
var	extra;
var total_friends = readline();

function calculate_pizza_required() {

	for (var i = 0; i < total_friends; i++) {

		var pizza_slice = readline();
		if(pizza_slice === '1/2') {

			count1++;
		} else if (pizza_slice === '1/4') {
			count2++;
		} else {
			count3++;
		}
	}
	sum += count3 + Math.ceil(count1 / 2);
	extra = count3 + (count1%2 == 1 ? 2 : 0);
	
	if (count2 >= extra) {
		count2 -= extra;
		sum += Math.ceil(count2 / 4);
	}

	print(sum);
}
calculate_pizza_required();