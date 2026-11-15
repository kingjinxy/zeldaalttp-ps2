	THUMB_FUNC_START sub_08044910
sub_08044910: @ 0x08044910
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08044944
	b _080449EC
_08044944:
	add r4, r7, #4
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #112
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	add r0, r1, #0
	add r0, r0, #75
	add r1, r0, #0
	strh r1, [r4]
	ldr r0, [r7]
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	add r4, r7, #4
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	strh r1, [r4]
	ldr r1, [r7]
	add r0, r7, #4
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7]
	add r0, r7, #4
	mov r3, #0
	ldrsh r2, [r0, r3]
	asr r3, r2, #4
	add r0, r3, #0
	add r2, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08003870
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	mov r1, #224
	str r1, [r0, #12]
_080449EC:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08044910

