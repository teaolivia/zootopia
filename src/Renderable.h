// Pembuat :
// Mahesa Gandakusuma - 13513091

using namespace std;

class Renderable {
  public:
  	Renderable();
  	~Renderable();

  void printMatriks();

	virtual void Render() = 0;
  

  private:
};