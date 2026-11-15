	THUMB_FUNC_START sub_0801B1A0
sub_0801B1A0: @ 0x0801B1A0
	add r3, r0, #0
	add r2, r1, #0
	cmp r2, #0
	beq _0801B1FC
	ldr r1, _0801B1F8  @ =gUnknown_03000940
	ldrb r0, [r2, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0801B1FC
	add r0, r2, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801B1FC
	mov r0, #50
	ldrsh r1, [r2, r0]
	add r0, r3, #0
	add r0, r0, #120
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r3, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r1, r0
	bhi _0801B1FC
	mov r1, #54
	ldrsh r0, [r2, r1]
	add r1, r3, #0
	add r1, r1, #122
	ldrh r1, [r1]
	sub r0, r0, r1
	add r1, r3, #0
	add r1, r1, #126
	ldrh r1, [r1]
	cmp r0, r1
	bhi _0801B1FC
	mov r0, #1
	b _0801B1FE
	.byte 0x00
	.byte 0x00
_0801B1F8:
	.4byte gUnknown_03000940
_0801B1FC:
	mov r0, #0
_0801B1FE:
	bx lr
	THUMB_FUNC_END sub_0801B1A0

