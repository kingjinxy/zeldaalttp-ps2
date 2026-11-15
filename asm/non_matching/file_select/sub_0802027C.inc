	THUMB_FUNC_START sub_0802027C
sub_0802027C: @ 0x0802027C
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #124
	ldrh r0, [r1]
	cmp r0, #0
	beq _08020290
	sub r0, r0, #1
	strh r0, [r1]
	b _08020350
_08020290:
	ldr r2, _08020358  @ =gUnknown_03006A30
	ldr r0, _0802035C  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r3, [r0]
	cmp r3, #0
	beq _08020350
	mov r0, #50
	ldrsh r1, [r3, r0]
	add r0, r4, #0
	add r0, r0, #116
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #120
	ldrh r0, [r0]
	cmp r1, r0
	bhi _08020350
	mov r0, #54
	ldrsh r1, [r3, r0]
	add r0, r4, #0
	add r0, r0, #118
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #122
	ldrh r0, [r0]
	cmp r1, r0
	bhi _08020350
	add r0, r3, #0
	add r0, r0, #80
	add r1, r4, #0
	add r1, r1, #80
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _08020350
	add r0, r3, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _08020350
	ldr r1, _08020360  @ =gUnknown_03000940
	ldrb r0, [r3, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08020350
	str r3, [r4, #100]
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #144
	lsl r0, r0, #10
	str r0, [r4, #16]
	mov r0, #15
	mov r1, #12
	mov r2, #0
	bl sub_0804C8A8
	add r3, r0, #0
	cmp r3, #0
	beq _08020350
	add r0, r4, #0
	add r1, r3, #0
	bl sub_0803D3D0
_08020350:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020358:
	.4byte gUnknown_03006A30
_0802035C:
	.4byte gUnknown_03000E20
_08020360:
	.4byte gUnknown_03000940
	THUMB_FUNC_END sub_0802027C

