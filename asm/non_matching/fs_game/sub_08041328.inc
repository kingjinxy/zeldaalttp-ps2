	THUMB_FUNC_START sub_08041328
sub_08041328: @ 0x08041328
	push {r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	mov r0, #16
	str r0, [r7, #12]
	add r0, r7, #0
	add r0, r0, #16
	mov r1, #3
	strb r1, [r0]
_0804133C:
	add r0, r7, #0
	add r0, r0, #16
	ldrb r1, [r0]
	cmp r1, #0
	bne _08041348
	b _08041404
_08041348:
	mov r0, #16
	str r0, [r7, #8]
	add r0, r7, #0
	add r0, r0, #17
	mov r1, #3
	strb r1, [r0]
_08041354:
	add r0, r7, #0
	add r0, r0, #17
	ldrb r1, [r0]
	cmp r1, #0
	bne _08041360
	b _080413E6
_08041360:
	ldr r1, [r7, #8]
	add r0, r1, #0
	lsl r2, r0, #16
	asr r1, r2, #16
	ldr r2, [r7, #12]
	add r0, r2, #0
	lsl r3, r0, #16
	asr r2, r3, #16
	ldr r0, [r7]
	bl 0x0800934C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #59
	bne _080413C8
	mov r0, #73
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080413C8
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r3, [r7, #8]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r3, [r7, #12]
	add r2, r3, #0
	ldrh r3, [r1, #54]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_080413C8:
	ldr r0, [r7, #8]
	add r1, r0, #0
	sub r1, r1, #16
	str r1, [r7, #8]
	add r1, r7, #0
	add r1, r1, #17
	add r0, r7, #0
	add r0, r0, #17
	add r1, r7, #0
	add r1, r1, #17
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08041354
_080413E6:
	ldr r0, [r7, #12]
	add r1, r0, #0
	sub r1, r1, #16
	str r1, [r7, #12]
	add r1, r7, #0
	add r1, r1, #16
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #16
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804133C
_08041404:
	add sp, sp, #20
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08041328

