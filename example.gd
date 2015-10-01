extends ResourceBar

func _ready():
	# Each property can be set from code.
	self.set_max(200)
	self.set_min(50)
	self.set_current(150)
	# The methods can be called without self,
	# but I think using it makes it clearer.
	set_max(250)

func _process(delta):
	# Resource can be increased/decreased like so
	self.decrease(10)
	# And all properties also have getters
	print("Current Health: ", self.get_current())
	self.increase(5)