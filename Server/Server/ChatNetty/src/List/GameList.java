package List;

import java.util.Vector;

public class GameList<E> extends Vector<E>
{
	public GameList()
	{
		super();
	}

	public GameList(int initialCapacity)
	{
		super(initialCapacity);
	}

	public E remove(int index)
	{
		if (index < 0 || index >= size())
		{
			return null;
		}
		return super.remove(index);
	}
}
