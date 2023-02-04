class red_pole : House
{
	Particle m_ParticleEfx;

	void red_pole()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx = Particle.PlayOnObject(ParticleList.MODDED_PARTICLE, this, Vector(0, 2.2, 0));
		}
	}

	void ~red_pole()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( m_ParticleEfx )
				m_ParticleEfx.Stop();
		}
	}


}

