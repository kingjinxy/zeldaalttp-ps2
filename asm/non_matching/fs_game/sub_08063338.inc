	THUMB_FUNC_START sub_08063338
sub_08063338: @ 0x08063338
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	beq _08063364
	ldr r0, _08063360  @ =gUnknown_084293D8
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	b _08063378
	.byte 0x00
	.byte 0x00
_08063360:
	.4byte gUnknown_084293D8
_08063364:
	ldr r0, _08063380  @ =gUnknown_084293D0
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08063378:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08063380:
	.4byte gUnknown_084293D0
	THUMB_FUNC_END sub_08063338

