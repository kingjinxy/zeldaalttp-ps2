	THUMB_FUNC_START sub_08026E24
sub_08026E24: @ 0x08026E24
	push {r4,lr}
	add r4, r0, #0
	mov r0, #2
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #18
	beq _08026E54
	mov r1, #50
	ldrsh r0, [r4, r1]
	cmp r0, #0
	bne _08026E46
	mov r1, #54
	ldrsh r0, [r4, r1]
	cmp r0, #0
	beq _08026E54
_08026E46:
	ldrb r0, [r4, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r4, #28]
_08026E54:
	ldr r0, _08026E9C  @ =gUnknown_0813CC1C
	add r1, r4, #0
	add r1, r1, #112
	ldrb r1, [r1]
	bl 0x08000AAC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08026E8E
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #24]
	ldrb r1, [r4, #30]
	sub r0, r0, #17
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #30]
	add r1, r4, #0
	add r1, r1, #32
	mov r0, #244
	strb r0, [r1]
	ldrb r1, [r4, #28]
	mov r0, #63
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #145
	strb r0, [r4, #27]
_08026E8E:
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_08026E9C:
	.4byte gUnknown_0813CC1C
	THUMB_FUNC_END sub_08026E24

