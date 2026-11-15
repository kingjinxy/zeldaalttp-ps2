	THUMB_FUNC_START sub_0802D820
sub_0802D820: @ 0x0802D820
	push {lr}
	ldr r1, _0802D848  @ =gUnknown_03000420
	ldrb r0, [r1, #12]
	cmp r0, #0
	beq _0802D844
	ldr r0, _0802D84C  @ =0x06015D00
	ldr r3, _0802D850  @ =0x03000030
	ldr r2, _0802D854  @ =gUnknown_08427768
	ldrb r1, [r1, #12]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r2, [r1]
	ldr r1, [r3]
	ldr r2, [r2]
	add r1, r1, r2
	mov r2, #128
	bl 0x080009F4
_0802D844:
	pop {r0}
	bx r0
_0802D848:
	.4byte gUnknown_03000420
_0802D84C:
	.4byte 0x06015D00
_0802D850:
	.4byte 0x03000030
_0802D854:
	.4byte gUnknown_08427768
	THUMB_FUNC_END sub_0802D820

