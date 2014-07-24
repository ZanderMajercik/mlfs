struct mlfs_inode{
  file id no
  uid
  gid
  1st file block
  nlink
  ctime
  mtime
  atime
  pointers to pages[]
}

struct event_descriptor{
  event type
  file ID number
  inode address (or block address if 1st data)
  if opening new file: 
  struct {
    inode
    directory entry
  }
}
