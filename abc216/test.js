users.forEach(userItems => {
  const row = document.createElement('tr');
  row.classList.add('userListData');

  const userItemList = [
    'name', 'gender', 'insurance', 'tell'
  ];

  userItemList.forEach((itemName) => {
    const td = document.createElement('td');
    td.textContent = userItems[itemName];
    row.appendChild(td);
  });

  const td = document.createElement('td')
  const detailLink = document.createElement('a');
  detailLink.textContent = '詳細を表示';
  detailLink.setAttribute('href', `/userDetail/${userItems.userInfomationId}`);
  detailLink.classList.add('btn');
  detailLink.classList.add('btn-link');
  td.appendChild(detailLink);
  row.appendChild(td);

  userList.appendChild(row);
});
