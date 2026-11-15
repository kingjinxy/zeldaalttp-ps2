	THUMB_FUNC_START sub_080AE700
sub_080AE700: @ 0x080AE700
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	mov r0, #1
	mov r1, #8
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _080AE74C
	mov r0, sp
	ldrb r0, [r0]
	str r0, [r4]
	ldr r1, _080AE740  @ =gRam
	mov r2, sp
	ldr r4, _080AE744  @ =0x00001855
	add r0, r1, r4
	ldrb r2, [r2]
	add r0, r0, r2
	strb r3, [r0]
	mov r0, sp
	ldr r2, _080AE748  @ =0x00001853
	add r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #7
	strb r0, [r1]
	mov r0, #0
	b _080AE754
	.byte 0x00
	.byte 0x00
_080AE740:
	.4byte gRam
_080AE744:
	.4byte 0x00001855
_080AE748:
	.4byte 0x00001853
_080AE74C:
	mov r0, sp
	ldrb r0, [r0]
	str r0, [r4]
	mov r0, #1
_080AE754:
	add sp, sp, #4
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AE700

