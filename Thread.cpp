#include<iostream>
#include<thread>

using namespace std;

static bool s_finished = false;

void Dowork()
{
	using  namespace std::literals::chrono_literals;

	cout << "Started thread id : " << this_thread::get_id() << endl;
	while (!s_finished)
	{
		cout << "Working.....\n";
		this_thread::sleep_for(1s);
	}
}

int main()
{
	thread worker(Dowork);

	cin.get();
	s_finished = true;

	worker.join();

	cout << "Finished\n";
	cout<<"End thread id : "<< this_thread::get_id() << endl;

	cin.get();
}