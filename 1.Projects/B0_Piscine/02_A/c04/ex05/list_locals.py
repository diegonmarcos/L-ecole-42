print("Hello")

import lldb

def list_local_variables(debugger, command, result, internal_dict):
  """Lists local variables in the current frame."""
  target = debugger.GetSelectedTarget()
  process = target.GetProcess()
  thread = process.GetSelectedThread()
  frame = thread.GetSelectedFrame()

  for variable in frame.GetVariables(True, True, True, False):  # Get all local variables
    print(variable.GetName())

# And the initialization code to add your command
def __lldb_init_module(debugger, internal_dict):
  debugger.HandleCommand('command script add -f list_local_variables list_locals')