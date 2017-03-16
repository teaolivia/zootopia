using namespace std;

class Renderable {
  public :
  Renderable();
  ~Renderable();

  void printMatriks();

	virtual void render();

  private:
};