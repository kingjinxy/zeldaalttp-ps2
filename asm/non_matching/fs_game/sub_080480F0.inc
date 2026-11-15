	THUMB_FUNC_START sub_080480F0
sub_080480F0: @ 0x080480F0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #118
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #118
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldrh r0, [r1]
	cmp r0, #90
	bls _080481B8
	ldr r0, [r7]
	bl sub_080489B0
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #0
	bne _08048150
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	bl GetNextFrame
	b _08048176
_08048150:
	ldr r1, [r7]
	ldr r0, [r1, #120]
	ldr r1, [r7]
	ldr r2, [r1, #120]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08048176:
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #0
	bne _08048190
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	bl GetNextFrame
	b _080481B6
_08048190:
	ldr r1, [r7]
	ldr r0, [r1, #124]
	ldr r1, [r7]
	ldr r2, [r1, #124]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080481B6:
	b _08048312
_080481B8:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldrh r0, [r1]
	cmp r0, #30
	bls _08048226
	ldr r1, [r7]
	ldr r0, [r1, #120]
	ldr r1, [r7]
	ldr r2, [r1, #120]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #124]
	ldr r1, [r7]
	ldr r2, [r1, #124]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	bl GetNextFrame
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	bl GetNextFrame
	b _08048312
_08048226:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldrh r0, [r1]
	cmp r0, #30
	bne _08048286
	ldr r0, [r7]
	bl sub_08048BF4
	ldr r1, [r7]
	ldr r0, [r1, #120]
	ldr r1, [r7]
	ldr r2, [r1, #120]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #124]
	ldr r1, [r7]
	ldr r2, [r1, #124]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08048312
_08048286:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldrh r0, [r1]
	cmp r0, #0
	bne _08048312
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	ldr r0, [r1, #120]
	ldr r1, [r7]
	ldr r2, [r1, #120]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #124]
	ldr r1, [r7]
	ldr r2, [r1, #124]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	mov r1, #1
	bl sub_08003870
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	mov r1, #4
	bl sub_08003870
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	mov r1, #5
	bl sub_08003870
_08048312:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080480F0

	.byte 0x00
	.byte 0x00
