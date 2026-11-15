	THUMB_FUNC_START sub_0806547C
sub_0806547C: @ 0x0806547C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_080660BC
	ldr r0, _080654D8  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r2, #54
	ldrsh r0, [r1, r2]
	mov r1, #135
	lsl r1, r1, #2
	cmp r0, r1
	bgt _0806551C
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_080654C8:
	add r0, r7, #4
	ldr r1, _080654DC  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080654E0
	b _0806551C
	.byte 0x00
	.byte 0x00
_080654D8:
	.4byte gUnknown_03006A30
_080654DC:
	.4byte gUnknown_03006C80
_080654E0:
	ldr r0, _08065518  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080654C8
	.byte 0x00
	.byte 0x00
_08065518:
	.4byte gUnknown_03006A30
_0806551C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806547C

