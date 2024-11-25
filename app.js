// Fetch all crops
async function fetchCrops() {
  const cropList = document.getElementById('crop-list');
  cropList.innerHTML = 'Loading crops...';

  try {
    const response = await fetch('http://localhost:3001/crops');
    const crops = await response.json();

    cropList.innerHTML = '';
    crops.forEach((crop) => {
      const li = document.createElement('li');
      li.innerHTML = `
        <h3>${crop.crop_name}</h3>
        <p>Farmer: ${crop.farmer_name}</p>
        <p>Planting Date: ${new Date(crop.planting_date).toLocaleDateString()}</p>
        <p>Harvest Date: ${new Date(crop.harvest_date).toLocaleDateString()}</p>
      `;
      cropList.appendChild(li);
    });
  } catch (error) {
    console.error('Error fetching crops:', error);
    cropList.innerHTML = 'Failed to load crops.';
  }
}

// Add a new crop
document.getElementById('add-crop-btn').addEventListener('click', async () => {
  const farmerName = document.getElementById('farmer-name').value;
  const cropName = document.getElementById('crop-name').value;
  const plantingDate = document.getElementById('planting-date').value;
  const harvestDate = document.getElementById('harvest-date').value;

  if (!farmerName || !cropName || !plantingDate || !harvestDate) {
    alert('All fields are required.');
    return;
  }

  try {
    const response = await fetch('http://localhost:3001/crops/add', {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        farmer_name: farmerName,
        crop_name: cropName,
        planting_date: plantingDate,
        harvest_date: harvestDate,
      }),
    });

    if (response.ok) {
      alert('Crop added successfully!');
      document.getElementById('farmer-name').value = '';
      document.getElementById('crop-name').value = '';
      document.getElementById('planting-date').value = '';
      document.getElementById('harvest-date').value = '';
      fetchCrops(); // Reload crops
    } else {
      throw new Error('Failed to add crop');
    }
  } catch (error) {
    console.error('Error adding crop:', error);
    alert('Failed to add crop.');
  }
});

// Load crops on page load
fetchCrops();
// Fetch all financial records
async function fetchFinancialRecords() {
  const financialList = document.getElementById('financial-list');
  financialList.innerHTML = 'Loading financial records...';

  try {
    const response = await fetch('http://localhost:3001/financial');
    const records = await response.json();

    financialList.innerHTML = '';
    records.forEach((record) => {
      const li = document.createElement('li');
      li.innerHTML = `
        <h3>${record.crop_name}</h3>
        <p>Farmer: ${record.farmer_name}</p>
        <p>Cost: $${record.cost.toFixed(2)}</p>
        <p>Revenue: $${record.revenue.toFixed(2)}</p>
        <p>Profit: $${record.profit.toFixed(2)}</p>
      `;
      financialList.appendChild(li);
    });
  } catch (error) {
    console.error('Error fetching financial records:', error);
    financialList.innerHTML = 'Failed to load financial records.';
  }
}

// Add a new financial record
document.getElementById('add-financial-btn').addEventListener('click', async () => {
  const farmerName = document.getElementById('financial-farmer-name').value;
  const cropName = document.getElementById('financial-crop-name').value;
  const cost = document.getElementById('financial-cost').value;
  const revenue = document.getElementById('financial-revenue').value;

  if (!farmerName || !cropName || !cost || !revenue) {
    alert('All fields are required.');
    return;
  }

  try {
    const response = await fetch('http://localhost:3001/financial/add', {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        farmer_name: farmerName,
        crop_name: cropName,
        cost: parseFloat(cost),
        revenue: parseFloat(revenue),
      }),
    });

    if (response.ok) {
      alert('Financial record added successfully!');
      document.getElementById('financial-farmer-name').value = '';
      document.getElementById('financial-crop-name').value = '';
      document.getElementById('financial-cost').value = '';
      document.getElementById('financial-revenue').value = '';
      fetchFinancialRecords(); // Reload financial records
    } else {
      throw new Error('Failed to add financial record');
    }
  } catch (error) {
    console.error('Error adding financial record:', error);
    alert('Failed to add financial record.');
  }
});

// Load financial records on page load
fetchFinancialRecords();
