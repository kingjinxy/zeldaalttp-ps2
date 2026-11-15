	THUMB_FUNC_START sub_08021154
sub_08021154: @ 0x08021154
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021188
	ldr r2, _08021184  @ =gUnknown_03006A30
	ldrb r1, [r4, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r0, r2
	ldrh r1, [r2, #54]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08021188
	ldrb r0, [r2, #5]
	cmp r0, #1
	beq _08021188
	mov r0, #1
	b _0802118A
_08021184:
	.4byte gUnknown_03006A30
_08021188:
	mov r0, #0
_0802118A:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08021154

