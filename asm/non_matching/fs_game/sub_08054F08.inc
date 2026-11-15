	THUMB_FUNC_START sub_08054F08
sub_08054F08: @ 0x08054F08
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r4, r7, #0
	add r4, r4, #8
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	strb r1, [r4]
	add r0, r7, #0
	add r0, r0, #10
	ldr r1, _080550BC  @ =gUnknown_08428D00
	add r2, r7, #0
	add r2, r2, #8
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldrh r2, [r1]
	lsr r1, r2, #4
	ldr r2, _080550BC  @ =gUnknown_08428D00
	add r3, r7, #0
	add r3, r3, #8
	ldrb r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r4, #1
	add r4, r3, #0
	lsl r3, r4, #1
	add r2, r2, r3
	ldrh r3, [r2]
	add r2, r3, #0
	add r2, r2, #224
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	mov r0, #153
	lsl r0, r0, #1
	add r2, r7, #0
	add r2, r2, #10
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #0
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08055010
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #82
	add r2, r0, #0
	add r0, r0, #82
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, _080550BC  @ =gUnknown_08428D00
	add r2, r7, #0
	add r2, r2, #8
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, _080550BC  @ =gUnknown_08428D00
	add r2, r7, #0
	add r2, r2, #8
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08055010:
	mov r0, #25
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080550AC
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #82
	add r2, r0, #0
	add r0, r0, #82
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, _080550BC  @ =gUnknown_08428D00
	add r2, r7, #0
	add r2, r2, #8
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, _080550BC  @ =gUnknown_08428D00
	add r2, r7, #0
	add r2, r2, #8
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #208
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_080550AC:
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080550BC:
	.4byte gUnknown_08428D00
	THUMB_FUNC_END sub_08054F08

