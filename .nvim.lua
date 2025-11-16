vim.lsp.enable('clangd')

local final_file = './build/vector_test'
vim.o.makeprg = 'g++ -std=c++23 main.cpp vector.cpp -o ' .. final_file

vim.keymap.set('n', '<leader>rp', function()
    vim.o.splitbelow = true
    vim.cmd.make()
    vim.cmd.split('term://' .. final_file)
    vim.o.splitbelow = false
end)
vim.keymap.set('n', '<leader>rf', function()
    vim.o.splitbelow = true
    vim.cmd.split('term://' .. final_file)
    vim.o.splitbelow = false
end)

