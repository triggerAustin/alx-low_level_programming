pointers to functions

syntax:
	 [return type](*[fn name])([parameters]) = [name of function]
							{can include & or not}

calling as in:
		[fn name]([parameter list]);
	{can have * or not}

we can also have an array of pointers to fns:
	[return type](*[array name[index]])([paramteres]) = {functions}

calling as in:
		[*array name[index]]([parameters]);

A function that recieves a function as a parameter and calls that function:
		[return type](*fn name)();

call as in:
	[return type](*fn name)()
	{
		passed fn();
	}
