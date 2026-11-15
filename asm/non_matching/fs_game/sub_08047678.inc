	THUMB_FUNC_START sub_08047678
sub_08047678: @ 0x08047678
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080476CC  @ =gUnknown_0813F208
	ldr r1, _080476D0  @ =gUnknown_03006C80
	ldrb r2, [r1, #3]
	lsl r1, r2, #1
	add r0, r0, r1
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	bls _080476C4
	add r0, r7, #4
	mov r1, #1
	strb r1, [r0]
	ldr r0, _080476CC  @ =gUnknown_0813F208
	ldr r1, _080476D0  @ =gUnknown_03006C80
	ldrb r2, [r1, #3]
	lsl r1, r2, #1
	add r2, r1, #1
	add r0, r0, r2
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	bls _080476C4
	add r0, r7, #4
	mov r1, #2
	strb r1, [r0]
_080476C4:
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r1, #0
	b _080476D4
_080476CC:
	.4byte gUnknown_0813F208
_080476D0:
	.4byte gUnknown_03006C80
_080476D4:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08047678

