	THUMB_FUNC_START sub_080199F4
sub_080199F4: @ 0x080199F4
	push {r4,lr}
	add r4, r0, #0
	add r3, r4, #0
	add r3, r3, #124
	ldrb r0, [r3]
	cmp r0, #0
	beq _08019A3A
	add r0, r4, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #150
	bne _08019A3A
	add r2, r4, #0
	add r2, r2, #61
	mov r1, #0
	mov r0, #60
	strb r0, [r2]
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	add r2, r2, #66
	mov r0, #7
	strb r0, [r2]
	mov r0, #128
	lsl r0, r0, #8
	str r0, [r4, #16]
	add r0, r4, #0
	add r0, r0, #125
	strb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
	mov r0, #128
	bl 0x08003DFC
_08019A3A:
	ldr r1, _08019A48  @ =gUnknown_08139AC0
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
_08019A48:
	.4byte gUnknown_08139AC0
	THUMB_FUNC_END sub_080199F4

