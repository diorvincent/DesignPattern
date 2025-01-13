// Interpreter.cpp: 定义应用程序的入口点。
//

#include "Interpreter.h"

using namespace std;

int main()
{
	cout << "This is interpret design pattern demo1." << endl;

	Context* context = new Context();
	vector<AbstractExpression*> express;
	express.push_back(new Expression());
	express.push_back(new NonterminalExpression());
	express.push_back(new NonterminalExpression());
	express.push_back(new Expression());

	vector<AbstractExpression*>::iterator it = express.begin();
	while (it != express.end())
	{
		(*it)->Interpret(context);
		it++;
	}

	return 0;
}
