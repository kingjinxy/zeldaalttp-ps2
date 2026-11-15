	THUMB_FUNC_START sub_0802DB24
sub_0802DB24: @ 0x0802DB24
	push {lr}
	bl sub_0802DC2C
	ldr r1, _0802DB60  @ =gUnknown_03000940
	ldr r0, _0802DB64  @ =gUnknown_03000E20
	ldrb r0, [r0, #17]
	mov r2, #3
	and r2, r2, r0
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0802DB84
	ldr r0, _0802DB68  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	cmp r2, r0
	bne _0802DB74
	ldr r0, _0802DB6C  @ =gUnknown_02000000
	ldrb r0, [r0, #1]
	cmp r0, #1
	bne _0802DB78
	ldr r0, _0802DB70  @ =gHeldKeys
	ldrh r1, [r0]
	mov r2, #240
	orr r1, r1, r2
	strh r1, [r0]
	b _0802DB78
_0802DB60:
	.4byte gUnknown_03000940
_0802DB64:
	.4byte gUnknown_03000E20
_0802DB68:
	.4byte gLCDRegisterBuffer
_0802DB6C:
	.4byte gUnknown_02000000
_0802DB70:
	.4byte gHeldKeys
_0802DB74:
	bl sub_0800D65C
_0802DB78:
	ldr r1, _0802DB88  @ =gUnknown_0201EF18
	mov r0, #8
	strb r0, [r1, #2]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0802DB84:
	pop {r0}
	bx r0
_0802DB88:
	.4byte gUnknown_0201EF18
	THUMB_FUNC_END sub_0802DB24

