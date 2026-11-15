	THUMB_FUNC_START sub_080484AC
sub_080484AC: @ 0x080484AC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _080484F8
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, _08048510  @ =gUnknown_0813F554
	str r1, [r0, #72]
	ldr r0, [r7]
	mov r1, #3
	bl sub_08003870
	ldr r0, [r7]
	bl sub_0804894C
_080484F8:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	ldr r1, [r7]
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08048510:
	.4byte gUnknown_0813F554
	THUMB_FUNC_END sub_080484AC

