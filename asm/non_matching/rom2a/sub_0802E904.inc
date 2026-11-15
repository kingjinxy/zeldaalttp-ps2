	THUMB_FUNC_START sub_0802E904
sub_0802E904: @ 0x0802E904
	push {r4,r5,lr}
	ldr r0, _0802E930  @ =gUnknown_02016D60
	ldrb r1, [r0, #11]
	add r4, r0, #0
	cmp r1, #0
	bne _0802E9A0
	ldr r2, _0802E934  @ =gUnknown_03000948
	ldrh r1, [r2]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0802E924
	ldr r1, _0802E938  @ =gUnknown_030004A0
	ldrh r0, [r1, #22]
	add r0, r0, #1
	strh r0, [r1, #22]
_0802E924:
	ldrb r0, [r4, #9]
	cmp r0, #0
	beq _0802E93C
	sub r0, r0, #1
	strb r0, [r4, #9]
	b _0802E9A0
_0802E930:
	.4byte gUnknown_02016D60
_0802E934:
	.4byte gUnknown_03000948
_0802E938:
	.4byte gUnknown_030004A0
_0802E93C:
	ldrh r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0802E9A0
	ldr r5, _0802E970  @ =gUnknown_0842783C
	ldrb r2, [r4, #10]
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r0]
	ldr r0, _0802E974  @ =0x0000FFFF
	cmp r1, r0
	beq _0802E97C
	add r3, r2, #0
	cmp r3, #255
	beq _0802E97C
	ldr r1, _0802E978  @ =gUnknown_030004A0
	add r0, r2, #1
	strb r0, [r4, #10]
	lsl r0, r3, #1
	add r0, r0, r5
	ldrh r0, [r0]
	add r1, r1, #104
	strh r0, [r1]
	b _0802E9A0
	.byte 0x00
	.byte 0x00
_0802E970:
	.4byte gUnknown_0842783C
_0802E974:
	.4byte 0x0000FFFF
_0802E978:
	.4byte gUnknown_030004A0
_0802E97C:
	ldr r2, _0802E9A8  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _0802E9AC  @ =0x0000FDFF
	and r0, r0, r1
	mov r3, #128
	lsl r3, r3, #3
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r1, r2, #0
	add r1, r1, #102
	ldr r0, _0802E9B0  @ =0x00003C64
	strh r0, [r1]
	add r2, r2, #104
	ldr r0, _0802E9B4  @ =0x00000808
	strh r0, [r2]
	mov r0, #1
	strb r0, [r4, #11]
_0802E9A0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802E9A8:
	.4byte gUnknown_030004A0
_0802E9AC:
	.4byte 0x0000FDFF
_0802E9B0:
	.4byte 0x00003C64
_0802E9B4:
	.4byte 0x00000808
	THUMB_FUNC_END sub_0802E904

