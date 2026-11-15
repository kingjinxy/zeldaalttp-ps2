	THUMB_FUNC_START sub_0803DFC8
sub_0803DFC8: @ 0x0803DFC8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_0803DFD4:
	add r0, r7, #0
	ldr r1, _0803DFE4  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0803DFE8
	b _0803E040
	.byte 0x00
	.byte 0x00
_0803DFE4:
	.4byte gUnknown_03006C80
_0803DFE8:
	ldr r0, _0803E03C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, _0803E03C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0803DFD4
_0803E03C:
	.4byte gUnknown_03006A30
_0803E040:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803DFC8

