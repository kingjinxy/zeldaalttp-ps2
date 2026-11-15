	THUMB_FUNC_START sub_0803A544
sub_0803A544: @ 0x0803A544
	push {r7,lr}
	mov r7, sp
	ldr r0, _0803A5D0  @ =gUnknown_03005060
	mov r1, #144
	lsl r1, r1, #4
	bl zero_memory
	ldr r0, _0803A5D4  @ =gUnknown_02016D50
	ldr r1, _0803A5D0  @ =gUnknown_03005060
	str r1, [r0]
	ldr r0, _0803A5D0  @ =gUnknown_03005060
	ldr r1, _0803A5D0  @ =gUnknown_03005060
	str r1, [r0]
	ldr r0, _0803A5D0  @ =gUnknown_03005060
	ldr r1, _0803A5D0  @ =gUnknown_03005060
	str r1, [r0, #4]
	ldr r0, _0803A5D0  @ =gUnknown_03005060
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	ldr r2, [r1, #40]
	str r2, [r0, #8]
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	cmp r0, #0
	beq _0803A5CA
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r2, [r1]
	add r0, r2, #0
	bl sub_080005F0
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	cmp r0, #0
	beq _0803A5CA
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, [r1]
	add r0, r2, #0
	bl sub_080005F0
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	cmp r0, #0
	beq _0803A5CA
	ldr r1, _0803A5D8  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, [r1]
	add r0, r2, #0
	bl sub_080005F0
_0803A5CA:
	pop {r7}
	pop {r0}
	bx r0
_0803A5D0:
	.4byte gUnknown_03005060
_0803A5D4:
	.4byte gUnknown_02016D50
_0803A5D8:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0803A544

