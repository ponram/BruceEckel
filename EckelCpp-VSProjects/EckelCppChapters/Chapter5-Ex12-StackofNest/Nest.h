class Nest
{
public:
	void Display();
	class Hen
	{
	public:
		friend Nest;
		class Egg
		{
		public:
			friend Hen;
		private:
			void Display();			
		}e;
	private:
		void Display();		
	}h;
};