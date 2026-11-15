	THUMB_FUNC_START sub_08025C78
sub_08025C78: @ 0x08025C78
	push {r4,lr}
	add r4, r0, #0
	ldr r2, [r4, #84]
	ldrb r1, [r2, #24]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08025CD0
	add r0, r2, #0
	add r0, r0, #42
	ldrb r0, [r0]
	sub r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	lsl r0, r0, #3
	add r2, r4, #0
	add r2, r2, #43
	ldrb r1, [r2]
	cmp r0, r1
	bne _08025CD0
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r0, [r2]
	sub r0, r0, #8
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #224
	lsl r0, r0, #3
	str r0, [r4, #12]
	ldr r0, [r4, #84]
	ldrh r1, [r0, #50]
	add r0, r4, #0
	add r0, r0, #120
	strh r1, [r0]
	ldr r0, [r4, #84]
	ldrh r0, [r0, #54]
	add r1, r4, #0
	add r1, r1, #122
	strh r0, [r1]
	add r0, r4, #0
	bl sub_0802614C
	b _08025CE4
_08025CD0:
	add r0, r4, #0
	bl sub_0802614C
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	sub r1, r1, #1
	mov r2, #31
	and r1, r1, r2
	strb r1, [r0]
_08025CE4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025C78

	.byte 0x00
	.byte 0x00
