	THUMB_FUNC_START sub_080476DC
sub_080476DC: @ 0x080476DC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_080476E8:
	add r0, r7, #0
	ldr r1, _080476F8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080476FC
	b _08047734
	.byte 0x00
	.byte 0x00
_080476F8:
	.4byte gUnknown_03006C80
_080476FC:
	ldr r0, _08047730  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080476E8
	.byte 0x00
	.byte 0x00
_08047730:
	.4byte gUnknown_03006A30
_08047734:
	bl sub_0803DF84
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080476DC

