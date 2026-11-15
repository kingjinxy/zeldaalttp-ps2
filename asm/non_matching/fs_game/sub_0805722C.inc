	THUMB_FUNC_START sub_0805722C
sub_0805722C: @ 0x0805722C
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r2, #0
	add r2, r7, #4
	strh r1, [r2]
	add r1, r7, #6
	strh r0, [r1]
	bl sub_0800099C
	mov r1, #63
	and r0, r0, r1
	cmp r0, #1
	bhi _080572A0
	mov r0, #9
	bl sub_08012468
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0805729C
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	add r0, r7, #6
	ldrh r1, [r0]
	cmp r1, #36
	bhi _0805728E
	add r0, r7, #4
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #7
	mov r0, #79
	bl sub_080144F0
	b _0805729C
_0805728E:
	add r0, r7, #4
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	mov r0, #120
	bl sub_080144F0
_0805729C:
	mov r0, #1
	b _080572A4
_080572A0:
	mov r0, #0
	b _080572A4
_080572A4:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0805722C

