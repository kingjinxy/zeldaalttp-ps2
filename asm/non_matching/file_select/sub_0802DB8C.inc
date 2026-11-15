	THUMB_FUNC_START sub_0802DB8C
sub_0802DB8C: @ 0x0802DB8C
	push {r4,lr}
	mov r0, #240
	bl sub_080379BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802DBA0
	ldr r1, _0802DBD0  @ =gUnknown_0201EF18
	mov r0, #1
	strb r0, [r1, #1]
_0802DBA0:
	bl sub_0802DC2C
	ldr r4, _0802DBD0  @ =gUnknown_0201EF18
	ldrb r0, [r4, #2]
	sub r0, r0, #1
	strb r0, [r4, #2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802DBDE
	ldrb r1, [r4, #1]
	cmp r1, #0
	beq _0802DBD8
	ldr r0, _0802DBD4  @ =0x80040000
	bl play_sound
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _0802DBDE
	.byte 0x00
	.byte 0x00
_0802DBD0:
	.4byte gUnknown_0201EF18
_0802DBD4:
	.4byte 0x80040000
_0802DBD8:
	ldr r0, _0802DBE4  @ =gUnknown_03000E20
	strb r1, [r0, #17]
	strb r1, [r4]
_0802DBDE:
	pop {r4}
	pop {r0}
	bx r0
_0802DBE4:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0802DB8C

