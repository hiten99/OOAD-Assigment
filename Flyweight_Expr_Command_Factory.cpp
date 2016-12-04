#include "Flyweight_Expr_Command_Factory.h"

Flyweight_Expr_Command_Factory::Flyweight_Expr_Command_Factory()
   :add(new Add_Command()),
	sub(new Subtract_Command()),
	div(new Div_Command()),
	mul(new Mul_Command()),
	mod(new Mod_Command()),
	open(new Open_Parenthesis()),
	close(new Closed_Parenthesis())
{

}

Flyweight_Expr_Command_Factory::~Flyweight_Expr_Command_Factory()
{
	delete add;
	delete sub;
	delete div;
	delete mod;
	delete mul;
	delete open;
	delete close;
}

Num_Command * Flyweight_Expr_Command_Factory::create_num_command(int num)
{
	return new Num_Command(num);
}

Add_Command * Flyweight_Expr_Command_Factory::create_add_command()
{
	return this->add;
}

Subtract_Command * Flyweight_Expr_Command_Factory::create_subtract_command()
{
	return this->sub;
}

Div_Command * Flyweight_Expr_Command_Factory::create_div_command()
{
	return this->div;
}

Mul_Command * Flyweight_Expr_Command_Factory::create_mul_command()
{
	return this->mul;
}

Mod_Command * Flyweight_Expr_Command_Factory::create_mod_command()
{
	return this->mod;
}

Open_Parenthesis * Flyweight_Expr_Command_Factory::create_open_parenthesis_command()
{
	return this->open;
}

Closed_Parenthesis * Flyweight_Expr_Command_Factory::create_closed_parenthesis_command()
{
	return this->close;
}