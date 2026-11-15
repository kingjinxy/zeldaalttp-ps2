	THUMB_FUNC_START sub_08035A88
sub_08035A88: @ 0x08035A88
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035AE2
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	mov r3, #0
	ldr r5, _08035AEC  @ =gUnknown_03006C80
	ldrb r0, [r5]
	cmp r3, r0
	bcs _08035AE2
	ldr r1, _08035AF0  @ =gUnknown_03006A30
	mov r8, r1
	ldr r0, _08035AF4  @ =0x000001AD
	mov r12, r0
	mov r7, #15
	mov r6, #1
_08035ABA:
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, r8
	strb r7, [r0, #12]
	mov r1, r12
	strh r1, [r0, #8]
	ldrb r1, [r4, #23]
	add r1, r1, #150
	add r2, r0, #0
	add r2, r2, #56
	strb r1, [r2]
	add r0, r0, #57
	strb r6, [r0]
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldrb r0, [r5]
	cmp r3, r0
	bcc _08035ABA
_08035AE2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08035AEC:
	.4byte gUnknown_03006C80
_08035AF0:
	.4byte gUnknown_03006A30
_08035AF4:
	.4byte 0x000001AD
	THUMB_FUNC_END sub_08035A88

