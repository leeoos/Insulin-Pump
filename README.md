# Insulin Pump Simulator
<p>An insulin pump is a medical system that simulates the operation of the pancreas. The software controlling this system is an embedded system, which
collects information from a sensor and controls a pump that delivers a controlled dose of insulin to a user. People who suffer from diabetes use the system.</p>

<h2>Goals of the project</h2>
<p>The problem with this treatment is that the level of insulin required does not just depend on the blood glucose level but also on the time of the last insulin injection. The goal of the project was to buid a system able to simulate the job of a real insulin pump on an arbitrary numbers of <i>in-silico<i> patients.</p>

<h2>What is inside Prj/Models</h2>
<h3>The main files inside Models are Modelica files and tow python scripts:</h3> 
<ul>
  <li> <i> fake_patient.mo:</i> </li>
  <li> <i> pump.mo:</i> </li>
  <li> <i> mealgen.mo:</i> </li>
  <li> <i> rameal.mo:</i> </li>
  <li> <i> monitor_pump.mo:</i> </li>
  <li> <i> monitor_hipogli.mo:</i> </li>
  <li> <i> monitor_average.mo:</i> </li>
  <li> <i> connectors.mo:</i> </li>
  <li> <i> System.mo:</i> </li>
  <li> <i> run.mos:</i> </li>
  <li> <i> verify.py:</i> </li>
  <li> <i> synth.py:</i> </li> 
</ul>
<h3>The other files are ...</h3>
<ul>
  <li> <i> run.sh:</i> </li>
  <li> <i> clean.sh:</i> </li>
  <li> <i> color.py:</i> </li>
  <li> <i> color.pyc:</i> </li>
</ul>

<h2>How to Run the code</h2>
to run a single simulation:
<code>omc run.mos</code> 
to run a single simuklation and clean the files autogenerated by Modelica:
<code>./run.sh</code> 


