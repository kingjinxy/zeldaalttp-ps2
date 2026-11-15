	THUMB_FUNC_START sub_080D4724
sub_080D4724: @ 0x080D4724
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D4764  @ =gRam
	ldr r1, _080D4768  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080D474E
	add r0, r4, #0
	bl sub_080D5464
	ldr r1, _080D476C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #192
	strb r0, [r6]
_080D474E:
	ldr r0, _080D4770  @ =0x00001809
	add r1, r5, r0
	mov r0, #10
	strb r0, [r1]
	ldr r0, _080D4774  @ =0x00001770
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080D4764:
	.4byte gRam
_080D4768:
	.4byte 0x00000FC2
_080D476C:
	.4byte 0x00000F52
_080D4770:
	.4byte 0x00001809
_080D4774:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D4724

