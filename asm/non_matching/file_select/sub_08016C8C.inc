	THUMB_FUNC_START sub_08016C8C
sub_08016C8C: @ 0x08016C8C
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #108
	ldrh r0, [r1]
	cmp r0, #0
	beq _08016C9E
	add r0, r0, #1
	strh r0, [r1]
_08016C9E:
	ldrb r3, [r4, #23]
	sub r2, r3, #1
	strb r2, [r4, #23]
	ldr r1, _08016CC4  @ =gUnknown_03005E10
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #243
	and r0, r0, r1
	cmp r0, #0
	beq _08016CCE
	lsl r0, r2, #24
	lsr r0, r0, #24
	cmp r0, #7
	bhi _08016CC8
	mov r0, #0
	b _08016CCC
	.byte 0x00
	.byte 0x00
_08016CC4:
	.4byte gUnknown_03005E10
_08016CC8:
	add r0, r3, #0
	sub r0, r0, #9
_08016CCC:
	strb r0, [r4, #23]
_08016CCE:
	ldr r1, [r4, #88]
	ldrb r0, [r1, #20]
	cmp r0, #2
	beq _08016D4C
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08016D4C
	ldr r3, _08016D40  @ =gUnknown_03006A30
	ldrb r0, [r1, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r3
	ldrb r2, [r1, #26]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1, #26]
	ldr r0, [r4, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r3
	add r0, r0, #52
	mov r1, #1
	strb r1, [r0]
	ldr r0, [r4, #88]
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r2, _08016D44  @ =gUnknown_0813921C
	ldr r0, _08016D48  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #28
	and r1, r1, r0
	lsr r1, r1, #1
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r4, #50]
	add r0, r0, r3
	strh r0, [r4, #50]
	add r1, r1, #1
	add r1, r1, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	b _08016DAA
_08016D40:
	.4byte gUnknown_03006A30
_08016D44:
	.4byte gUnknown_0813921C
_08016D48:
	.4byte gUnknown_03000E20
_08016D4C:
	ldr r3, _08016DB0  @ =gUnknown_03006A30
	ldrb r0, [r4, #11]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r3
	ldrb r0, [r1, #2]
	cmp r0, #0
	bne _08016DAA
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	ldr r0, [r4, #88]
	add r0, r0, #42
	ldrb r1, [r0]
	mov r0, #6
	and r0, r0, r1
	mov r1, #4
	eor r0, r0, r1
	lsl r0, r0, #2
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r0, [r4, #12]
	add r0, r0, #64
	str r0, [r4, #12]
	mov r0, #224
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r1, r1, #18
	mov r0, #220
	strb r0, [r1]
	add r1, r1, #31
	mov r2, #0
	ldr r0, _08016DB4  @ =0x000021FF
	strh r0, [r1]
	ldr r0, [r4, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r3
	strb r2, [r0, #26]
_08016DAA:
	pop {r4}
	pop {r0}
	bx r0
_08016DB0:
	.4byte gUnknown_03006A30
_08016DB4:
	.4byte 0x000021FF
	THUMB_FUNC_END sub_08016C8C

