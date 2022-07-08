class SkillsContainer
{
	protected ref map<int, float> m_values;
	
	void SkillsContainer()
	{

	}
	
	void ~SkillsContainer()
	{
		if (m_values)
		{
			delete m_values;
		}
	}
	
	float GetValue(int id)
	{
		if (m_values.Contains(id))
		{
			return m_values.Get(id);
		}
		
		return 0;
	}
	
	void SetValue(int id, float value)
	{
		value = Math.Clamp(value, GetMin(id), GetMax(id));
		
		if (m_values.Contains(id))
		{
			m_values.Set(id, value);
		}
		else
		{
			m_values.Insert(id, value);
		}
	}
	
	void AddValue(int id, float value)
	{
		SetValue(id, GetValue(id) + value);
	}
	
	float GetMin(int id)
	{
		if (id == SyberiaSkillType.SYBSKILL_HUMANITY)
		{
			return -100;
		}
		
		return 0;
	}
	
	float GetMax(int id)
	{
		return 100;
	}
	
	float GetTotalScore()
	{
		float result = 0;
		foreach (int id, float val : m_values)
		{
			result = result + val;
		}
		
		return result;
	}
	
	static ref SkillsContainer Create()
	{
		ref SkillsContainer result = new SkillsContainer;
		result.m_values = new map<int, float>;		
		return result;
	}
};